#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_accountButton_clicked()
{
    if (!accountSettingWindow) {
        accountSettingWindow = new AccountSettingWindow();
    }

    if (!accountSettingWindow->isVisible()) {
        accountSettingWindow->show();
        accountSettingWindow->raise();
        accountSettingWindow->activateWindow();
    }
}


void MainWindow::on_settingButton_clicked()
{
    if (!mainSettingWindow) {
        mainSettingWindow = new MainSettingWindow();
    }

    if (!mainSettingWindow->isVisible()) {
        mainSettingWindow->show();
        mainSettingWindow->raise();
        mainSettingWindow->activateWindow();
    }
}

