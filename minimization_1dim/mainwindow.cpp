#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() //графики
{   /*
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    //Это как раз создана сцена. Сцена - это класс для работы с 2D графикой.
    //Теперь, раз это график, то построим координатные оси X и Y.
    QPen pen(Qt::black);//Просто выбираем цвет для карандашика
    scene->addLine(0,0,0,180,pen);//x 0х 90у, 180х 90у ,pen вертикаль
    scene->addLine(0,180,180,180,pen);//y 90х 0у - 1 точка, 90х 180у - 2 точка, pen
    //https://habr.com/ru/sandbox/54215/

    ui->graphicsView->setScene(scene);
    */

    int a;
    double eps;
    a =ui->spinBox->value();//N
    a+=1;
    eps =ui->doubleSpinBox->value();

    //Забираем значения переменных из SpinBox-ов
  //  QPen pen2(Qt::red);//Карандашик для графика
    //scene->addLine(a*15+90,90-b*15,(a+10)*15+90,90-(b-3)*15,pen2);
    //(90;90) – точка пересечения осей. Значит, мы должны к x-ам прибавить x //центра, а из y вычесть значение Y центра. 15 – это количество пикселов в //0,5 мм. Это все требуется для наиболее точного расположения графика.
    //cycle my

    //float x,y; x=5;y=90;
    float * l,temp; l=new float[a];
    for(int i=0;i<a;i++)
        { temp=float(i);
          l[i]=pow(2,(-1*temp)/2) + (1-pow(2,(-1*temp/2)))*eps;
          //if(i!=0)
          //  {scene->addLine(i*x,180-l[i]*y,(i-1)*x,180-l[i-1]*y,pen2);}

        }

    //ui->graphicsView->setScene(scene);//Добавляем в наш GraphicsView нарисованную сцену.

    //float big_l;big_l=(1+eps)/((float(a)/2)+1);
    //ui->textEdit->setText("Lopt= ");
    //ui->textEdit->append(QString::number(big_l));







    //метод дихотомии
    QVector <double> lx(a);
    for (int i=0;i<a;i++)
        {lx[i]=double(i);

        }


    QVector <double> dly(a);
    for(int i=0;i<a;i++)
        {dly[i]=double(l[i]);

        }




    // create graph and assign data to it:
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(lx,dly);//x and y???

    // give the axes some labels:
    ui->widget->xAxis->setLabel("n");
    ui->widget->yAxis->setLabel("Lопт");

    // set axes ranges, so we see all data:
    ui->widget->xAxis->setRange(1,a);
    ui->widget->yAxis->setRange(0,1.10);
    ui->widget->replot();


    //fibbonachi method
    int* fib_ch;fib_ch=new int[a];

    fib_ch[0]=1;fib_ch[1]=1;
    for(int i=2;i<a;i++)
        {fib_ch[i]=fib_ch[i-1]+fib_ch[i-2];

        }

    QVector <double> fly(a);
    for(int i=0;i<a;i++)
        {fly[i]=1.0/float(fib_ch[i]) + float(fib_ch[i-2])*eps/float(fib_ch[i]);

        }
    ui->widget_2->addGraph();
    ui->widget_2->graph(0)->setData(lx,fly);
    ui->widget_2->xAxis->setLabel("n");
    ui->widget_2->yAxis->setLabel("Lопт");
    ui->widget_2->xAxis->setRange(1,a);
    ui->widget_2->yAxis->setRange(0,1.10);
    ui->widget_2->replot();


    //gold section
    double t;
    t=(1+sqrt(5))/2.0;
    QVector <double> gly(a);
    for(int i=0;i<a;i++)
        {gly[i]=1.0/pow(t,(i-1));

        }
    ui->widget_3->addGraph();
    ui->widget_3->graph(0)->setData(lx,gly);
    ui->widget_3->xAxis->setLabel("n");
    ui->widget_3->yAxis->setLabel("Lопт");
    ui->widget_3->xAxis->setRange(1,a);
    ui->widget_3->yAxis->setRange(0,1.10);
    ui->widget_3->replot();









}

void MainWindow::on_pushButton_2_clicked()//золотое сечение
{
    int a,b; bool tris;
    a=ui->spinBox_2->value();
    tris=ui->checkBox->isTristate();
    if(tris==false)
        {a*=-1;}
    b=ui->spinBox_3->value();
    double sigma;
    sigma=ui->doubleSpinBox_2->value();
    float tau;
    tau=(1+sqrt(5.0))/2.0;
    qDebug()<<"tau "<<tau;

    float x1,x2;
    float fx1,fx2,fb,fa;


    x1=a+(2-tau)*(b-(a));
    qDebug()<<"x1 "<<x1;
    x2=a+(tau-1)*(b-(a));
    qDebug()<<"x2 "<<x2;

    fa=exp(a)+pow(a,2);
    fb=exp(b)+pow(b,2);
    qDebug()<<"fa "<<fa;
    qDebug()<<"fb "<<fb;
    fx1=exp(x1)+pow(x1,2);
    qDebug()<<"fx1 "<<fx1;
    fx2=exp(x2)+pow(x2,2);
    qDebug()<<"fx2 "<<fx2;
    int i;i=0;

    while(  (abs(b-a))>sigma  && (i<100 ))
        {
         qDebug()<<"fx1 "<<fx1;
         qDebug()<<"fx2 "<<fx2;
         qDebug()<<"i "<<i;
         if(fx1<fx2)
            {b=x2;
            x2=x1;
            fx2=fx1;
            x1=a+(2-tau)*(b-a);
            }
         if(fx1>fx2)
            {a=x1;
            x1=x2;
            fx1=fx2;
            x2=a+(tau-1)*(b-a);
            }

         fa=exp(a)+pow(a,2);
         fb=exp(b)+pow(b,2);
         fx1=exp(x1)+pow(x1,2);
         fx2=exp(x2)+pow(x2,2);
         i++;

        }

    ui->textEdit_2->setText("Метод золотого сечения: ");
    //ui->textEdit_2->append(QString::number(x1));
   // ui->textEdit_2->append(QString::number(fx1));
    //ui->textEdit_2->append("___________________");
    //ui->textEdit_2->append(QString::number(x2));
    //ui->textEdit_2->append(QString::number(fx2));

    if(fx2<=fx1)
        {
         ui->textEdit_2->append("минимальное значение функции : ");
         ui->textEdit_2->append(QString::number(fx2));
         ui->textEdit_2->append("минимальное значение в точке");
         ui->textEdit_2->append(QString::number(x2));

        }
    if(fx1<fx2)
        {
         ui->textEdit_2->append("минимальное значение функции : ");
         ui->textEdit_2->append(QString::number(fx1));
         ui->textEdit_2->append("минимальное значение в точке");
         ui->textEdit_2->append(QString::number(x1));

        }

    ui->textEdit_2->append("Количество измерений: ");
    ui->textEdit_2->append(QString::number(i));

}



void MainWindow::on_pushButton_3_clicked()//метод парабол
{
    float x0,x1,dfdx,dfdxdx,fx1,fx0;
    bool tris;
    tris=ui->checkBox_2->isTristate();

    x0=ui->doubleSpinBox_3->value();
    if(tris==false)
        {x0*=-1;}
    //h=ui->doubleSpinBox_4->value();
    bool b; b=true;
    double sigma;
    sigma=ui->doubleSpinBox_2->value();
    int i;i=0;

    /* //нужен шаг
    while(b)
        {
         dfdx=(exp(x0+h)+pow(x0+h,2))-(exp(x0-h)+pow(x0-h,2)) ;
         dfdxdx=( (exp(x0+h)+pow(x0+h,2)) - 2*(exp(x0)+pow(x0,2))+(exp(x0-h)+pow(x0-h,2)) );
         x1=dfdx / dfdxdx;
         fx1=exp(x1)+pow(x1,2);
         fx0=exp(x0)+pow(x0,2);
         b=((dfdx>sigma) && (fx1<fx0));
         i++;

        }
        */

    //2 attempt
    while(b)
        {
         dfdx=2*x0+exp(x0);
         dfdxdx=2+exp(x0);
         x1=x0-(dfdx / dfdxdx);

         fx1=exp(x1)+pow(x1,2);
         fx0=exp(x0)+pow(x0,2);
         b=(dfdx<sigma);//&& (fx1<fx0));
         if (b)
            {x0=x1;}
         i++;

        }



    ui->textEdit_2->setText("Метод парабол: ");
    if(fx1<fx0)
        {
         ui->textEdit_2->append("минимальное значение функции : ");
         ui->textEdit_2->append(QString::number(fx1));
         ui->textEdit_2->append("минимальное значение в точке");
         ui->textEdit_2->append(QString::number(x1));

        }
    if(fx1>fx0)
        {
         ui->textEdit_2->append("минимальное значение функции : ");
         ui->textEdit_2->append(QString::number(fx0));
         ui->textEdit_2->append("минимальное значение в точке");
         ui->textEdit_2->append(QString::number(x0));

        }

    ui->textEdit_2->append("Количество измерений: ");
    ui->textEdit_2->append(QString::number(i));


}
