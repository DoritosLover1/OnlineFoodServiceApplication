#include "mainsettingwindow.h"
#include "ui_mainsettingwindow.h"

MainSettingWindow::MainSettingWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainSettingWindow)
{
    ui->setupUi(this);
}

MainSettingWindow::~MainSettingWindow()
{
    delete ui;
}
