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
    QString taste;
    int zaehler = 0;
    int linewert;
    int tippwert;
    int spacezaehler = 0;

private:
    Ui::MainWindow *ui;
    bool eventFilter(QObject *obj, QEvent *event);
    void Vergleich();
    QString line;


};

#endif // MAINWINDOW_H
