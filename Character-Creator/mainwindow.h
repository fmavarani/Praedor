#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "character.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    character user;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void update();
    void on_STR_valueChanged(int arg1);

    void on_CON_valueChanged(int arg1);

    void on_AGI_valueChanged(int arg1);

    void on_AWE_valueChanged(int arg1);

    void on_BRA_valueChanged(int arg1);

    void on_CHA_valueChanged(int arg1);

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
