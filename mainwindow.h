#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonKey0_clicked();

    void on_pushButtonKey1_clicked();

    void on_pushButtonKey2_clicked();

    void on_pushButtonKey3_clicked();

    void on_pushButtonKey4_clicked();

    void on_pushButtonKey5_clicked();

    void on_pushButtonKey6_clicked();

    void on_pushButtonKey7_clicked();

    void on_pushButtonKey8_clicked();

    void on_pushButtonKey9_clicked();

    void on_pushButtonKeyDot_clicked();

    void on_pushButtonKeyEnter_clicked();

    void on_pushButtonKeyBack_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
