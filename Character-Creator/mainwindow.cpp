#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "character.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    user= character();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::update()
{

    ui->Damage->setText(QString::number(user.getDamage()));
    ui->mweight->setText(QString::number(user.getMaxWeight()));

}
void MainWindow::on_STR_valueChanged(int arg1)
{
 user.setSTR(arg1);
 QString s="";
 if(user.getSTR()>=1)s="-2";
 if(user.getSTR()>=6)s="-1";
 if(user.getSTR()>=10)s="0";
 if(user.getSTR()>=14)s="1";
 if(user.getSTR()>=18)s="2";
 if(user.getSTR()>=20)s="3";
 user.setDamage(s.toInt());
 //int x=arg1*25;
 user.setMaxWeight(arg1*25);
 update();

}

void MainWindow::on_CON_valueChanged(int arg1)
{
   user.setCON(arg1);
}

void MainWindow::on_AGI_valueChanged(int arg1)
{
    user.setAGI(arg1);
}

void MainWindow::on_AWE_valueChanged(int arg1)
{

    user.setAWE(arg1);
}

void MainWindow::on_BRA_valueChanged(int arg1)
{
    user.setBRA(arg1);
}

void MainWindow::on_CHA_valueChanged(int arg1)
{
    user.setCHA(arg1);
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileNames = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("XML Files (*.XML)"));

}

void MainWindow::on_actionSave_triggered()
{
    QString filename= QFileDialog::getSaveFileName(this, "Save file", "", ".XML");
    QFile f( filename );
    f.open( QIODevice::WriteOnly );
    // store data in f
    f.close();
}
