/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionKmeans;
    QAction *actionFind_Contours;
    QAction *actionComandos;
    QAction *actionAzul;
    QAction *actionAmarelo;
    QAction *select_azul;
    QAction *select_amarelo;
    QAction *actionAbrir_Settings;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *janela;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *ListSerial;
    QPushButton *ConectarSerial;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QLabel *label_2;
    QComboBox *combo_atacante;
    QLabel *label_3;
    QComboBox *combo_zagueiro;
    QLabel *label_4;
    QComboBox *combo_goleiro;
    QFrame *line_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *Tempoms;
    QLabel *milesegundos;
    QLabel *Tempo;
    QMenuBar *menuBar;
    QMenu *menu_Classificadores;
    QMenu *menuTime;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1042, 639);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icone/imagens/oie_transparent.png"), QSize(), QIcon::Active, QIcon::On);
        MainWindow->setWindowIcon(icon);
        actionKmeans = new QAction(MainWindow);
        actionKmeans->setObjectName(QStringLiteral("actionKmeans"));
        actionKmeans->setCheckable(false);
        actionKmeans->setChecked(false);
        actionFind_Contours = new QAction(MainWindow);
        actionFind_Contours->setObjectName(QStringLiteral("actionFind_Contours"));
        actionFind_Contours->setCheckable(false);
        actionComandos = new QAction(MainWindow);
        actionComandos->setObjectName(QStringLiteral("actionComandos"));
        actionAzul = new QAction(MainWindow);
        actionAzul->setObjectName(QStringLiteral("actionAzul"));
        actionAzul->setCheckable(true);
        actionAzul->setChecked(true);
        actionAmarelo = new QAction(MainWindow);
        actionAmarelo->setObjectName(QStringLiteral("actionAmarelo"));
        actionAmarelo->setCheckable(true);
        select_azul = new QAction(MainWindow);
        select_azul->setObjectName(QStringLiteral("select_azul"));
        select_azul->setCheckable(true);
        select_azul->setChecked(false);
        select_azul->setAutoRepeat(true);
        select_amarelo = new QAction(MainWindow);
        select_amarelo->setObjectName(QStringLiteral("select_amarelo"));
        select_amarelo->setCheckable(true);
        select_amarelo->setChecked(true);
        actionAbrir_Settings = new QAction(MainWindow);
        actionAbrir_Settings->setObjectName(QStringLiteral("actionAbrir_Settings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        janela = new QLabel(centralWidget);
        janela->setObjectName(QStringLiteral("janela"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(janela->sizePolicy().hasHeightForWidth());
        janela->setSizePolicy(sizePolicy);
        janela->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(janela);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ListSerial = new QComboBox(groupBox_2);
        ListSerial->setObjectName(QStringLiteral("ListSerial"));

        verticalLayout_2->addWidget(ListSerial);

        ConectarSerial = new QPushButton(groupBox_2);
        ConectarSerial->setObjectName(QStringLiteral("ConectarSerial"));

        verticalLayout_2->addWidget(ConectarSerial);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        combo_atacante = new QComboBox(groupBox);
        combo_atacante->setObjectName(QStringLiteral("combo_atacante"));

        gridLayout_2->addWidget(combo_atacante, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        combo_zagueiro = new QComboBox(groupBox);
        combo_zagueiro->setObjectName(QStringLiteral("combo_zagueiro"));

        gridLayout_2->addWidget(combo_zagueiro, 3, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        combo_goleiro = new QComboBox(groupBox);
        combo_goleiro->setObjectName(QStringLiteral("combo_goleiro"));

        gridLayout_2->addWidget(combo_goleiro, 4, 1, 1, 2);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 5, 0, 1, 3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 6, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalSpacer = new QSpacerItem(280, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        Tempoms = new QLabel(centralWidget);
        Tempoms->setObjectName(QStringLiteral("Tempoms"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Tempoms->sizePolicy().hasHeightForWidth());
        Tempoms->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(Tempoms);

        milesegundos = new QLabel(centralWidget);
        milesegundos->setObjectName(QStringLiteral("milesegundos"));
        sizePolicy2.setHeightForWidth(milesegundos->sizePolicy().hasHeightForWidth());
        milesegundos->setSizePolicy(sizePolicy2);
        milesegundos->setMaximumSize(QSize(45, 16777215));

        verticalLayout_3->addWidget(milesegundos);

        Tempo = new QLabel(centralWidget);
        Tempo->setObjectName(QStringLiteral("Tempo"));
        sizePolicy2.setHeightForWidth(Tempo->sizePolicy().hasHeightForWidth());
        Tempo->setSizePolicy(sizePolicy2);
        Tempo->setMaximumSize(QSize(40, 16777215));

        verticalLayout_3->addWidget(Tempo);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1042, 21));
        menu_Classificadores = new QMenu(menuBar);
        menu_Classificadores->setObjectName(QStringLiteral("menu_Classificadores"));
        menuTime = new QMenu(menuBar);
        menuTime->setObjectName(QStringLiteral("menuTime"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Classificadores->menuAction());
        menuBar->addAction(menuTime->menuAction());
        menu_Classificadores->addAction(actionAbrir_Settings);
        menu_Classificadores->addAction(actionKmeans);
        menuTime->addAction(select_azul);
        menuTime->addAction(select_amarelo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Vision System", 0));
        actionKmeans->setText(QApplication::translate("MainWindow", "Constantes", 0));
        actionFind_Contours->setText(QApplication::translate("MainWindow", "Find Contours", 0));
        actionComandos->setText(QApplication::translate("MainWindow", "Comandos", 0));
        actionAzul->setText(QApplication::translate("MainWindow", "Azul", 0));
        actionAmarelo->setText(QApplication::translate("MainWindow", "Amarelo", 0));
        select_azul->setText(QApplication::translate("MainWindow", "Azul", 0));
        select_amarelo->setText(QApplication::translate("MainWindow", "Amarelo", 0));
        actionAbrir_Settings->setText(QApplication::translate("MainWindow", "Abrir Settings", 0));
        janela->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Serial", 0));
        ConectarSerial->setText(QApplication::translate("MainWindow", "Conectar", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Comandos", 0));
        label->setText(QApplication::translate("MainWindow", "Estrategia", 0));
        label_2->setText(QApplication::translate("MainWindow", "Atacante", 0));
        label_3->setText(QApplication::translate("MainWindow", "Zagueiro", 0));
        label_4->setText(QApplication::translate("MainWindow", "Goleiro", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Tempoms->setText(QApplication::translate("MainWindow", "ms", 0));
        milesegundos->setText(QString());
        Tempo->setText(QApplication::translate("MainWindow", "Tempo:", 0));
        menu_Classificadores->setTitle(QApplication::translate("MainWindow", "&Opcoes", 0));
        menuTime->setTitle(QApplication::translate("MainWindow", "&Time", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
