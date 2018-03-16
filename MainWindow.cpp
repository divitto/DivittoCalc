#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QtMath>
#include <QDebug>



MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow ),
    mFirstExp( 0.0 ),
    mIsWorkingOnSecondExpresion( false ),
    mStartNewEquation( true ),
    mIsTypingSecondNumber( false ),
    mCanPlaceZero( false )
{
    ui->setupUi(this);

    // Define MainWindow
    setWindowTitle( "Divitto's Calculator" );
    setFixedSize( this->width( ), this->height( ) ); // removes the maximize button at the top and ensures the caluclator will stay he same size to eliminate stretching problems with the buttons

    //Connect digit buttons
    connect( ui->zeroButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->oneButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->twoButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->threeButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->fourButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->fiveButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->sixButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->sevenButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->eightButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->nineButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );
    connect( ui->decimalButton, SIGNAL( released( ) ), this, SLOT( on_digitButton_released( ) ) );

    // Connect binary Operators
    connect( ui->additionButton, SIGNAL( released( ) ), this, SLOT( on_binaryOperator_released() ) );
    connect( ui->subtractButton, SIGNAL( released( ) ), this, SLOT( on_binaryOperator_released() ) );
    connect( ui->multiplyButton, SIGNAL( released( ) ), this, SLOT( on_binaryOperator_released() ) );
    connect( ui->divideButton, SIGNAL( released( ) ), this, SLOT( on_binaryOperator_released() ) );

    // Connect Function Buttons
    connect( ui->actionClear, SIGNAL( triggered( ) ), this, SLOT( on_clearButton_released( ) ) );
    connect( ui->clearButton, SIGNAL( released( ) ), this, SLOT( on_clearButton_released( ) ) );
    connect( ui->equalButton, SIGNAL( released( ) ), this, SLOT( on_equalButton_released( ) ) );

    // Define binary buttons
    ui->additionButton->setCheckable( true );
    ui->subtractButton->setCheckable( true );
    ui->multiplyButton->setCheckable( true );
    ui->divideButton->setCheckable( true );

    ui->additionButton->setChecked( false );
    ui->subtractButton->setChecked( false );
    ui->multiplyButton->setChecked( false );
    ui->divideButton->setChecked( false );
}

MainWindow::~MainWindow( void )
{
    delete ui;
}

void MainWindow::on_digitButton_released( )
{
    QPushButton* button = (QPushButton*)sender();
    double labelNumber = 0.0;
    QString newDisplay = "";

    if( button->text() == '.' )
    {
        if( ui->displayLabel->text() != "" && !mStartNewEquation )
            ui->displayLabel->setText( ui->displayLabel->text() + '.' );
        else
            ui->displayLabel->setText( "0." );

        mStartNewEquation = false;
        mIsTypingSecondNumber = true;
        mCanPlaceZero = true;
    }
    else if( button->text() == '0' && mCanPlaceZero )
    {
        ui->displayLabel->setText( ui->displayLabel->text() + '0' );
    }
    else
    {
        if( mStartNewEquation || !mIsTypingSecondNumber )
        {
            labelNumber = button->text().toDouble( );
            mStartNewEquation = false;
            mIsTypingSecondNumber = true;
        }
        else
        {
            labelNumber = (ui->displayLabel->text() + button->text()).toDouble();
        }
        newDisplay = QString::number( labelNumber, 'g', 15 );
        ui->displayLabel->setText( newDisplay );
        mCanPlaceZero = false;
    }
}

void MainWindow::on_binaryOperator_released()
{   
    QPushButton* button = (QPushButton*)sender( );

    if( mIsWorkingOnSecondExpresion )
    {
        on_equalButton_released( );
        mStartNewEquation = false;
        qDebug() << "equal called by operator:" << button->text();
    }

    mFirstExp = ui->displayLabel->text().toDouble();

    qDebug() << mFirstExp << button->text();

    ui->displayLabel->setText( "" );
    mIsWorkingOnSecondExpresion = true;
    mIsTypingSecondNumber = false;
    button->setChecked( true );
}

void MainWindow::on_equalButton_released()
{
    double labelNumber = 0.0;
    QString newDisplay = "";

    if( mIsWorkingOnSecondExpresion )
    {
        if( ui->additionButton->isChecked( ) )
        {
            qDebug() << mFirstExp << '+' << ui->displayLabel->text().toDouble();
            labelNumber = this->mFirstExp + ui->displayLabel->text().toDouble();
            newDisplay = QString::number( labelNumber, 'g', 15 );
            ui->additionButton->setChecked( false );
        }
        else if( ui->subtractButton->isChecked( ) )
        {
            qDebug() << mFirstExp << '-' << ui->displayLabel->text().toDouble();
            labelNumber = this->mFirstExp - ui->displayLabel->text().toDouble();
            newDisplay = QString::number( labelNumber, 'g', 15 );
            ui->subtractButton->setChecked( false );
        }
        else if( ui->multiplyButton->isChecked( ) )
        {
            qDebug() << mFirstExp << '*' << ui->displayLabel->text().toDouble();
            labelNumber = this->mFirstExp * ui->displayLabel->text().toDouble();
            newDisplay = QString::number( labelNumber, 'g', 15 );
            ui->multiplyButton->setChecked( false );
        }
        else if( ui->divideButton->isChecked( ) )
        {
            qDebug() << mFirstExp << '/' << ui->displayLabel->text().toDouble();
            labelNumber = this->mFirstExp / ui->displayLabel->text().toDouble();
            newDisplay = QString::number( labelNumber, 'g', 15 );
            ui->divideButton->setChecked( false );
        }
        ui->displayLabel->setText( newDisplay );
        this->mFirstExp = ui->displayLabel->text().toDouble();
        qDebug() << '=' << mFirstExp;
        this->mIsWorkingOnSecondExpresion = false;
        this->mIsTypingSecondNumber = false;
        this->mStartNewEquation = true;
    }
}

void MainWindow::on_clearButton_released( void )
{
    this->mFirstExp = 0;
    this->mIsWorkingOnSecondExpresion = false;
    this->mStartNewEquation = true;

    ui->additionButton->setChecked( false );
    ui->subtractButton->setChecked( false );
    ui->multiplyButton->setChecked( false );
    ui->divideButton->setChecked( false );

    ui->displayLabel->setText( QString::number( this->mFirstExp ) );
}




