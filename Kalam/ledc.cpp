#include <QtGui>
#include <ledc.h>

ledc::ledc(QWidget *parent)
    :QWidget(parent)
{

    img1->load("C:/Users/2077s/Desktop/akshat folder/Kalam/Images/greenled.png");
    img2->load("C:/Users/2077s/Desktop/akshat folder/Kalam/Images/redled.png");

}

void ledc::paintEvent(QPaintEvent *) {
  QPainter p(this);
  lit?p.drawPixmap(0,0,40,40,*img1):p.drawPixmap(0,0,40,40,*img2);

}

void ledc::toggle(int n)
{
    lit = n;
    this->update();
}
