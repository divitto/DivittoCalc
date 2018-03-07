#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow )
{
    ui->setupUi(this);
    setWindowTitle( "Divitto's Calculator" );
    setFixedSize( this->width( ), this->height( ) ); // removes the maximize button at the top and ensures the caluclator will stay he same size to eliminate stretching problems with the buttons
    connect( ui->actionClear, SIGNAL( triggered( ) ), this, SLOT( on_clearButton_clicked( ) ) );
    //Connect digit buttons
    connect( ui->zeroButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->oneButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->twoButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->threeButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->fourButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->fiveButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->sixButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->sevenButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->eightButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->nineButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
    connect( ui->decimalButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_clicked( ) ) );
}

MainWindow::~MainWindow( )
{
    delete ui;
}

void MainWindow::on_digitButton_clicked( )
{
    QPushButton* button = (QPushButton*)sender( );
    if( ui->displayLabel->text() != "0" )
    {
        ui->displayLabel->setText( ui->displayLabel->text( ) + button->text( ) );
    }
    else
    {
        ui->displayLabel->setText( button->text( ) );
    }
}

void MainWindow::on_clearButton_clicked( )
{
    ui->displayLabel->setText( "0" );
}
