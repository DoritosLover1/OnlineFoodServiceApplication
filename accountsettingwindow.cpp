#include "accountsettingwindow.h"
#include "ui_accountsettingwindow.h"

AccountSettingWindow::AccountSettingWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AccountSettingWindow)
{
    ui->setupUi(this);
}

AccountSettingWindow::~AccountSettingWindow()
{
    delete ui;
}
