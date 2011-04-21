#include"md.h"
void myGraphics::paintEvent(QPaintEvent *event){

	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setPen(QPen(Qt::black, 1, Qt::DashDotLine, Qt::RoundCap));
	painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));
	painter.drawEllipse(QPoint(0,0), 10, 10);
	painter.drawEllipse(QPoint(500,500), 10, 10);

	}
