/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Character;
    QFrame *frame;
    QLineEdit *name;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *STR;
    QLabel *label_3;
    QSpinBox *CON;
    QSpinBox *AGI;
    QLabel *label_4;
    QSpinBox *AWE;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *BRA;
    QSpinBox *CHA;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *Damage;
    QLabel *mweight;
    QLabel *label_9;
    QWidget *Equipment;
    QWidget *Health;
    QMenuBar *menuBar;
    QMenu *menu_file;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(961, 512);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 10, 841, 391));
        Character = new QWidget();
        Character->setObjectName(QStringLiteral("Character"));
        frame = new QFrame(Character);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-10, 0, 921, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        name = new QLineEdit(frame);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 20, 113, 20));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 47, 13));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 53, 47, 20));
        STR = new QSpinBox(frame);
        STR->setObjectName(QStringLiteral("STR"));
        STR->setGeometry(QRect(70, 50, 42, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 73, 47, 20));
        CON = new QSpinBox(frame);
        CON->setObjectName(QStringLiteral("CON"));
        CON->setGeometry(QRect(70, 70, 42, 22));
        AGI = new QSpinBox(frame);
        AGI->setObjectName(QStringLiteral("AGI"));
        AGI->setGeometry(QRect(70, 97, 42, 22));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 100, 47, 20));
        AWE = new QSpinBox(frame);
        AWE->setObjectName(QStringLiteral("AWE"));
        AWE->setGeometry(QRect(70, 120, 42, 22));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 123, 47, 20));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 146, 47, 20));
        BRA = new QSpinBox(frame);
        BRA->setObjectName(QStringLiteral("BRA"));
        BRA->setGeometry(QRect(70, 143, 42, 22));
        CHA = new QSpinBox(frame);
        CHA->setObjectName(QStringLiteral("CHA"));
        CHA->setGeometry(QRect(70, 167, 42, 22));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 170, 47, 20));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 50, 81, 16));
        Damage = new QLabel(frame);
        Damage->setObjectName(QStringLiteral("Damage"));
        Damage->setGeometry(QRect(230, 49, 41, 21));
        mweight = new QLabel(frame);
        mweight->setObjectName(QStringLiteral("mweight"));
        mweight->setGeometry(QRect(240, 69, 41, 21));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 70, 81, 16));
        tabWidget->addTab(Character, QString());
        Equipment = new QWidget();
        Equipment->setObjectName(QStringLiteral("Equipment"));
        tabWidget->addTab(Equipment, QString());
        Health = new QWidget();
        Health->setObjectName(QStringLiteral("Health"));
        tabWidget->addTab(Health, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 21));
        menu_file = new QMenu(menuBar);
        menu_file->setObjectName(QStringLiteral("menu_file"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_file->menuAction());
        menu_file->addAction(actionOpen);
        menu_file->addAction(actionSave);
        menu_file->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "STR", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "CON", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "AGI", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "AWE", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "BRA", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "CHA", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Damage Bonus:", Q_NULLPTR));
        Damage->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        mweight->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Weight Capacity:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Character), QApplication::translate("MainWindow", "Character", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Equipment), QApplication::translate("MainWindow", "Equipment", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Health), QApplication::translate("MainWindow", "Health", Q_NULLPTR));
        menu_file->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
