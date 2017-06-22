#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    bool eventFilter(QObject *obj, QEvent *event);
    void Vergleich();
    QString text;
    int tippwert;
    int spacezaehler = 0;
    int textcounter = 0;
    int zaehler = 0;



};

#endif // MAINWINDOW_H
