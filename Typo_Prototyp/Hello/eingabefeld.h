#ifndef EINGABEFELD_H
#define EINGABEFELD_H

#include <QWidget>
#include <QMainWindow>

#include <Windows.h>

namespace Ui {
class eingabefeld;
}

class eingabefeld : public QWidget
{
    Q_OBJECT

public:
    explicit eingabefeld(QWidget *parent = 0);
    ~eingabefeld();

    bool eventFilter(QObject *obj, QEvent *event);


signals:
    void signal_taste(int);


private:
    Ui::eingabefeld *ui;
};

#endif // EINGABEFELD_H
