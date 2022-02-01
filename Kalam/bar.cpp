#include <QtGui>
#include <bar.h>

bar::bar(QWidget *parent)
    :QWidget(parent)
{
//    img->scaled(300,300,Qt::KeepAspectRatio,Qt::SmoothTransformation);

    imgb->load("C:/Users/2077s/Desktop/akshat folder/Kalam/Images/bar-07.png");


}

void bar::paintEvent(QPaintEvent *)
{

    QPointF pts[3] = {
        QPointF(35,val1),
        QPointF(13,val1+10),
        QPointF(13,val1-10)

};
  QPainter paint(this);

       paint.setRenderHint(QPainter::Antialiasing);
        paint.setPen(Qt::red);
        paint.setBrush(QColor(Qt::green));


       paint.save();

        paint.drawConvexPolygon(pts , 3);
        paint.drawPixmap(0,0,160,210,*imgb);

        paint.restore();

}

void bar::getpos(double *val)
{
    k = *val - 80000;
    k=*val;
  // val1= 210-(210*(k)/21400);
    val1= 210-(210*(k)/100);
    this->update();
}

void bar::getpos(int val)
{
    //val1= 210-(210*(val - 80000)/21400);
     val1= 210-(210*(val)/100);
    this->update();
}
