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
       void on_AAVollstaendigesHandbuch_clicked();

        void on_AInhaltsangabe_clicked();

        void on_BVorwort_clicked();

        void on_CEinfuehrungTypo_clicked();

        void on_DBenutzerkontofuehrung_clicked();

        void on_ELernvorgang_clicked();

        void on_FUmgangmitderBildschirmtastatur_clicked();

        void on_GDasHauptmenue_clicked();

        void on_HDasLernenAnfaengerUebungen_clicked();

        void on_IDasLernenFortgeschrittenenUebungen_clicked();

        void on_JDieWettkaempfeZeitWettkaempfe_clicked();

        void on_KDieWettkaempfeMultiplayerWettkampf_clicked();

        void on_LStatistik_clicked();

        void on_MSchliessen_clicked();

private:
    Ui::Benutzerhandbuch *ui;
};

#endif // BENUTZERHANDBUCH_H
