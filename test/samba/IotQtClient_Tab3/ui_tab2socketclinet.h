/********************************************************************************
** Form generated from reading UI file 'tab2socketclinet.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB2SOCKETCLINET_H
#define UI_TAB2SOCKETCLINET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab2SocketClinet
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *pLabel;
    QPushButton *pPBRecvDataClear;
    QPushButton *pPBServerConnect;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *pTERecvData;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pLERecvId;
    QLineEdit *pLESendData;
    QPushButton *pPBSendButton;

    void setupUi(QWidget *Tab2SocketClinet)
    {
        if (Tab2SocketClinet->objectName().isEmpty())
            Tab2SocketClinet->setObjectName(QStringLiteral("Tab2SocketClinet"));
        Tab2SocketClinet->resize(646, 455);
        verticalLayout = new QVBoxLayout(Tab2SocketClinet);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pLabel = new QLabel(Tab2SocketClinet);
        pLabel->setObjectName(QStringLiteral("pLabel"));

        horizontalLayout->addWidget(pLabel);

        pPBRecvDataClear = new QPushButton(Tab2SocketClinet);
        pPBRecvDataClear->setObjectName(QStringLiteral("pPBRecvDataClear"));

        horizontalLayout->addWidget(pPBRecvDataClear);

        pPBServerConnect = new QPushButton(Tab2SocketClinet);
        pPBServerConnect->setObjectName(QStringLiteral("pPBServerConnect"));
        pPBServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBServerConnect);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pTERecvData = new QTextEdit(Tab2SocketClinet);
        pTERecvData->setObjectName(QStringLiteral("pTERecvData"));

        horizontalLayout_2->addWidget(pTERecvData);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pLERecvId = new QLineEdit(Tab2SocketClinet);
        pLERecvId->setObjectName(QStringLiteral("pLERecvId"));

        horizontalLayout_3->addWidget(pLERecvId);

        pLESendData = new QLineEdit(Tab2SocketClinet);
        pLESendData->setObjectName(QStringLiteral("pLESendData"));

        horizontalLayout_3->addWidget(pLESendData);

        pPBSendButton = new QPushButton(Tab2SocketClinet);
        pPBSendButton->setObjectName(QStringLiteral("pPBSendButton"));

        horizontalLayout_3->addWidget(pPBSendButton);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 6);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Tab2SocketClinet);

        QMetaObject::connectSlotsByName(Tab2SocketClinet);
    } // setupUi

    void retranslateUi(QWidget *Tab2SocketClinet)
    {
        Tab2SocketClinet->setWindowTitle(QApplication::translate("Tab2SocketClinet", "Form", 0));
        pLabel->setText(QApplication::translate("Tab2SocketClinet", "\354\210\230\354\213\240\353\215\260\354\235\264\355\204\260", 0));
        pPBRecvDataClear->setText(QApplication::translate("Tab2SocketClinet", "\354\210\230\354\213\240\354\202\255\354\240\234", 0));
        pPBServerConnect->setText(QApplication::translate("Tab2SocketClinet", "\354\204\234\353\262\204\354\227\260\352\262\260", 0));
        pPBSendButton->setText(QApplication::translate("Tab2SocketClinet", "\354\206\241\354\213\240", 0));
    } // retranslateUi

};

namespace Ui {
    class Tab2SocketClinet: public Ui_Tab2SocketClinet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB2SOCKETCLINET_H
