#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtGui>
#include<QtCore>
#include<QFileDialog>
#include<QMessageBox>


namespace Ui {
class MainWindow;
}

class InputFileInfo
 {

  public:
    QFileInfo *fileinfo;
    QString filename;
    QString filesize;
    QString nofasciilogs;
    QString noofbinarylogs;
    QString noofunknownlogs;
};
Q_DECLARE_METATYPE(InputFileInfo)

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *inputmodel;
    QStandardItemModel *outputmodel;

    QList<QStandardItem *> createrowinputtable(QFileInfo fileinfo);
    QString m_lastpath;

};

#endif // MAINWINDOW_H
