#ifndef FEHLERANALYSE_H
#define FEHLERANALYSE_H
#include <QString>
#include <QObject>

class Fehleranalyse:public QObject
{
public:
  Fehleranalyse();
  ~Fehleranalyse();
  void start(QString neuertext);
  void end();
  void reset();
  bool IsRunning();
  int NumberofErrors=0;
  int NumberofCorrectWords=0;
  int WPM=0;
  void analyse(QString WordfromUser);

private:
  bool run = false;
  int textcounter = 0;
  QString *text;
  QString *WordfromText;
  void GetnextWord();

signals:
  void wrong_word(QString, QString*, int);

};



#endif // FEHLERANALYSE_H
