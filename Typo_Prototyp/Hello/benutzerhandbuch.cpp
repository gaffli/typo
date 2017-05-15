#include "benutzerhandbuch.h"
#include "ui_benutzerhandbuch.h"

Benutzerhandbuch::Benutzerhandbuch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Benutzerhandbuch)
{
    ui->setupUi(this);
}

Benutzerhandbuch::~Benutzerhandbuch()
{
    delete ui;
}

void Benutzerhandbuch::on_pushButton_back_clicked()
{
    this->close();
}
