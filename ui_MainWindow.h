/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClear;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mainLayout;
    QLabel *displayLabel;
    QHBoxLayout *buttonLayout;
    QGridLayout *numberpadLayout;
    QPushButton *twoButton;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *nineButton;
    QPushButton *sevenButton;
    QPushButton *fiveButton;
    QPushButton *threeButton;
    QPushButton *sixButton;
    QPushButton *eightButton;
    QPushButton *decimalButton;
    QPushButton *zeroButton;
    QVBoxLayout *operatorLayout;
    QPushButton *clearButton;
    QPushButton *divideButton;
    QPushButton *multipleButton;
    QPushButton *additionButton;
    QPushButton *subtractButton;
    QPushButton *equalButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(374, 288);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(374, 288));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        MainWindow->setPalette(palette);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(6);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        displayLabel = new QLabel(centralWidget);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(displayLabel->sizePolicy().hasHeightForWidth());
        displayLabel->setSizePolicy(sizePolicy1);
        displayLabel->setMinimumSize(QSize(0, 48));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(52, 101, 200, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        displayLabel->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(18);
        displayLabel->setFont(font);
        displayLabel->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 200);"));
        displayLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        displayLabel->setMargin(10);

        mainLayout->addWidget(displayLabel);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(1);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        numberpadLayout = new QGridLayout();
        numberpadLayout->setSpacing(0);
        numberpadLayout->setObjectName(QStringLiteral("numberpadLayout"));
        numberpadLayout->setSizeConstraint(QLayout::SetNoConstraint);
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy2);
        twoButton->setMinimumSize(QSize(0, 32));
        QPalette palette2;
        QBrush brush4(QColor(160, 160, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        QBrush brush5(QColor(164, 166, 168, 96));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        twoButton->setPalette(palette2);
        QFont font1;
        font1.setPointSize(16);
        twoButton->setFont(font1);
        twoButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(twoButton, 2, 1, 1, 1);

        oneButton = new QPushButton(centralWidget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        sizePolicy2.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy2);
        oneButton->setMinimumSize(QSize(0, 32));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        oneButton->setPalette(palette3);
        oneButton->setFont(font1);
        oneButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(oneButton, 2, 0, 1, 1);

        fourButton = new QPushButton(centralWidget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        sizePolicy2.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy2);
        fourButton->setMinimumSize(QSize(0, 32));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        fourButton->setPalette(palette4);
        fourButton->setFont(font1);
        fourButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(fourButton, 1, 0, 1, 1);

        nineButton = new QPushButton(centralWidget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        sizePolicy2.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy2);
        nineButton->setMinimumSize(QSize(0, 32));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        nineButton->setPalette(palette5);
        nineButton->setFont(font1);
        nineButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(nineButton, 0, 2, 1, 1);

        sevenButton = new QPushButton(centralWidget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sizePolicy2.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy2);
        sevenButton->setMinimumSize(QSize(0, 32));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        sevenButton->setPalette(palette6);
        sevenButton->setFont(font1);
        sevenButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(sevenButton, 0, 0, 1, 1);

        fiveButton = new QPushButton(centralWidget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        sizePolicy2.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy2);
        fiveButton->setMinimumSize(QSize(0, 32));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        fiveButton->setPalette(palette7);
        fiveButton->setFont(font1);
        fiveButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(fiveButton, 1, 1, 1, 1);

        threeButton = new QPushButton(centralWidget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        sizePolicy2.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy2);
        threeButton->setMinimumSize(QSize(0, 32));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        threeButton->setPalette(palette8);
        threeButton->setFont(font1);
        threeButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(threeButton, 2, 2, 1, 1);

        sixButton = new QPushButton(centralWidget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sizePolicy2.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy2);
        sixButton->setMinimumSize(QSize(0, 32));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        sixButton->setPalette(palette9);
        sixButton->setFont(font1);
        sixButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(sixButton, 1, 2, 1, 1);

        eightButton = new QPushButton(centralWidget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        sizePolicy2.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy2);
        eightButton->setMinimumSize(QSize(0, 32));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        eightButton->setPalette(palette10);
        eightButton->setFont(font1);
        eightButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(eightButton, 0, 1, 1, 1);

        decimalButton = new QPushButton(centralWidget);
        decimalButton->setObjectName(QStringLiteral("decimalButton"));
        sizePolicy2.setHeightForWidth(decimalButton->sizePolicy().hasHeightForWidth());
        decimalButton->setSizePolicy(sizePolicy2);
        decimalButton->setMinimumSize(QSize(0, 32));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        decimalButton->setPalette(palette11);
        decimalButton->setFont(font1);
        decimalButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(decimalButton, 3, 2, 1, 1);

        zeroButton = new QPushButton(centralWidget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        sizePolicy2.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy2);
        zeroButton->setMinimumSize(QSize(0, 32));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        zeroButton->setPalette(palette12);
        zeroButton->setFont(font1);
        zeroButton->setStyleSheet(QLatin1String("background-color: rgb( 160, 160, 160 );\n"
"border 1px grey;"));

        numberpadLayout->addWidget(zeroButton, 3, 0, 1, 2);


        buttonLayout->addLayout(numberpadLayout);

        operatorLayout = new QVBoxLayout();
        operatorLayout->setSpacing(1);
        operatorLayout->setObjectName(QStringLiteral("operatorLayout"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        QPalette palette13;
        QBrush brush6(QColor(52, 101, 164, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        clearButton->setPalette(palette13);
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(12);
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(85, 87, 83);\n"
"}"));

        operatorLayout->addWidget(clearButton);

        divideButton = new QPushButton(centralWidget);
        divideButton->setObjectName(QStringLiteral("divideButton"));
        sizePolicy2.setHeightForWidth(divideButton->sizePolicy().hasHeightForWidth());
        divideButton->setSizePolicy(sizePolicy2);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        divideButton->setPalette(palette14);
        QFont font3;
        font3.setFamily(QStringLiteral("DejaVu Sans"));
        font3.setPointSize(16);
        divideButton->setFont(font3);
        divideButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(85, 87, 83);\n"
"}"));

        operatorLayout->addWidget(divideButton);

        multipleButton = new QPushButton(centralWidget);
        multipleButton->setObjectName(QStringLiteral("multipleButton"));
        sizePolicy2.setHeightForWidth(multipleButton->sizePolicy().hasHeightForWidth());
        multipleButton->setSizePolicy(sizePolicy2);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        multipleButton->setPalette(palette15);
        multipleButton->setFont(font3);
        multipleButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(85, 87, 83);\n"
"}"));

        operatorLayout->addWidget(multipleButton);

        additionButton = new QPushButton(centralWidget);
        additionButton->setObjectName(QStringLiteral("additionButton"));
        sizePolicy2.setHeightForWidth(additionButton->sizePolicy().hasHeightForWidth());
        additionButton->setSizePolicy(sizePolicy2);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        additionButton->setPalette(palette16);
        additionButton->setFont(font3);
        additionButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(85, 87, 83);\n"
"}"));

        operatorLayout->addWidget(additionButton);

        subtractButton = new QPushButton(centralWidget);
        subtractButton->setObjectName(QStringLiteral("subtractButton"));
        sizePolicy2.setHeightForWidth(subtractButton->sizePolicy().hasHeightForWidth());
        subtractButton->setSizePolicy(sizePolicy2);
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        subtractButton->setPalette(palette17);
        subtractButton->setFont(font3);

        operatorLayout->addWidget(subtractButton);

        equalButton = new QPushButton(centralWidget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        sizePolicy2.setHeightForWidth(equalButton->sizePolicy().hasHeightForWidth());
        equalButton->setSizePolicy(sizePolicy2);
        QPalette palette18;
        QBrush brush7(QColor(0, 0, 200, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        equalButton->setPalette(palette18);
        equalButton->setFont(font3);
        equalButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgb( 0, 0, 200 );\n"
"border 1px black;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(85, 87, 83);\n"
"border 1px black;\n"
"}"));

        operatorLayout->addWidget(equalButton);


        buttonLayout->addLayout(operatorLayout);

        buttonLayout->setStretch(1, 1);

        mainLayout->addLayout(buttonLayout);


        verticalLayout->addLayout(mainLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 374, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClear);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Divitto's Calculator", nullptr));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        displayLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        twoButton->setText(QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        twoButton->setShortcut(QApplication::translate("MainWindow", "2", nullptr));
#endif // QT_NO_SHORTCUT
        oneButton->setText(QApplication::translate("MainWindow", "1", nullptr));
#ifndef QT_NO_SHORTCUT
        oneButton->setShortcut(QApplication::translate("MainWindow", "1", nullptr));
#endif // QT_NO_SHORTCUT
        fourButton->setText(QApplication::translate("MainWindow", "4", nullptr));
#ifndef QT_NO_SHORTCUT
        fourButton->setShortcut(QApplication::translate("MainWindow", "4", nullptr));
#endif // QT_NO_SHORTCUT
        nineButton->setText(QApplication::translate("MainWindow", "9", nullptr));
#ifndef QT_NO_SHORTCUT
        nineButton->setShortcut(QApplication::translate("MainWindow", "9", nullptr));
#endif // QT_NO_SHORTCUT
        sevenButton->setText(QApplication::translate("MainWindow", "7", nullptr));
#ifndef QT_NO_SHORTCUT
        sevenButton->setShortcut(QApplication::translate("MainWindow", "7", nullptr));
#endif // QT_NO_SHORTCUT
        fiveButton->setText(QApplication::translate("MainWindow", "5", nullptr));
#ifndef QT_NO_SHORTCUT
        fiveButton->setShortcut(QApplication::translate("MainWindow", "5", nullptr));
#endif // QT_NO_SHORTCUT
        threeButton->setText(QApplication::translate("MainWindow", "3", nullptr));
#ifndef QT_NO_SHORTCUT
        threeButton->setShortcut(QApplication::translate("MainWindow", "3", nullptr));
#endif // QT_NO_SHORTCUT
        sixButton->setText(QApplication::translate("MainWindow", "6", nullptr));
#ifndef QT_NO_SHORTCUT
        sixButton->setShortcut(QApplication::translate("MainWindow", "6", nullptr));
#endif // QT_NO_SHORTCUT
        eightButton->setText(QApplication::translate("MainWindow", "8", nullptr));
#ifndef QT_NO_SHORTCUT
        eightButton->setShortcut(QApplication::translate("MainWindow", "8", nullptr));
#endif // QT_NO_SHORTCUT
        decimalButton->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_SHORTCUT
        decimalButton->setShortcut(QApplication::translate("MainWindow", ".", nullptr));
#endif // QT_NO_SHORTCUT
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
#ifndef QT_NO_SHORTCUT
        zeroButton->setShortcut(QApplication::translate("MainWindow", "0", nullptr));
#endif // QT_NO_SHORTCUT
        clearButton->setText(QApplication::translate("MainWindow", "CLR", nullptr));
#ifndef QT_NO_SHORTCUT
        clearButton->setShortcut(QApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_NO_SHORTCUT
        divideButton->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
#ifndef QT_NO_SHORTCUT
        divideButton->setShortcut(QApplication::translate("MainWindow", "/", nullptr));
#endif // QT_NO_SHORTCUT
        multipleButton->setText(QApplication::translate("MainWindow", "X", nullptr));
#ifndef QT_NO_SHORTCUT
        multipleButton->setShortcut(QApplication::translate("MainWindow", "*", nullptr));
#endif // QT_NO_SHORTCUT
        additionButton->setText(QApplication::translate("MainWindow", "+", nullptr));
#ifndef QT_NO_SHORTCUT
        additionButton->setShortcut(QApplication::translate("MainWindow", "+", nullptr));
#endif // QT_NO_SHORTCUT
        subtractButton->setStyleSheet(QApplication::translate("MainWindow", "QPushButton{\n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(85, 87, 83);\n"
"}", nullptr));
        subtractButton->setText(QApplication::translate("MainWindow", "-", nullptr));
#ifndef QT_NO_SHORTCUT
        subtractButton->setShortcut(QApplication::translate("MainWindow", "-", nullptr));
#endif // QT_NO_SHORTCUT
        equalButton->setText(QApplication::translate("MainWindow", "=", nullptr));
#ifndef QT_NO_SHORTCUT
        equalButton->setShortcut(QApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("MainWindow", "Fi&le", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
