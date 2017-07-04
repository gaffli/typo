#include "fehleranalyse.h"
#include <iostream>

Fehleranalyse::Fehleranalyse()
{
  Fehleranalyse::WordfromText = new QString();
  Fehleranalyse::text = new QString();
}

Fehleranalyse::~Fehleranalyse()
{
  delete Fehleranalyse::text;
  delete Fehleranalyse::WordfromText;
}

void Fehleranalyse::analyse(QString WordfromUser)
{
  if(run)
    {

          if(Fehleranalyse::WordfromText != WordfromUser)
            {
              Fehleranalyse::NumberofErrors++;
              std::cout<< Fehleranalyse::NumberofErrors << std::endl;
              emit wrong_word(WordfromUser, Fehleranalyse::WordfromText,Fehleranalyse::NumberofErrors);
            }
          if(Fehleranalyse::WordfromText == WordfromUser)
            {
              Fehleranalyse::NumberofCorrectWords++;
            }
          GetnextWord();

    }
}

void Fehleranalyse::GetnextWord()
{
  const QChar *CharacterfromText;
  Fehleranalyse::WordfromText->clear();
  do{
      if(Fehleranalyse::textcounter >= Fehleranalyse::text->length())
        {
          Fehleranalyse::end();
          return;
        }

       CharacterfromText = &(Fehleranalyse::text->at(Fehleranalyse::textcounter));
      if(CharacterfromText->isSpace())
        {
          Fehleranalyse::textcounter++;
          return;
        }
      Fehleranalyse::WordfromText->append(*CharacterfromText);
      Fehleranalyse::textcounter++;

    }
  while(!CharacterfromText->isSpace());
}

void Fehleranalyse::start(QString neuertext)
{
  Fehleranalyse::NumberofErrors = 0;
  Fehleranalyse::NumberofCorrectWords=0;
  Fehleranalyse::textcounter = 0;
  *Fehleranalyse::text = neuertext;
  Fehleranalyse::GetnextWord();
  Fehleranalyse::run = true;
}

void Fehleranalyse::end()
{

  Fehleranalyse::run = false;
  Fehleranalyse::WordfromText->clear();

}

bool Fehleranalyse::IsRunning()
{
  return run;
}
