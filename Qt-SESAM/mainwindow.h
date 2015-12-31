/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <easyselectorwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionNewDomain;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionSyncNow;
    QAction *actionInvalidatePassword;
    QAction *actionOptions;
    QAction *actionChangeMasterPassword;
    QAction *actionHackLegacyPassword;
    QAction *actionRegenerateSaltKeyIV;
    QAction *actionLockApplication;
    QAction *actionClearClipboard;
    QAction *actionClearAllSettings;
    QAction *actionSave;
    QAction *actionUndo;
    QAction *actionForcedPush;
    QAction *actionMigrateDomainToV3;
    QAction *actionExportKGK;
    QAction *actionImportKGK;
    QAction *actionKeePassXmlFile;
    QAction *actionDeleteOldBackupFiles;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *userLineEdit;
    QPushButton *copyUsernameToClipboardPushButton;
    QLabel *label_8;
    QComboBox *domainsComboBox;
    QLabel *label;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *urlLineEdit;
    QPushButton *openURLPushButton;
    QHBoxLayout *topButtonsHorizontalLayout;
    QCheckBox *deleteCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *savePushButton;
    QPushButton *revertPushButton;
    QPushButton *loginPushButton;
    QTabWidget *tabWidget;
    QWidget *generatedPasswordTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLabel *passwordLengthLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *renewSaltPushButton;
    QLineEdit *generatedPasswordLineEdit;
    QPushButton *copyGeneratedPasswordToClipboardPushButton;
    QGroupBox *moreSettingsGroupBox;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QSpinBox *iterationsSpinBox;
    QTabWidget *tabWidgetVersions;
    QWidget *tabV2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QSpinBox *passwordLengthSpinBox;
    QLabel *label_15;
    QPlainTextEdit *usedCharactersPlainTextEdit;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabV3;
    QVBoxLayout *vLayoutV3;
    QGridLayout *selectorGridLayout;
    EasySelectorWidget *easySelectorWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_13;
    QLineEdit *extraLineEdit;
    QLabel *label_14;
    QLabel *useDigitsLabel;
    QLabel *useLowercaseLabel;
    QLabel *useUppercaseLabel;
    QLabel *useExtraLabel;
    QLineEdit *saltBase64LineEdit;
    QLineEdit *passwordTemplateLineEdit;
    QSpacerItem *verticalSpacer_4;
    QWidget *legacyPasswordTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *legacyPasswordLineEdit;
    QPushButton *copyLegacyPasswordToClipboardPushButton;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QPlainTextEdit *notesPlainTextEdit;
    QLabel *label_5;
    QLabel *createdLabel;
    QLabel *label_7;
    QLabel *modifiedLabel;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImport;
    QMenu *menuHelp;
    QMenu *menuExtras;
    QMenu *menuExpertMode;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(332, 612);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionNewDomain = new QAction(MainWindow);
        actionNewDomain->setObjectName(QStringLiteral("actionNewDomain"));
        actionNewDomain->setEnabled(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionSyncNow = new QAction(MainWindow);
        actionSyncNow->setObjectName(QStringLiteral("actionSyncNow"));
        actionInvalidatePassword = new QAction(MainWindow);
        actionInvalidatePassword->setObjectName(QStringLiteral("actionInvalidatePassword"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionChangeMasterPassword = new QAction(MainWindow);
        actionChangeMasterPassword->setObjectName(QStringLiteral("actionChangeMasterPassword"));
        actionHackLegacyPassword = new QAction(MainWindow);
        actionHackLegacyPassword->setObjectName(QStringLiteral("actionHackLegacyPassword"));
        actionHackLegacyPassword->setEnabled(false);
        actionRegenerateSaltKeyIV = new QAction(MainWindow);
        actionRegenerateSaltKeyIV->setObjectName(QStringLiteral("actionRegenerateSaltKeyIV"));
        actionLockApplication = new QAction(MainWindow);
        actionLockApplication->setObjectName(QStringLiteral("actionLockApplication"));
        actionClearClipboard = new QAction(MainWindow);
        actionClearClipboard->setObjectName(QStringLiteral("actionClearClipboard"));
        actionClearAllSettings = new QAction(MainWindow);
        actionClearAllSettings->setObjectName(QStringLiteral("actionClearAllSettings"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionForcedPush = new QAction(MainWindow);
        actionForcedPush->setObjectName(QStringLiteral("actionForcedPush"));
        actionMigrateDomainToV3 = new QAction(MainWindow);
        actionMigrateDomainToV3->setObjectName(QStringLiteral("actionMigrateDomainToV3"));
        actionMigrateDomainToV3->setEnabled(false);
        actionExportKGK = new QAction(MainWindow);
        actionExportKGK->setObjectName(QStringLiteral("actionExportKGK"));
        actionImportKGK = new QAction(MainWindow);
        actionImportKGK->setObjectName(QStringLiteral("actionImportKGK"));
        actionKeePassXmlFile = new QAction(MainWindow);
        actionKeePassXmlFile->setObjectName(QStringLiteral("actionKeePassXmlFile"));
        actionKeePassXmlFile->setEnabled(false);
        actionDeleteOldBackupFiles = new QAction(MainWindow);
        actionDeleteOldBackupFiles->setObjectName(QStringLiteral("actionDeleteOldBackupFiles"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        userLineEdit = new QLineEdit(centralWidget);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        horizontalLayout_5->addWidget(userLineEdit);

        copyUsernameToClipboardPushButton = new QPushButton(centralWidget);
        copyUsernameToClipboardPushButton->setObjectName(QStringLiteral("copyUsernameToClipboardPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(copyUsernameToClipboardPushButton->sizePolicy().hasHeightForWidth());
        copyUsernameToClipboardPushButton->setSizePolicy(sizePolicy1);
        copyUsernameToClipboardPushButton->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/clipboard_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyUsernameToClipboardPushButton->setIcon(icon);
        copyUsernameToClipboardPushButton->setFlat(false);

        horizontalLayout_5->addWidget(copyUsernameToClipboardPushButton);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        domainsComboBox = new QComboBox(centralWidget);
        domainsComboBox->setObjectName(QStringLiteral("domainsComboBox"));
        domainsComboBox->setEditable(true);

        gridLayout_2->addWidget(domainsComboBox, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        urlLineEdit = new QLineEdit(centralWidget);
        urlLineEdit->setObjectName(QStringLiteral("urlLineEdit"));

        horizontalLayout_7->addWidget(urlLineEdit);

        openURLPushButton = new QPushButton(centralWidget);
        openURLPushButton->setObjectName(QStringLiteral("openURLPushButton"));
        sizePolicy1.setHeightForWidth(openURLPushButton->sizePolicy().hasHeightForWidth());
        openURLPushButton->setSizePolicy(sizePolicy1);
        openURLPushButton->setMinimumSize(QSize(24, 24));
        openURLPushButton->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/open-url.png"), QSize(), QIcon::Normal, QIcon::Off);
        openURLPushButton->setIcon(icon1);
        openURLPushButton->setFlat(false);

        horizontalLayout_7->addWidget(openURLPushButton);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        topButtonsHorizontalLayout = new QHBoxLayout();
        topButtonsHorizontalLayout->setSpacing(6);
        topButtonsHorizontalLayout->setObjectName(QStringLiteral("topButtonsHorizontalLayout"));
        deleteCheckBox = new QCheckBox(centralWidget);
        deleteCheckBox->setObjectName(QStringLiteral("deleteCheckBox"));

        topButtonsHorizontalLayout->addWidget(deleteCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topButtonsHorizontalLayout->addItem(horizontalSpacer);

        savePushButton = new QPushButton(centralWidget);
        savePushButton->setObjectName(QStringLiteral("savePushButton"));
        savePushButton->setEnabled(false);

        topButtonsHorizontalLayout->addWidget(savePushButton);

        revertPushButton = new QPushButton(centralWidget);
        revertPushButton->setObjectName(QStringLiteral("revertPushButton"));
        revertPushButton->setEnabled(false);

        topButtonsHorizontalLayout->addWidget(revertPushButton);

        loginPushButton = new QPushButton(centralWidget);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));
        loginPushButton->setEnabled(false);

        topButtonsHorizontalLayout->addWidget(loginPushButton);


        verticalLayout_2->addLayout(topButtonsHorizontalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        generatedPasswordTab = new QWidget();
        generatedPasswordTab->setObjectName(QStringLiteral("generatedPasswordTab"));
        verticalLayout_5 = new QVBoxLayout(generatedPasswordTab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label_11 = new QLabel(generatedPasswordTab);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);

        passwordLengthLabel = new QLabel(generatedPasswordTab);
        passwordLengthLabel->setObjectName(QStringLiteral("passwordLengthLabel"));
        passwordLengthLabel->setScaledContents(false);
        passwordLengthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(passwordLengthLabel);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        renewSaltPushButton = new QPushButton(generatedPasswordTab);
        renewSaltPushButton->setObjectName(QStringLiteral("renewSaltPushButton"));
        renewSaltPushButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(renewSaltPushButton->sizePolicy().hasHeightForWidth());
        renewSaltPushButton->setSizePolicy(sizePolicy1);
        renewSaltPushButton->setMinimumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        renewSaltPushButton->setIcon(icon2);
        renewSaltPushButton->setFlat(false);

        horizontalLayout_2->addWidget(renewSaltPushButton);

        generatedPasswordLineEdit = new QLineEdit(generatedPasswordTab);
        generatedPasswordLineEdit->setObjectName(QStringLiteral("generatedPasswordLineEdit"));
        generatedPasswordLineEdit->setStyleSheet(QStringLiteral(""));
        generatedPasswordLineEdit->setEchoMode(QLineEdit::Password);
        generatedPasswordLineEdit->setAlignment(Qt::AlignCenter);
        generatedPasswordLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(generatedPasswordLineEdit);

        copyGeneratedPasswordToClipboardPushButton = new QPushButton(generatedPasswordTab);
        copyGeneratedPasswordToClipboardPushButton->setObjectName(QStringLiteral("copyGeneratedPasswordToClipboardPushButton"));
        sizePolicy1.setHeightForWidth(copyGeneratedPasswordToClipboardPushButton->sizePolicy().hasHeightForWidth());
        copyGeneratedPasswordToClipboardPushButton->setSizePolicy(sizePolicy1);
        copyGeneratedPasswordToClipboardPushButton->setMinimumSize(QSize(24, 24));
        copyGeneratedPasswordToClipboardPushButton->setIcon(icon);
        copyGeneratedPasswordToClipboardPushButton->setFlat(false);

        horizontalLayout_2->addWidget(copyGeneratedPasswordToClipboardPushButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        moreSettingsGroupBox = new QGroupBox(generatedPasswordTab);
        moreSettingsGroupBox->setObjectName(QStringLiteral("moreSettingsGroupBox"));
        moreSettingsGroupBox->setMinimumSize(QSize(17, 17));
        moreSettingsGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        moreSettingsGroupBox->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(moreSettingsGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(moreSettingsGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        iterationsSpinBox = new QSpinBox(moreSettingsGroupBox);
        iterationsSpinBox->setObjectName(QStringLiteral("iterationsSpinBox"));
        iterationsSpinBox->setMinimum(1);
        iterationsSpinBox->setMaximum(16777216);
        iterationsSpinBox->setSingleStep(1);
        iterationsSpinBox->setValue(8192);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, iterationsSpinBox);


        verticalLayout_4->addLayout(formLayout_3);

        tabWidgetVersions = new QTabWidget(moreSettingsGroupBox);
        tabWidgetVersions->setObjectName(QStringLiteral("tabWidgetVersions"));
        tabV2 = new QWidget();
        tabV2->setObjectName(QStringLiteral("tabV2"));
        tabV2->setEnabled(true);
        verticalLayout = new QVBoxLayout(tabV2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, -1, -1, -1);
        label_6 = new QLabel(tabV2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        passwordLengthSpinBox = new QSpinBox(tabV2);
        passwordLengthSpinBox->setObjectName(QStringLiteral("passwordLengthSpinBox"));
        passwordLengthSpinBox->setMinimum(4);
        passwordLengthSpinBox->setValue(24);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, passwordLengthSpinBox);


        verticalLayout->addLayout(formLayout_2);

        label_15 = new QLabel(tabV2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout->addWidget(label_15);

        usedCharactersPlainTextEdit = new QPlainTextEdit(tabV2);
        usedCharactersPlainTextEdit->setObjectName(QStringLiteral("usedCharactersPlainTextEdit"));
        usedCharactersPlainTextEdit->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(usedCharactersPlainTextEdit);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        tabWidgetVersions->addTab(tabV2, QString());
        tabV3 = new QWidget();
        tabV3->setObjectName(QStringLiteral("tabV3"));
        vLayoutV3 = new QVBoxLayout(tabV3);
        vLayoutV3->setSpacing(6);
        vLayoutV3->setContentsMargins(11, 11, 11, 11);
        vLayoutV3->setObjectName(QStringLiteral("vLayoutV3"));
        selectorGridLayout = new QGridLayout();
        selectorGridLayout->setSpacing(6);
        selectorGridLayout->setObjectName(QStringLiteral("selectorGridLayout"));
        selectorGridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        selectorGridLayout->setContentsMargins(0, 0, 0, 0);
        easySelectorWidget = new EasySelectorWidget(tabV3);
        easySelectorWidget->setObjectName(QStringLiteral("easySelectorWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(easySelectorWidget->sizePolicy().hasHeightForWidth());
        easySelectorWidget->setSizePolicy(sizePolicy3);
        easySelectorWidget->setCursor(QCursor(Qt::PointingHandCursor));

        selectorGridLayout->addWidget(easySelectorWidget, 0, 0, 1, 1);


        vLayoutV3->addLayout(selectorGridLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        label_4 = new QLabel(tabV3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 18));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_13 = new QLabel(tabV3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(0, 18));

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        extraLineEdit = new QLineEdit(tabV3);
        extraLineEdit->setObjectName(QStringLiteral("extraLineEdit"));
        extraLineEdit->setMinimumSize(QSize(0, 18));

        gridLayout->addWidget(extraLineEdit, 3, 1, 1, 1);

        label_14 = new QLabel(tabV3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(0, 18));

        gridLayout->addWidget(label_14, 0, 1, 1, 1);

        useDigitsLabel = new QLabel(tabV3);
        useDigitsLabel->setObjectName(QStringLiteral("useDigitsLabel"));
        useDigitsLabel->setMinimumSize(QSize(16, 16));
        useDigitsLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/check.png")));

        gridLayout->addWidget(useDigitsLabel, 0, 0, 1, 1);

        useLowercaseLabel = new QLabel(tabV3);
        useLowercaseLabel->setObjectName(QStringLiteral("useLowercaseLabel"));
        useLowercaseLabel->setMinimumSize(QSize(16, 16));
        useLowercaseLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/check.png")));

        gridLayout->addWidget(useLowercaseLabel, 1, 0, 1, 1);

        useUppercaseLabel = new QLabel(tabV3);
        useUppercaseLabel->setObjectName(QStringLiteral("useUppercaseLabel"));
        useUppercaseLabel->setMinimumSize(QSize(16, 16));
        useUppercaseLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/check.png")));

        gridLayout->addWidget(useUppercaseLabel, 2, 0, 1, 1);

        useExtraLabel = new QLabel(tabV3);
        useExtraLabel->setObjectName(QStringLiteral("useExtraLabel"));
        useExtraLabel->setMinimumSize(QSize(16, 16));
        useExtraLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/check.png")));

        gridLayout->addWidget(useExtraLabel, 3, 0, 1, 1);


        vLayoutV3->addLayout(gridLayout);

        saltBase64LineEdit = new QLineEdit(tabV3);
        saltBase64LineEdit->setObjectName(QStringLiteral("saltBase64LineEdit"));
        saltBase64LineEdit->setMaximumSize(QSize(16777215, 0));
        saltBase64LineEdit->setCursor(QCursor(Qt::ForbiddenCursor));
        saltBase64LineEdit->setVisible(false);
        saltBase64LineEdit->setReadOnly(true);

        vLayoutV3->addWidget(saltBase64LineEdit);

        passwordTemplateLineEdit = new QLineEdit(tabV3);
        passwordTemplateLineEdit->setObjectName(QStringLiteral("passwordTemplateLineEdit"));
        passwordTemplateLineEdit->setMaximumSize(QSize(16777215, 0));
        passwordTemplateLineEdit->setVisible(false);

        vLayoutV3->addWidget(passwordTemplateLineEdit);

        tabWidgetVersions->addTab(tabV3, QString());

        verticalLayout_4->addWidget(tabWidgetVersions);

        verticalSpacer_4 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_4);


        verticalLayout_5->addWidget(moreSettingsGroupBox);

        tabWidget->addTab(generatedPasswordTab, QString());
        legacyPasswordTab = new QWidget();
        legacyPasswordTab->setObjectName(QStringLiteral("legacyPasswordTab"));
        verticalLayout_3 = new QVBoxLayout(legacyPasswordTab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        label_10 = new QLabel(legacyPasswordTab);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        legacyPasswordLineEdit = new QLineEdit(legacyPasswordTab);
        legacyPasswordLineEdit->setObjectName(QStringLiteral("legacyPasswordLineEdit"));
        legacyPasswordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        horizontalLayout_3->addWidget(legacyPasswordLineEdit);

        copyLegacyPasswordToClipboardPushButton = new QPushButton(legacyPasswordTab);
        copyLegacyPasswordToClipboardPushButton->setObjectName(QStringLiteral("copyLegacyPasswordToClipboardPushButton"));
        copyLegacyPasswordToClipboardPushButton->setIcon(icon);

        horizontalLayout_3->addWidget(copyLegacyPasswordToClipboardPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(legacyPasswordTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        notesPlainTextEdit = new QPlainTextEdit(centralWidget);
        notesPlainTextEdit->setObjectName(QStringLiteral("notesPlainTextEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(notesPlainTextEdit->sizePolicy().hasHeightForWidth());
        notesPlainTextEdit->setSizePolicy(sizePolicy4);
        notesPlainTextEdit->setMaximumSize(QSize(16777215, 60));

        formLayout->setWidget(1, QFormLayout::FieldRole, notesPlainTextEdit);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        createdLabel = new QLabel(centralWidget);
        createdLabel->setObjectName(QStringLiteral("createdLabel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, createdLabel);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        modifiedLabel = new QLabel(centralWidget);
        modifiedLabel->setObjectName(QStringLiteral("modifiedLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, modifiedLabel);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 332, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QStringLiteral("menuImport"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuExtras = new QMenu(menuBar);
        menuExtras->setObjectName(QStringLiteral("menuExtras"));
        menuExpertMode = new QMenu(menuExtras);
        menuExpertMode->setObjectName(QStringLiteral("menuExpertMode"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(domainsComboBox, urlLineEdit);
        QWidget::setTabOrder(urlLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, savePushButton);
        QWidget::setTabOrder(savePushButton, iterationsSpinBox);
        QWidget::setTabOrder(iterationsSpinBox, notesPlainTextEdit);
        QWidget::setTabOrder(notesPlainTextEdit, copyGeneratedPasswordToClipboardPushButton);
        QWidget::setTabOrder(copyGeneratedPasswordToClipboardPushButton, tabWidget);
        QWidget::setTabOrder(tabWidget, openURLPushButton);
        QWidget::setTabOrder(openURLPushButton, copyUsernameToClipboardPushButton);
        QWidget::setTabOrder(copyUsernameToClipboardPushButton, passwordLengthSpinBox);
        QWidget::setTabOrder(passwordLengthSpinBox, usedCharactersPlainTextEdit);
        QWidget::setTabOrder(usedCharactersPlainTextEdit, generatedPasswordLineEdit);
        QWidget::setTabOrder(generatedPasswordLineEdit, deleteCheckBox);
        QWidget::setTabOrder(deleteCheckBox, copyLegacyPasswordToClipboardPushButton);
        QWidget::setTabOrder(copyLegacyPasswordToClipboardPushButton, legacyPasswordLineEdit);
        QWidget::setTabOrder(legacyPasswordLineEdit, extraLineEdit);
        QWidget::setTabOrder(extraLineEdit, passwordTemplateLineEdit);
        QWidget::setTabOrder(passwordTemplateLineEdit, revertPushButton);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSyncNow);
        menuFile->addSeparator();
        menuFile->addAction(menuImport->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuImport->addAction(actionKeePassXmlFile);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuExtras->addAction(actionOptions);
        menuExtras->addAction(actionChangeMasterPassword);
        menuExtras->addAction(actionLockApplication);
        menuExtras->addAction(actionClearClipboard);
        menuExtras->addSeparator();
        menuExtras->addAction(menuExpertMode->menuAction());
        menuExpertMode->addAction(actionHackLegacyPassword);
        menuExpertMode->addAction(actionRegenerateSaltKeyIV);
        menuExpertMode->addAction(actionClearAllSettings);
        menuExpertMode->addAction(actionForcedPush);
        menuExpertMode->addAction(actionMigrateDomainToV3);
        menuExpertMode->addSeparator();
        menuExpertMode->addAction(actionExportKGK);
        menuExpertMode->addAction(actionImportKGK);
        menuExpertMode->addSeparator();
        menuExpertMode->addAction(actionDeleteOldBackupFiles);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidgetVersions->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt SESAM", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionNewDomain->setText(QApplication::translate("MainWindow", "New domain ...", 0));
        actionNewDomain->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About ...", 0));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt ...", 0));
        actionSyncNow->setText(QApplication::translate("MainWindow", "Sync now ...", 0));
        actionSyncNow->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        actionInvalidatePassword->setText(QApplication::translate("MainWindow", "[DEBUG] Invalidate password", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Options ...", 0));
        actionChangeMasterPassword->setText(QApplication::translate("MainWindow", "Change master password ...", 0));
        actionHackLegacyPassword->setText(QApplication::translate("MainWindow", "Hack legacy password ...", 0));
        actionHackLegacyPassword->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+H", 0));
        actionRegenerateSaltKeyIV->setText(QApplication::translate("MainWindow", "Regenerate salt, key and IV ...", 0));
        actionRegenerateSaltKeyIV->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+R", 0));
        actionLockApplication->setText(QApplication::translate("MainWindow", "Lock application ...", 0));
        actionLockApplication->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+L", 0));
        actionClearClipboard->setText(QApplication::translate("MainWindow", "Clear clipboard", 0));
        actionClearAllSettings->setText(QApplication::translate("MainWindow", "Clear all settings ...", 0));
        actionClearAllSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+C, Ctrl+C", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save domain settings", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionForcedPush->setText(QApplication::translate("MainWindow", "Forced push ...", 0));
#ifndef QT_NO_TOOLTIP
        actionForcedPush->setToolTip(QApplication::translate("MainWindow", "Send local domain settings to server no matter what", 0));
#endif // QT_NO_TOOLTIP
        actionForcedPush->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+F, Ctrl+P", 0));
        actionMigrateDomainToV3->setText(QApplication::translate("MainWindow", "Migrate domain to v3", 0));
#ifndef QT_NO_TOOLTIP
        actionMigrateDomainToV3->setToolTip(QApplication::translate("MainWindow", "Migrate current domain settings from v2 (simple) to v3 (expert)", 0));
#endif // QT_NO_TOOLTIP
        actionMigrateDomainToV3->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+M", 0));
        actionExportKGK->setText(QApplication::translate("MainWindow", "Export KGK ...", 0));
        actionImportKGK->setText(QApplication::translate("MainWindow", "Import KGK ...", 0));
        actionKeePassXmlFile->setText(QApplication::translate("MainWindow", "KeePass 2 XML file ...", 0));
        actionKeePassXmlFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+I, Ctrl+K", 0));
        actionDeleteOldBackupFiles->setText(QApplication::translate("MainWindow", "Delete old backup files ...", 0));
        actionDeleteOldBackupFiles->setShortcut(QApplication::translate("MainWindow", "Ctrl+E, Ctrl+D, Ctrl+B", 0));
        userLineEdit->setText(QApplication::translate("MainWindow", "may be empty", 0));
#ifndef QT_NO_TOOLTIP
        copyUsernameToClipboardPushButton->setToolTip(QApplication::translate("MainWindow", "Copy username to clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyUsernameToClipboardPushButton->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "User name", 0));
        label->setText(QApplication::translate("MainWindow", "Domain", 0));
        label_12->setText(QApplication::translate("MainWindow", "URL", 0));
        urlLineEdit->setText(QApplication::translate("MainWindow", "may be empty", 0));
#ifndef QT_NO_TOOLTIP
        openURLPushButton->setToolTip(QApplication::translate("MainWindow", "Open URL ...", 0));
#endif // QT_NO_TOOLTIP
        openURLPushButton->setText(QString());
        deleteCheckBox->setText(QApplication::translate("MainWindow", "delete", 0));
        savePushButton->setText(QApplication::translate("MainWindow", "Save", 0));
        revertPushButton->setText(QApplication::translate("MainWindow", "Revert", 0));
        revertPushButton->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        loginPushButton->setText(QApplication::translate("MainWindow", "Login", 0));
        label_11->setText(QApplication::translate("MainWindow", "Generated password", 0));
        passwordLengthLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        renewSaltPushButton->setToolTip(QApplication::translate("MainWindow", "Generate new password", 0));
#endif // QT_NO_TOOLTIP
        renewSaltPushButton->setText(QString());
        generatedPasswordLineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyGeneratedPasswordToClipboardPushButton->setToolTip(QApplication::translate("MainWindow", "Copy password to clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyGeneratedPasswordToClipboardPushButton->setText(QString());
        moreSettingsGroupBox->setTitle(QApplication::translate("MainWindow", "Advanced settings", 0));
        label_3->setText(QApplication::translate("MainWindow", "Min. iterations", 0));
        label_6->setText(QApplication::translate("MainWindow", "Password length", 0));
        label_15->setText(QApplication::translate("MainWindow", "Used characters", 0));
        tabWidgetVersions->setTabText(tabWidgetVersions->indexOf(tabV2), QApplication::translate("MainWindow", "Simple", 0));
        label_4->setText(QApplication::translate("MainWindow", "abcdefghijklmnopqrstuvwxyz", 0));
        label_13->setText(QApplication::translate("MainWindow", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 0));
        extraLineEdit->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "0123456789", 0));
        useDigitsLabel->setText(QString());
        useLowercaseLabel->setText(QString());
        useUppercaseLabel->setText(QString());
        useExtraLabel->setText(QString());
        tabWidgetVersions->setTabText(tabWidgetVersions->indexOf(tabV3), QApplication::translate("MainWindow", "Expert", 0));
        tabWidget->setTabText(tabWidget->indexOf(generatedPasswordTab), QApplication::translate("MainWindow", "Generated", 0));
        label_10->setText(QApplication::translate("MainWindow", "Legacy password", 0));
        legacyPasswordLineEdit->setText(QApplication::translate("MainWindow", "don't fill unless service requires fixed password", 0));
#ifndef QT_NO_TOOLTIP
        copyLegacyPasswordToClipboardPushButton->setToolTip(QApplication::translate("MainWindow", "Copy password to clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyLegacyPasswordToClipboardPushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(legacyPasswordTab), QApplication::translate("MainWindow", "Legacy", 0));
        label_2->setText(QApplication::translate("MainWindow", "Notes", 0));
        notesPlainTextEdit->document()->setPlainText(QApplication::translate("MainWindow", "may be empty", 0));
        label_5->setText(QApplication::translate("MainWindow", "Created", 0));
        createdLabel->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Modified", 0));
        modifiedLabel->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuImport->setTitle(QApplication::translate("MainWindow", "Import", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0));
        menuExpertMode->setTitle(QApplication::translate("MainWindow", "Expert actions", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
