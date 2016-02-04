#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->typeofconversioncmbBox->setCurrentIndex(2);
    qRegisterMetaType<InputFileInfo>("InputFileInfo");



   //ui->inputtreeView->header()->setStretchLastSection(true);
  // ui->outputtreeeView->header()->setStretchLastSection(true);
   //ui->inputtreeView->header()->setSectionResizeMode(QHeaderView::Interactive);
   // ui->outputtreeeView->header()->setSectionResizeMode(QHeaderView::Interactive);
   // ui->inputtreeView->header()->setSectionResizeMode(QHeaderView::Stretch);
   // ui->outputtreeeView->header()->setSectionResizeMode(QHeaderView::Stretch);
   //  ui->inputtreeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    // ui->outputtreeeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);



    inputmodel = new QStandardItemModel(0,5,this);
    outputmodel = new QStandardItemModel(0,4,this);

    inputmodel->setHorizontalHeaderItem(0,new QStandardItem(*(new QIcon(":/new/prefix1/file.jpg")),QString("Input File")));

    inputmodel->setHorizontalHeaderItem(1,new QStandardItem(QString("SIZE")));
    inputmodel->setHorizontalHeaderItem(2,new QStandardItem(QString("ASCII")));
    inputmodel->setHorizontalHeaderItem(3,new QStandardItem(QString("BIN")));
    inputmodel->setHorizontalHeaderItem(4,new QStandardItem(QString("UNKNOWN")));
   // ui->inputtreeView->header()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->inputtreeView->setModel(inputmodel);
    ui->inputtreeView->header()->setStyleSheet("font-weight:bold;font-size:10pt");



    outputmodel->setHorizontalHeaderItem(0,new QStandardItem(*(new QIcon(":/new/prefix1/file.jpg")),QString("Output File")));
    outputmodel->setHorizontalHeaderItem(1,new QStandardItem(QString("Estimated Size")));
    outputmodel->setHorizontalHeaderItem(2,new QStandardItem(QString("Logs to Convert")));
    outputmodel->setHorizontalHeaderItem(3,new QStandardItem(QString("Period")));
   // ui->outputtreeeView->header()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->outputtreeeView->setModel(outputmodel);
    ui->outputtreeeView->header()->setStyleSheet("font-weight:bold;font-size:10pt");



}

MainWindow::~MainWindow()
{
    delete ui;
}


void addChildrentofile(QStandardItem *parent)
{

     //
    QStandardItem *logsitem = new QStandardItem("Logs");
    logsitem->setFlags(logsitem->flags() ^ Qt::ItemIsEditable);
    parent->appendRow(logsitem );
    //add lognames and count

    QStandardItem *rangeitem = new QStandardItem("RANGE(100)");
    rangeitem->setFlags((rangeitem->flags()|Qt::ItemIsUserCheckable) ^ Qt::ItemIsEditable);
    rangeitem->setCheckState(Qt::Checked);
    logsitem->appendRow(rangeitem);

    QStandardItem *bestpositem = new QStandardItem("BESTPOS(50)");
     bestpositem->setFlags((bestpositem->flags()|Qt::ItemIsUserCheckable) ^ Qt::ItemIsEditable);
      bestpositem->setCheckState(Qt::Checked);
    logsitem->appendRow(bestpositem);


     QStandardItem *constellationsitem = new QStandardItem("Constellations");
     constellationsitem->setFlags(constellationsitem->flags() ^ Qt::ItemIsEditable);
      parent->appendRow(constellationsitem );
      QStandardItem *signalsitem = new QStandardItem("Signals");
      signalsitem->setFlags(signalsitem->flags() ^ Qt::ItemIsEditable);
       parent->appendRow(signalsitem);
       QStandardItem *prnsitem = new QStandardItem("Prns");
       prnsitem->setFlags(prnsitem->flags() ^ Qt::ItemIsEditable);
       parent->appendRow(prnsitem);
       QStandardItem *timeitem = new QStandardItem("Time");
       timeitem->setFlags(timeitem->flags() ^ Qt::ItemIsEditable);
       parent->appendRow(timeitem);




}
QString convertintokbmbgb(qint64  fs)
{
    qreal num;
    QString units;
    if(fs > 1073741824)
    {
         num = fs/1073741824.0;
         units =" GB";
    }
    else if(fs > 1048576)
    {
        num = fs/1048576.0;
        units =" MB";

    }
    else
    {
        num = fs/1024.0;
        units = " KB";
    }
   QString strnum = QString::number(num,'f',2);
   strnum.append(units);
   return strnum;


}

QList<QStandardItem *> MainWindow::createrowinputtable(QFileInfo fileinfo)
{
    QList<QStandardItem *>listitems;
    qint64 fs;
    QString strfs;
    for(int col=0 ; col < inputmodel->columnCount() ; col++)
    {
        QStandardItem *item = new QStandardItem();
        switch(col)
        {
           case 0:item->setText(fileinfo.fileName());
                   // add logs,constellations,signals,prns
                  item->setFlags(item->flags() ^ Qt::ItemIsEditable);
                   addChildrentofile(item);
                   break;

          case 1:  fs = fileinfo.size();
                  strfs = convertintokbmbgb(fs);
                  item->setText(strfs);
                  item->setFlags(item->flags() ^ Qt::ItemIsEditable);
                  break;

          case 2: item->setFlags(item->flags() ^ Qt::ItemIsEditable); //initialize nof ascii logs
                  break;

          case 3:  item->setFlags(item->flags() ^ Qt::ItemIsEditable);// initialize no of binary logs
                    break;

          case 4: item->setFlags(item->flags() ^ Qt::ItemIsEditable);//initialize no of unkonwn logs
                  break;
        }
        listitems.append(item);
    }
    return listitems;
}

void MainWindow::on_pushButton_clicked()
{
    QString defpath;
    if(m_lastpath.isEmpty())
    {
        defpath= QDir::currentPath();
    }
    else
    {
        defpath = m_lastpath;
    }
    QStringList filenamelist= QFileDialog::getOpenFileNames(this,tr("Open File"),defpath,"ASCII/Binary/GPSFiles(*.asc *.bin *.gps *.pdc );;ASCII(*.asc);;Binary(*.bin);;GPSFiles(*.gps *.pdc);;AllFiles(*.*)");
    QList<QStandardItem *>litems;
    for(int i=0 ; i < filenamelist.size();i++)
    {
       QString filename = filenamelist.at(i);

       QFileInfo fileinfo(filename);
       litems =createrowinputtable(fileinfo);
       inputmodel->appendRow(litems);
       m_lastpath = fileinfo.path();

    }
    ui->inputtreeView->header()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->outputtreeeView->header()->setSectionResizeMode(0,QHeaderView::ResizeToContents);

}


