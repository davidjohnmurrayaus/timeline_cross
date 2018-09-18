#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TimelineQt.h"

/**
 * Main window of timeline application.
 */
class TimelineQt : public QMainWindow
{
	Q_OBJECT

public:
	TimelineQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::TimelineQtClass ui;

protected slots:
	void newButton_clicked();
};
