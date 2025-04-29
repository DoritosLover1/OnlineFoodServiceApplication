#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "accountsettingwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    AccountSettingWindow* accountSettingWindow;

private slots:
    void on_pushButton_clicked();
    void on_accountButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
