#include "benutzerhandbuch.h"
#include "ui_benutzerhandbuch.h"
#include "windows.h"
#include <QDesktopServices>
#include <QDir>
#include <QUrl>





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

void Benutzerhandbuch::SetPath()
{
    Url = QDir::currentPath();
    Url.push_front("file:///");
}

void Benutzerhandbuch::on_AAVollstaendigesHandbuch_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/AAVollstaendigesHandbuch.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_AInhaltsangabe_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/AInhaltsangabe.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_BVorwort_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/BVorwort.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_CEinfuehrungTypo_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/CEinfuehrungTypo.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_DBenutzerkontofuehrung_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/DBenutzerkontofuehrung.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_ELernvorgang_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/ELernvorgang.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_FUmgangmitderBildschirmtastatur_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/FUmgangmitderBildschirmtastatur.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_GDasHauptmenue_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/GDasHauptmenue.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_HDasLernenAnfaengerUebungen_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/HDasLernenAnfaengerUebungen.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_IDasLernenFortgeschrittenenUebungen_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/IDasLernenFortgeschrittenenUebungen.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_JDieWettkaempfeZeitWettkaempfe_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/JDieWettkaempfeZeitWettkaempfe.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_KDieWettkaempfeMultiplayerWettkampf_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/KDieWettkaempfeMultiplayerWettkampf.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_LStatistik_clicked()
{
    SetPath();
    Url.push_back("/Handbuch/LStatistik.pdf");
    QDesktopServices::openUrl(QUrl(Url, QUrl::TolerantMode));
}

void Benutzerhandbuch::on_MSchliessen_clicked()
{
    this->close();
}
