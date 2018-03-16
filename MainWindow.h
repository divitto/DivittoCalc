#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow( void );

private slots:
    void on_digitButton_released( void );
    void on_binaryOperator_released( void );
    void on_equalButton_released();
    void on_clearButton_released( void );

private:
    //## Attributes
    Ui::MainWindow *ui;

    double mFirstExp;
    bool mIsWorkingOnSecondExpresion;
    bool mIsTypingSecondNumber;
    bool mStartNewEquation;
    bool mCanPlaceZero;
};

#endif // MAINWINDOW_H
