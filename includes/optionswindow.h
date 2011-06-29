#ifndef OPTIONSWINDOW_H
#define OPTIONSWINDOW_H

#include <QtGui>
#include "mainwindow.h"

namespace Ui
{
    class optionsWindow;
}



class optionsWindow : public QDialog
{
    Q_OBJECT

	public:
		explicit optionsWindow(mainWindow *parent = 0);
		~optionsWindow();

	public slots:
		void updateContainer(QTreeWidgetItem *, QTreeWidgetItem *);
		void on_lineFilename_textChanged(QString);
		void on_comboSourcesLetters_currentIndexChanged(int);
		void on_buttonFolder_clicked();
		void on_buttonCrypt_clicked();
		void on_lineColoringArtists_textChanged();
		void on_lineColoringCopyrights_textChanged();
		void on_lineColoringCharacters_textChanged();
		void on_lineColoringModels_textChanged();
		void on_lineColoringGenerals_textChanged();
		void on_buttonColoringArtistsColor_clicked();
		void on_buttonColoringCopyrightsColor_clicked();
		void on_buttonColoringCharactersColor_clicked();
		void on_buttonColoringModelsColor_clicked();
		void on_buttonColoringGeneralsColor_clicked();
		void on_buttonColoringArtistsFont_clicked();
		void on_buttonColoringCopyrightsFont_clicked();
		void on_buttonColoringCharactersFont_clicked();
		void on_buttonColoringModelsFont_clicked();
		void on_buttonColoringGeneralsFont_clicked();
		void save();

	private:
		mainWindow *m_parent;
		Ui::optionsWindow *ui;
};

#endif // OPTIONSWINDOW_H
