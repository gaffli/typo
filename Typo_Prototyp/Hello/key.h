#ifndef KEY_H
#define KEY_H

#include <Windows.h>
#include <QWidget>

namespace Ui {
  class key;
}

class key : public QWidget
{
  Q_OBJECT

public:
  explicit key(QWidget *parent = 0);
  ~key();

private:
  Ui::key *ui;

protected:

     bool eventFilter(QObject *obj, QEvent *event);
};

#endif // KEY_H
