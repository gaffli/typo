#ifndef REGISTRIEREN_H
#define REGISTRIEREN_H

#include <QDialog>
#include <QtSql>
#include <QDebug>

namespace Ui {
class registrieren;
}

class registrieren : public QDialog
{
    Q_OBJECT

public:
    explicit registrieren(QWidget *parent = 0);
    ~registrieren();

private slots:
    void on_reg_zurueck_clicked();

    void on_but_registrieren_clicked();

private:
    Ui::registrieren *ui;
};

#endif // REGISTRIEREN_H
