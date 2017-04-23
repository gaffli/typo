#include "registrieren.h"
#include "ui_registrieren.h"

registrieren::registrieren(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrieren)
{
    ui->setupUi(this);
}

registrieren::~registrieren()
{
    delete ui;
}

void registrieren::on_reg_zurueck_clicked()
{
    this->close();
}
