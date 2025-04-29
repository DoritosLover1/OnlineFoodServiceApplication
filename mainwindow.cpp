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

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_accountButton_clicked()
{
    accountSettingWindow = new AccountSettingWindow();
    accountSettingWindow->show();
    accountSettingWindow->raise();
    accountSettingWindow->activateWindow();
}

