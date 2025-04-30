#ifndef MAINSETTINGWINDOW_H
#define MAINSETTINGWINDOW_H

#include <QWidget>

namespace Ui {
class MainSettingWindow;
}

class MainSettingWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainSettingWindow(QWidget *parent = nullptr);
    ~MainSettingWindow();

private:
    Ui::MainSettingWindow *ui;
};

#endif // MAINSETTINGWINDOW_H
