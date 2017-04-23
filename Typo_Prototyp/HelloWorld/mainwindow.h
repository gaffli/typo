#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QWidget>
#include "key.h"

namespace Ui {
class MainWindow;
class QWidget;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_anmelden_clicked();

    void on_optionen_clicked();

    void on_lernen_clicked();

    void on_bl_zeige_clicked();

    void on_bl_mittel_clicked();

    void on_bl_ring_clicked();

    void on_bl_kleiner_clicked();


    void on_br_zeige_clicked();

    void on_br_mittel_clicked();

    void on_br_ring_clicked();

    void on_br_kleiner_clicked();

    void on_button_uebungende_clicked();

private:
    Ui::MainWindow *ui;
    Ui::QWidget *Form;
    key *keyboard;
};

#endif // MAINWINDOW_H
