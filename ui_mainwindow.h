/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *upperwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *typeofconversioncmbBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSplitter *splitter;
    QWidget *inputfile_info;
    QVBoxLayout *verticalLayout;
    QLabel *input_lbl;
    QTreeView *inputtreeView;
    QWidget *outputfile_info;
    QVBoxLayout *verticalLayout_2;
    QLabel *output_lbl;
    QTreeView *outputtreeeView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1182, 750);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/convert4_Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        upperwidget = new QWidget(centralWidget);
        upperwidget->setObjectName(QStringLiteral("upperwidget"));
        upperwidget->setStyleSheet(QLatin1String(".QWidget{\n"
"border: 1px solid black;\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(upperwidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(upperwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(111, 0));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background-color:#DDDDDD;\n"
"font-weight:bold"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(415, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        typeofconversioncmbBox = new QComboBox(upperwidget);
        typeofconversioncmbBox->setObjectName(QStringLiteral("typeofconversioncmbBox"));
        typeofconversioncmbBox->setMinimumSize(QSize(101, 25));
        typeofconversioncmbBox->setStyleSheet(QLatin1String("background-color:#DDDDDD;\n"
"font-weight:bold;"));

        horizontalLayout->addWidget(typeofconversioncmbBox);

        horizontalSpacer_2 = new QSpacerItem(450, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(upperwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(111, 0));
        pushButton_2->setStyleSheet(QLatin1String("background-color:#DDDDDD;\n"
"font-weight:bold;"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addWidget(upperwidget);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(2);
        inputfile_info = new QWidget(splitter);
        inputfile_info->setObjectName(QStringLiteral("inputfile_info"));
        verticalLayout = new QVBoxLayout(inputfile_info);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        input_lbl = new QLabel(inputfile_info);
        input_lbl->setObjectName(QStringLiteral("input_lbl"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        input_lbl->setFont(font);
        input_lbl->setAutoFillBackground(false);
        input_lbl->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"font-weight:bold;\n"
"font-size:12pt;\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(input_lbl);

        inputtreeView = new QTreeView(inputfile_info);
        inputtreeView->setObjectName(QStringLiteral("inputtreeView"));
        inputtreeView->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(inputtreeView);

        splitter->addWidget(inputfile_info);
        outputfile_info = new QWidget(splitter);
        outputfile_info->setObjectName(QStringLiteral("outputfile_info"));
        verticalLayout_2 = new QVBoxLayout(outputfile_info);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        output_lbl = new QLabel(outputfile_info);
        output_lbl->setObjectName(QStringLiteral("output_lbl"));
        output_lbl->setFont(font);
        output_lbl->setStyleSheet(QLatin1String("border: 1px solid black;\n"
"font-weight : bold;\n"
"font-size :12pt;"));

        verticalLayout_2->addWidget(output_lbl);

        outputtreeeView = new QTreeView(outputfile_info);
        outputtreeeView->setObjectName(QStringLiteral("outputtreeeView"));

        verticalLayout_2->addWidget(outputtreeeView);

        splitter->addWidget(outputfile_info);

        verticalLayout_3->addWidget(splitter);

        verticalLayout_3->setStretch(0, 7);
        verticalLayout_3->setStretch(1, 93);

        horizontalLayout_2->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1182, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Novatel Convert", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Add Files", 0));
        typeofconversioncmbBox->clear();
        typeofconversioncmbBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ASCII", 0)
         << QApplication::translate("MainWindow", "BINARY", 0)
         << QApplication::translate("MainWindow", "RINEX", 0)
        );
        pushButton_2->setText(QApplication::translate("MainWindow", "Convert", 0));
        input_lbl->setText(QApplication::translate("MainWindow", "Input", 0));
        output_lbl->setText(QApplication::translate("MainWindow", "Output", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
