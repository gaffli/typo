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
    int taste;

private:
    Ui::MainWindow *ui;
    bool eventFilter(QObject *obj, QEvent *event);
    void Vergleich(int taste);
    QString line;


};

#endif // MAINWINDOW_H
