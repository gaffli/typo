#include "benutzerhandbuch.h"
#include "ui_benutzerhandbuch.h"

Benutzerhandbuch::Benutzerhandbuch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Benutzerhandbuch)
{
    ui->setupUi(this);
    Hide();
    ui->AAVollstaendigesHandbuch_2->show();

}

Benutzerhandbuch::~Benutzerhandbuch()
{
    delete ui;
}

void Benutzerhandbuch::Hide()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->hide();
    ui->ELernvorgang_2->hide();
    ui->FUmgangmitderBildschirmtastatur_2->hide();
    ui->GDasHauptmenue_2->hide();
    ui->HDasLernenAnfaengerUebungen_2->hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_AAVollstaendigesHandbuch_clicked()
{
    Hide();
    ui->AAVollstaendigesHandbuch_2->show();
}

void Benutzerhandbuch::on_AInhaltsangabe_clicked()
{
    Hide();
    ui->AInhaltsangabe_2->show();
}

void Benutzerhandbuch::on_BVorwort_clicked()
{
    Hide();
    ui->BVorwort_2->show();
}

void Benutzerhandbuch::on_CEinfuehrungTypo_clicked()
{
    Hide();
    ui->CEinfuehrungTypo_2->show();
}

void Benutzerhandbuch::on_DBenutzerkontofuehrung_clicked()
{
    Hide();
    ui->DBenutzerkontofuehrung_2->show();
}

void Benutzerhandbuch::on_ELernvorgang_clicked()
{
    Hide();
    ui->ELernvorgang_2->show();
}

void Benutzerhandbuch::on_FUmgangmitderBildschirmtastatur_clicked()
{
    Hide();
    ui->FUmgangmitderBildschirmtastatur_2->show();
}

void Benutzerhandbuch::on_GDasHauptmenue_clicked()
{
    Hide();
    ui->GDasHauptmenue_2->show();
}

void Benutzerhandbuch::on_HDasLernenAnfaengerUebungen_clicked()
{
    Hide();
    ui->HDasLernenAnfaengerUebungen_2->show();
}

void Benutzerhandbuch::on_IDasLernenFortgeschrittenenUebungen_clicked()
{
    Hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->show();
}

void Benutzerhandbuch::on_JDieWettkaempfeZeitWettkaempfe_clicked()
{
    Hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->show();
}

void Benutzerhandbuch::on_KDieWettkaempfeMultiplayerWettkampf_clicked()
{
    Hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->show();
}

void Benutzerhandbuch::on_LStatistik_clicked()
{
    Hide();
    ui->LStatistik_2->show();
}

void Benutzerhandbuch::on_MSchliessen_clicked()
{
    this->close();
}
