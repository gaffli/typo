#include "optionen.h"
#include "ui_optionen.h"
#include "info.h"
optionen::optionen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::optionen)
{
    ui->setupUi(this);
}

optionen::~optionen()
{
    delete ui;
}

void optionen::on_b_back_clicked()
{
    this->close();
}

void optionen::on_b_info_clicked()
{
  info inf;
    inf.setModal(true);
    inf.exec();
}
