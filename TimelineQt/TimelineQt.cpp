#include "TimelineQt.h"

/**
 * Constructor.
 * @param parent The parent widget of this object.
 */
TimelineQt::TimelineQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Connect signals and slots
	connect(ui.newButton, SIGNAL(clicked(void)),
		this, SLOT(newButton_clicked(void)));
}

/**
 * New scene button click handler.
 */
void TimelineQt::newButton_clicked()
{
	int index = ui.scenesList->count();
	ui.scenesList->insertItem(index, "New");
}