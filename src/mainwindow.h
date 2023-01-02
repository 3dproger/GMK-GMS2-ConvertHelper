#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "logwindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonFindGMKFile_clicked();

    void on_pushButtonFindGMS2Folder_clicked();

    void on_pushButtonBreakToExitConvert_clicked();

    void on_pushButtonConvertFunctions_clicked();

    void on_pushButtonFindGMS1Folder_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    LogWindow* log = new LogWindow(this);
};
#endif // MAINWINDOW_H
