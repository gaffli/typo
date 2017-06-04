#include "benutzerhandbuch.h"
#include "ui_benutzerhandbuch.h"

Benutzerhandbuch::Benutzerhandbuch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Benutzerhandbuch)
{
    ui->setupUi(this);
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
    ui->AAVollstaendigesHandbuch_2->show();

}

Benutzerhandbuch::~Benutzerhandbuch()
{
    delete ui;
}

void Benutzerhandbuch::on_AAVollstaendigesHandbuch_clicked()
{
    ui->AAVollstaendigesHandbuch_2->show();
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

void Benutzerhandbuch::on_AInhaltsangabe_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->show();
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

void Benutzerhandbuch::on_BVorwort_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->show();
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

void Benutzerhandbuch::on_CEinfuehrungTypo_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->show();
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

void Benutzerhandbuch::on_DBenutzerkontofuehrung_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->show();
    ui->ELernvorgang_2->hide();
    ui->FUmgangmitderBildschirmtastatur_2->hide();
    ui->GDasHauptmenue_2->hide();
    ui->HDasLernenAnfaengerUebungen_2->hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_ELernvorgang_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->hide();
    ui->ELernvorgang_2->show();
    ui->FUmgangmitderBildschirmtastatur_2->hide();
    ui->GDasHauptmenue_2->hide();
    ui->HDasLernenAnfaengerUebungen_2->hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_FUmgangmitderBildschirmtastatur_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->hide();
    ui->ELernvorgang_2->hide();
    ui->FUmgangmitderBildschirmtastatur_2->show();
    ui->GDasHauptmenue_2->hide();
    ui->HDasLernenAnfaengerUebungen_2->hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_GDasHauptmenue_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->hide();
    ui->ELernvorgang_2->hide();
    ui->FUmgangmitderBildschirmtastatur_2->hide();
    ui->GDasHauptmenue_2->show();
    ui->HDasLernenAnfaengerUebungen_2->hide();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_HDasLernenAnfaengerUebungen_clicked()
{
    ui->AAVollstaendigesHandbuch_2->hide();
    ui->AInhaltsangabe_2->hide();
    ui->BVorwort_2->hide();
    ui->CEinfuehrungTypo_2->hide();
    ui->DBenutzerkontofuehrung_2->hide();
    ui->ELernvorgang_2->hide();
    ui->FUmgangmitderBildschirmtastatur_2->hide();
    ui->GDasHauptmenue_2->hide();
    ui->HDasLernenAnfaengerUebungen_2->show();
    ui->IDasLernenFortgeschrittenenUebungen_2->hide();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_IDasLernenFortgeschrittenenUebungen_clicked()
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
    ui->IDasLernenFortgeschrittenenUebungen_2->show();
    ui->JDieWettkaempfeZeitWettkaempfe_2->hide();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_JDieWettkaempfeZeitWettkaempfe_clicked()
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
    ui->JDieWettkaempfeZeitWettkaempfe_2->show();
    ui->KDieWettkaempfeMultiplayerWettkampf_2->hide();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_KDieWettkaempfeMultiplayerWettkampf_clicked()
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
    ui->KDieWettkaempfeMultiplayerWettkampf_2->show();
    ui->LStatistik_2->hide();
}

void Benutzerhandbuch::on_LStatistik_clicked()
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
    ui->LStatistik_2->show();
}

void Benutzerhandbuch::on_MSchliessen_clicked()
{
    this->close();
}
