#include "key.h"
#include "ui_key.h"
#include "mainwindow.h"
#include <iostream>
#include <QString>
#include <QChar>
#include <QLineEdit>
#include <QTextEdit>
#include <QMainWindow>
#include <QLayout>
#include <QWidget>
#include <QHBoxLayout>
#include <Windows.h>
#include <QKeyEvent>

#define Animationszeit 90
using namespace Qt;

key::key(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::key)
{
  ui->setupUi(this);
  setFocusPolicy(StrongFocus);
  qApp->installEventFilter(this);

}

key::~key()
{

  delete ui;
}

bool key::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {

            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            int taste = keyEvent->key();
            switch( taste)
            {
              //-----SPEZIELLE TASTEN------
              case Key_Shift:
                key::ui->_umschaltL->animateClick(Animationszeit);
                key::ui->_umschaltR->animateClick(Animationszeit);
                break;
              case Key_Question:
                  key::ui->ss->animateClick(Animationszeit);
                break;
              case Key_Backspace:
                  key::ui->backspace->animateClick(Animationszeit);
                  break;
              case (Key_Return):
                  key::ui->_enter->animateClick(Animationszeit);
                  break;
              case Key_Comma:
                  key::ui->_comma->animateClick(Animationszeit);
                  break;
              case Key_Semicolon:
                  key::ui->_comma->animateClick(Animationszeit);
                  break;
              case Key_Period:
                  key::ui->_point->animateClick(Animationszeit);
                  break;
              case Key_Colon:
                  key::ui->_point->animateClick(Animationszeit);
                  break;
              case Key_Underscore:
                  key::ui->_underscore->animateClick(Animationszeit);
                  break;
              case Key_Minus:
                  key::ui->_underscore->animateClick(Animationszeit);
                  break;
              case Key_NumberSign:
                  key::ui->_hashtag->animateClick(Animationszeit);
                  break;
              case Key_Exclam:
                  key::ui->_1->animateClick(Animationszeit);
                  break;
              case Key_QuoteDbl:
                  key::ui->_2->animateClick(Animationszeit);
                  break;
              case Key_section:
                  key::ui->_3->animateClick(Animationszeit);
                  break;
              case Key_Dollar:
                  key::ui->_4->animateClick(Animationszeit);
                  break;
              case Key_Percent:
                  key::ui->_5->animateClick(Animationszeit);
                  break;
              case Key_Ampersand:
                  key::ui->_6->animateClick(Animationszeit);
                  break;
              case Key_Slash:
                  key::ui->_7->animateClick(Animationszeit);
                  break;
              case Key_ParenLeft:
                  key::ui->_8->animateClick(Animationszeit);
                  break;
              case Key_ParenRight:
                  key::ui->_9->animateClick(Animationszeit);
                  break;
              case Key_Equal:
                  key::ui->_0->animateClick(Animationszeit);
                  break;
              case Key_Space:
                  key::ui->space->animateClick(Animationszeit);
                  break;

              //--------ZAHLEN-------
              case Key_0:
                  key::ui->_0->animateClick(Animationszeit);
                  break;
              case Key_1:
                  key::ui->_1->animateClick(Animationszeit);
                  break;
              case Key_2:
                  key::ui->_2->animateClick(Animationszeit);
                  break;
              case Key_3:
                  key::ui->_3->animateClick(Animationszeit);
                  break;
              case Key_4:
                  key::ui->_4->animateClick(Animationszeit);
                  break;
              case Key_5:
                  key::ui->_5->animateClick(Animationszeit);
                  break;
              case Key_6:
                  key::ui->_6->animateClick(Animationszeit);
                  break;
              case Key_7:
                  key::ui->_7->animateClick(Animationszeit);
                  break;
              case Key_8:
                  key::ui->_8->animateClick(Animationszeit);
                  break;
              case Key_9:
                  key::ui->_9->animateClick(Animationszeit);
                  break;
              //---------BUCHSTABEN---------
              case Key_A:
                  key::ui->_A->animateClick(Animationszeit);
                  break;
              case Key_B:
                  key::ui->_B->animateClick(Animationszeit);
                  break;
              case Key_C:
                  key::ui->_C->animateClick(Animationszeit);
                  break;
              case Key_D:
                  key::ui->_D->animateClick(Animationszeit);
                  break;
              case Key_E:
                  key::ui->_E->animateClick(Animationszeit);
                  break;
              case Key_F:
                  key::ui->_F->animateClick(Animationszeit);
                  break;
              case Key_G:
                  key::ui->_G->animateClick(Animationszeit);
                  break;
              case Key_H:
                  key::ui->_H->animateClick(Animationszeit);
                  break;
              case Key_I:
                  key::ui->_Ii->animateClick(Animationszeit);
                  break;
              case Key_J:
                  key::ui->_J->animateClick(Animationszeit);
                  break;
              case Key_K:
                  key::ui->_K->animateClick(Animationszeit);
                  break;
              case Key_L:
                  key::ui->_L->animateClick(Animationszeit);
                  break;
              case Key_M:
                  key::ui->_M->animateClick(Animationszeit);
                  break;
              case Key_N:
                  key::ui->_N->animateClick(Animationszeit);
                  break;
              case Key_O:
                  key::ui->_O->animateClick(Animationszeit);
                  break;
              case Key_P:
                  key::ui->_P->animateClick(Animationszeit);
                  break;
              case Key_Q:
                  key::ui->_Q->animateClick(Animationszeit);
                  break;
              case Key_R:
                  key::ui->_R->animateClick(Animationszeit);
                  break;
              case Key_S:
                  key::ui->_S->animateClick(Animationszeit);
                  break;
              case Key_T:
                  key::ui->_T->animateClick(Animationszeit);
                  break;
              case Key_U:
                  key::ui->_U->animateClick(Animationszeit);
                  break;
              case Key_V:
                  key::ui->_V->animateClick(Animationszeit);
                  break;
              case Key_W:
                  key::ui->_W->animateClick(Animationszeit);
                  break;
              case Key_X:
                  key::ui->_X->animateClick(Animationszeit);
                  break;
              case Key_Y:
                  key::ui->_Y->animateClick(Animationszeit);
                  break;
              case Key_Z:
                  key::ui->_Z->animateClick(Animationszeit);
                  break;
              case Key_ssharp:
                  key::ui->ss->animateClick(Animationszeit);
                  break;
              case (196): //Ä
                  key::ui->_ae->animateClick(Animationszeit);
                  break;
              case (214)://Ö
                  key::ui->_oe->animateClick(Animationszeit);
                  break;
              case (220): //Ü
                  key::ui->_ue->animateClick(Animationszeit);
                  break;


             }
    }
    return QObject::eventFilter(obj, event);
}


