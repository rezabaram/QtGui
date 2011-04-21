#include <QApplication>
 
#include "md.h"
  
//void QSvgWidget::paintEvent(QPaintEvent *){
	//load(QString("circle1.svg"));
        //QPainter painter(this);
        //painter.setPen(Qt::blue);
        //painter.setFont(QFont("Arial", 30));
        //painter.drawText(rect(), Qt::AlignCenter, "Qt");

//}
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mdGui *gui = new mdGui;
 
    gui->show();
    return app.exec();
}
