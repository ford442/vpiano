/*
    MIDI Virtual Piano Keyboard
    Copyright (C) 2008-2020, Pedro Lopez-Cabanillas <plcl@users.sf.net>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ABOUT_H
#define ABOUT_H

#include "ui_about.h"
#include <QDialog>

class About : public QDialog
{
    Q_OBJECT

public:
    About(QWidget *parent = nullptr);
    void retranslateUi();
    void setLanguage(const QString lang) { m_lang = lang; }

private:
    Ui::AboutClass ui;
    QString m_lang;
};

#endif // ABOUT_H
