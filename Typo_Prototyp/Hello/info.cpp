#include "info.h"
#include "ui_info.h"
#include <QDesktopServices>
#include <QUrl>

info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    this->setWindowTitle("Info");
}

info::~info()
{
    delete ui;
}

void info::on_b_back_clicked()
{
    this->close();
}

void info::on_pushButton_clicked()
{
  QString link="https://c1221745.virtualuser.de/wordpress";
  QDesktopServices::openUrl(QUrl(link));

}
