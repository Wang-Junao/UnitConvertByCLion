//
// Created by Junhao on 2023/3/18.
//

#ifndef UNITCONVERTBYCLION_MAINWINDOW_H
#define UNITCONVERTBYCLION_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //UNITCONVERTBYCLION_MAINWINDOW_H
