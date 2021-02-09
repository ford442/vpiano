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

#include <QtGlobal>
#include <QSysInfo>
#include <QUrl>
#include <QDesktopServices>
#include <drumstick/configurationdialogs.h>
#include "about.h"
#include "constants.h"

About::About(QWidget *parent)
    : QDialog(parent),
      m_lang("en")
{
    ui.setupUi(this);
    retranslateUi();
#if defined(SMALL_SCREEN)
    setWindowState(Qt::WindowActive | Qt::WindowMaximized);
#else
    adjustSize();
#endif
}

void About::retranslateUi()
{
    ui.retranslateUi(this);
    ui.labelVersion->setText(tr("<html>"
            "<head>"
              "<meta name=\"qrichtext\" content=\"1\" />"
              "<style type=\"text/css\">\np, li { white-space: pre-wrap; }</style>"
            "</head>"
            "<body style=\"font-family:'Sans Serif'; font-size:12pt; font-style:normal;\">"
              "<p style=\"margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                "Version: %1<br/>"
                "Qt version: %2 %3<br/>"
                "Drumstick version: %4<br/>"
                "Build date: %5<br/>"
                "Build time: %6<br/>"
                "Compiler: %7"
              "</p>"
            "</body>"
            "</html>").arg(PGM_VERSION,
                           qVersion(),
                           QSysInfo::buildCpuArchitecture(),
                           drumstick::widgets::libraryVersion(),
                           BLD_DATE,
                           BLD_TIME,
                           CMP_VERSION));
}
