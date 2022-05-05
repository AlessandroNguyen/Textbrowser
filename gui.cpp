#include "gui.h"
#include <QDebug>

Gui::Gui(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
}


void Gui::on_goButton_clicked()
{
    QString host = hostEntry->text();


}

void Gui::readyRead()
{


}

