#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    fillComboBoxes();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::fillComboBoxes() {
    QString daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"
                            };

    QComboBox* from = ui->fromDayOfWeek;
    QComboBox* to = ui->toDayOfWeek;

    for (QString qstr : daysOfWeek) {
        to->addItem(qstr);
        from->addItem(qstr);
    }
}
