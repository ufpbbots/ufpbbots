/********************************************************************************
** Form generated from reading UI file 'constantes_robot.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTANTES_ROBOT_H
#define UI_CONSTANTES_ROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Constantes_robot
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_37;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *rb1_ze;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *rb1_zd;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_7;
    QSpinBox *rb2_ze;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_6;
    QSpinBox *rb2_zd;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpinBox *rb3_ze;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_8;
    QSpinBox *rb3_zd;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_38;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QDoubleSpinBox *rb1_klin;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QDoubleSpinBox *rb1_kang;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QDoubleSpinBox *rb1_wmax;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QDoubleSpinBox *rb1_vmax;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_28;
    QDoubleSpinBox *rb2_klin;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_30;
    QDoubleSpinBox *rb2_kang;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_29;
    QDoubleSpinBox *rb2_wmax;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_27;
    QDoubleSpinBox *rb2_vmax;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_32;
    QDoubleSpinBox *rb3_klin;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_34;
    QDoubleSpinBox *rb3_kang;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_33;
    QDoubleSpinBox *rb3_wmax;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_31;
    QDoubleSpinBox *rb3_vmax;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QComboBox *id_rb1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_15;
    QComboBox *id_rb2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_16;
    QComboBox *id_rb3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;

    void setupUi(QWidget *Constantes_robot)
    {
        if (Constantes_robot->objectName().isEmpty())
            Constantes_robot->setObjectName(QStringLiteral("Constantes_robot"));
        Constantes_robot->resize(678, 513);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icone/imagens/oie_transparent.png"), QSize(), QIcon::Active, QIcon::On);
        Constantes_robot->setWindowIcon(icon);
        gridLayout = new QGridLayout(Constantes_robot);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Constantes_robot);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_37 = new QHBoxLayout(groupBox);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        rb1_ze = new QSpinBox(groupBox);
        rb1_ze->setObjectName(QStringLiteral("rb1_ze"));

        horizontalLayout_7->addWidget(rb1_ze);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);

        horizontalLayout->addWidget(label_4);

        rb1_zd = new QSpinBox(groupBox);
        rb1_zd->setObjectName(QStringLiteral("rb1_zd"));

        horizontalLayout->addWidget(rb1_zd);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_37->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_35->addWidget(label_7);

        rb2_ze = new QSpinBox(groupBox);
        rb2_ze->setObjectName(QStringLiteral("rb2_ze"));

        horizontalLayout_35->addWidget(rb2_ze);


        verticalLayout_4->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_36->addWidget(label_6);

        rb2_zd = new QSpinBox(groupBox);
        rb2_zd->setObjectName(QStringLiteral("rb2_zd"));

        horizontalLayout_36->addWidget(rb2_zd);


        verticalLayout_4->addLayout(horizontalLayout_36);


        horizontalLayout_37->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        rb3_ze = new QSpinBox(groupBox);
        rb3_ze->setObjectName(QStringLiteral("rb3_ze"));

        horizontalLayout_6->addWidget(rb3_ze);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_32->addWidget(label_8);

        rb3_zd = new QSpinBox(groupBox);
        rb3_zd->setObjectName(QStringLiteral("rb3_zd"));
        rb3_zd->setMinimumSize(QSize(0, 0));

        horizontalLayout_32->addWidget(rb3_zd);


        verticalLayout_5->addLayout(horizontalLayout_32);


        horizontalLayout_37->addLayout(verticalLayout_5);


        gridLayout->addWidget(groupBox, 7, 1, 1, 5);

        groupBox_2 = new QGroupBox(Constantes_robot);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_38 = new QHBoxLayout(groupBox_2);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);

        rb1_klin = new QDoubleSpinBox(groupBox_2);
        rb1_klin->setObjectName(QStringLiteral("rb1_klin"));
        rb1_klin->setDecimals(3);

        horizontalLayout_9->addWidget(rb1_klin);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_10->addWidget(label_11);

        rb1_kang = new QDoubleSpinBox(groupBox_2);
        rb1_kang->setObjectName(QStringLiteral("rb1_kang"));
        rb1_kang->setDecimals(3);

        horizontalLayout_10->addWidget(rb1_kang);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        rb1_wmax = new QDoubleSpinBox(groupBox_2);
        rb1_wmax->setObjectName(QStringLiteral("rb1_wmax"));
        rb1_wmax->setDecimals(3);
        rb1_wmax->setMinimum(-99);

        horizontalLayout_11->addWidget(rb1_wmax);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        rb1_vmax = new QDoubleSpinBox(groupBox_2);
        rb1_vmax->setObjectName(QStringLiteral("rb1_vmax"));
        rb1_vmax->setDecimals(3);

        horizontalLayout_8->addWidget(rb1_vmax);


        verticalLayout_7->addLayout(horizontalLayout_8);


        horizontalLayout_38->addLayout(verticalLayout_7);

        horizontalSpacer_3 = new QSpacerItem(116, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_25->addWidget(label_28);

        rb2_klin = new QDoubleSpinBox(groupBox_2);
        rb2_klin->setObjectName(QStringLiteral("rb2_klin"));
        rb2_klin->setDecimals(3);

        horizontalLayout_25->addWidget(rb2_klin);


        verticalLayout_8->addLayout(horizontalLayout_25);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_27->addWidget(label_30);

        rb2_kang = new QDoubleSpinBox(groupBox_2);
        rb2_kang->setObjectName(QStringLiteral("rb2_kang"));
        rb2_kang->setDecimals(3);

        horizontalLayout_27->addWidget(rb2_kang);


        verticalLayout_8->addLayout(horizontalLayout_27);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_26->addWidget(label_29);

        rb2_wmax = new QDoubleSpinBox(groupBox_2);
        rb2_wmax->setObjectName(QStringLiteral("rb2_wmax"));
        rb2_wmax->setDecimals(3);
        rb2_wmax->setMinimum(-99);

        horizontalLayout_26->addWidget(rb2_wmax);


        verticalLayout_8->addLayout(horizontalLayout_26);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_24->addWidget(label_27);

        rb2_vmax = new QDoubleSpinBox(groupBox_2);
        rb2_vmax->setObjectName(QStringLiteral("rb2_vmax"));
        rb2_vmax->setDecimals(3);

        horizontalLayout_24->addWidget(rb2_vmax);


        verticalLayout_8->addLayout(horizontalLayout_24);


        horizontalLayout_38->addLayout(verticalLayout_8);

        horizontalSpacer_4 = new QSpacerItem(116, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_29->addWidget(label_32);

        rb3_klin = new QDoubleSpinBox(groupBox_2);
        rb3_klin->setObjectName(QStringLiteral("rb3_klin"));
        rb3_klin->setDecimals(3);

        horizontalLayout_29->addWidget(rb3_klin);


        verticalLayout_6->addLayout(horizontalLayout_29);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_31->addWidget(label_34);

        rb3_kang = new QDoubleSpinBox(groupBox_2);
        rb3_kang->setObjectName(QStringLiteral("rb3_kang"));
        rb3_kang->setDecimals(3);

        horizontalLayout_31->addWidget(rb3_kang);


        verticalLayout_6->addLayout(horizontalLayout_31);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_30->addWidget(label_33);

        rb3_wmax = new QDoubleSpinBox(groupBox_2);
        rb3_wmax->setObjectName(QStringLiteral("rb3_wmax"));
        rb3_wmax->setDecimals(3);
        rb3_wmax->setMinimum(-99);

        horizontalLayout_30->addWidget(rb3_wmax);


        verticalLayout_6->addLayout(horizontalLayout_30);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_28->addWidget(label_31);

        rb3_vmax = new QDoubleSpinBox(groupBox_2);
        rb3_vmax->setObjectName(QStringLiteral("rb3_vmax"));
        rb3_vmax->setDecimals(3);

        horizontalLayout_28->addWidget(rb3_vmax);


        verticalLayout_6->addLayout(horizontalLayout_28);


        horizontalLayout_38->addLayout(verticalLayout_6);


        gridLayout->addWidget(groupBox_2, 8, 1, 1, 5);

        horizontalSpacer_5 = new QSpacerItem(120, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        label_2 = new QLabel(Constantes_robot);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label = new QLabel(Constantes_robot);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(Constantes_robot);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayoutWidget = new QWidget(groupBox_3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 152, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font1;
        font1.setPointSize(12);
        label_14->setFont(font1);

        verticalLayout_2->addWidget(label_14, 0, Qt::AlignHCenter);

        id_rb1 = new QComboBox(verticalLayoutWidget);
        id_rb1->setObjectName(QStringLiteral("id_rb1"));

        verticalLayout_2->addWidget(id_rb1);

        verticalLayoutWidget_2 = new QWidget(groupBox_3);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(250, 20, 152, 71));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        verticalLayout_9->addWidget(label_15, 0, Qt::AlignHCenter);

        id_rb2 = new QComboBox(verticalLayoutWidget_2);
        id_rb2->setObjectName(QStringLiteral("id_rb2"));

        verticalLayout_9->addWidget(id_rb2);

        verticalLayoutWidget_3 = new QWidget(groupBox_3);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(490, 20, 152, 71));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(verticalLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        verticalLayout_10->addWidget(label_16, 0, Qt::AlignHCenter);

        id_rb3 = new QComboBox(verticalLayoutWidget_3);
        id_rb3->setObjectName(QStringLiteral("id_rb3"));
        id_rb3->setEditable(false);

        verticalLayout_10->addWidget(id_rb3);


        gridLayout->addWidget(groupBox_3, 1, 1, 1, 5);

        pushButton = new QPushButton(Constantes_robot);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 9, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(120, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        label_3 = new QLabel(Constantes_robot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();

        retranslateUi(Constantes_robot);

        QMetaObject::connectSlotsByName(Constantes_robot);
    } // setupUi

    void retranslateUi(QWidget *Constantes_robot)
    {
        Constantes_robot->setWindowTitle(QApplication::translate("Constantes_robot", "Constantes", 0));
        groupBox->setTitle(QApplication::translate("Constantes_robot", "Constantes - Zona Morta", 0));
        label_5->setText(QApplication::translate("Constantes_robot", "Zona Morta_E", 0));
        label_4->setText(QApplication::translate("Constantes_robot", "Zona Morta_D", 0));
        label_7->setText(QApplication::translate("Constantes_robot", "Zona Morta_E", 0));
        label_6->setText(QApplication::translate("Constantes_robot", "Zona Morta_D", 0));
        label_9->setText(QApplication::translate("Constantes_robot", "Zona Morta_E", 0));
        label_8->setText(QApplication::translate("Constantes_robot", "Zona Morta_D", 0));
        groupBox_2->setTitle(QApplication::translate("Constantes_robot", "Constantes - Controlador", 0));
        label_12->setText(QApplication::translate("Constantes_robot", "k_lin", 0));
        label_11->setText(QApplication::translate("Constantes_robot", "k_ang", 0));
        label_13->setText(QApplication::translate("Constantes_robot", "W_m\303\241x", 0));
        label_10->setText(QApplication::translate("Constantes_robot", "V_m\303\241x", 0));
        label_28->setText(QApplication::translate("Constantes_robot", "k_lin", 0));
        label_30->setText(QApplication::translate("Constantes_robot", "k_ang", 0));
        label_29->setText(QApplication::translate("Constantes_robot", "W_m\303\241x", 0));
        label_27->setText(QApplication::translate("Constantes_robot", "V_m\303\241x", 0));
        label_32->setText(QApplication::translate("Constantes_robot", "k_lin", 0));
        label_34->setText(QApplication::translate("Constantes_robot", "k_ang", 0));
        label_33->setText(QApplication::translate("Constantes_robot", "W_m\303\241x", 0));
        label_31->setText(QApplication::translate("Constantes_robot", "V_m\303\241x", 0));
        label_2->setText(QApplication::translate("Constantes_robot", "Robo 2", 0));
        label->setText(QApplication::translate("Constantes_robot", "Robo 1", 0));
        groupBox_3->setTitle(QApplication::translate("Constantes_robot", "GroupBox", 0));
        label_14->setText(QApplication::translate("Constantes_robot", "Selecionar Robo:", 0));
        label_15->setText(QApplication::translate("Constantes_robot", "Selecionar Robo:", 0));
        label_16->setText(QApplication::translate("Constantes_robot", "Selecionar Robo:", 0));
        pushButton->setText(QApplication::translate("Constantes_robot", "Salvar", 0));
        label_3->setText(QApplication::translate("Constantes_robot", "Robo 3", 0));
    } // retranslateUi

};

namespace Ui {
    class Constantes_robot: public Ui_Constantes_robot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTANTES_ROBOT_H
