#ifndef BENUTZERHANDBUCH_H
#define BENUTZERHANDBUCH_H

#include <QDialog>

namespace Ui {
class Benutzerhandbuch;
}

class Benutzerhandbuch : public QDialog
{
    Q_OBJECT

public:
    explicit Benutzerhandbuch(QWidget *parent = 0);
    ~Benutzerhandbuch();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::Benutzerhandbuch *ui;
};

#endif // BENUTZERHANDBUCH_H
