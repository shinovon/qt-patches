#include <QtGui/QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QMessageBox* msgBox = new QMessageBox(QMessageBox::Information, "", QString("Qt version: ") + qVersion(), QMessageBox::Close);
	msgBox->show();

	return app.exec();
}
