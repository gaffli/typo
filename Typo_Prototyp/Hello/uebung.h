#ifndef UEBUNG_H
#define UEBUNG_H
#include <QMainWindow>
#include <QString>
#include <QSignalMapper>


namespace Ui {
class uebung;
}

class uebung : public QMainWindow
{
    Q_OBJECT

public:
    explicit uebung(QWidget *parent = 0);
    ~uebung();
    void signaltraffic(int taste, int z);



signals:
    void s_ts_tast(int taste, int textstelle);
    void Taste_richtig(int taste);
    void Taste_falsch(int taste, int textstelle);
    void Text(QString *txt);
    void Tog(QString *txt, int taste, int textstelle);


public slots:
     void signals_taste(int taste);
     void s_tts_tast(QString *txt, int taste, int textstelle);
     void signtr(int taste, int *wert);
     QString *Text_slot(QString *txt);



private:
    Ui::uebung *ui;

};

#endif // UEBUNG_H
