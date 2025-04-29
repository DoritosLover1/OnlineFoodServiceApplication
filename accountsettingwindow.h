#ifndef ACCOUNTSETTINGWINDOW_H
#define ACCOUNTSETTINGWINDOW_H

#include <QWidget>

namespace Ui {
class AccountSettingWindow;
}

class AccountSettingWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AccountSettingWindow(QWidget *parent = nullptr);
    ~AccountSettingWindow();

private:
    Ui::AccountSettingWindow *ui;
};

#endif // ACCOUNTSETTINGWINDOW_H
