#ifndef OPTIONEN_H
#define OPTIONEN_H

#include <QDialog>

namespace Ui {
class optionen;
}

class optionen : public QDialog
{
    Q_OBJECT

public:
    explicit optionen(QWidget *parent = 0);
    ~optionen();

private slots:
    void on_b_back_clicked();

    void on_b_info_clicked();

private:
    Ui::optionen *ui;
};

#endif // OPTIONEN_H
