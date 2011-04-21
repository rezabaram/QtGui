#ifndef mdQTAPP_H
#define mdQTAPP_H

#include<iostream>
#include <QPainter> 
#include <QtSvg>
 #include <QGraphicsScene>

#include "ui_md.h"

class myGraphics : public QGraphicsView{
	public:
	myGraphics(QWidget *parent):QGraphicsView(parent){ }

	void paintEvent(QPaintEvent *event);
	};

class mdGui : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT
 
public:
    mdGui(QWidget *parent = 0):QMainWindow(parent){
	setupUi(this);
	connect( pushButtonQuit, SIGNAL( clicked() ), this, SLOT( close()) );
	connect( pushButtonStart, SIGNAL( clicked() ), this, SLOT( mdStartEvent()) );
	connect( pushButtonStop, SIGNAL( clicked() ), this, SLOT( mdStopEvent()) );
	//graphics= new myGraphics(graphicsWidget);
	scene= new QGraphicsScene() ;
	QGraphicsRectItem *rect = scene->addRect(QRectF(0, 0, 100, 100));
	//graphics= new myGraphics(graphicsView);
	graphicsView->setScene(scene);
	//scene->show();
    graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
    graphicsView->setRenderHints(QPainter::Antialiasing
                         | QPainter::TextAntialiasing);
    graphicsView->setContextMenuPolicy(Qt::ActionsContextMenu);
	graphicsView->show();
	
	    connect(scene, SIGNAL(selectionChanged()),
            this, SLOT(updateActions()));

    	setWindowTitle(tr("Diagram"));
    	updateActions();
	
	//scene->setGeometry(0, 0, 500, 500);
	//scene->show();
	
	//graphics->setGeometry(0, 0, 500, 500);
 	//view.show();
	}

	private:
	myGraphics *graphics;
	QGraphicsScene *scene;
	
 
 
public slots:
    void updateActions(){};
    void mdStartEvent()
    	{
	//graphics->update();
    	}
    void mdStopEvent()
    	{
    	}

    
    //void quit(){parent->quit();};
};
 
 
#endif
