//
// Created by Junhao on 2023/3/18.
//
#include <QApplication>
#include "mainwindow.h"
using namespace std;
int main(int argc,char *argv[]) {
    QApplication a(argc,argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}