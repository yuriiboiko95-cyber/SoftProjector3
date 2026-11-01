/***************************************************************************
//
//    softProjector - an open source media projection software
//    Copyright (C) 2017  Vladislav Kobzar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation version 3 of the License.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
***************************************************************************/

#ifndef SPIMAGEPROVIDER_HPP
#define SPIMAGEPROVIDER_HPP

#include <QQuickImageProvider>
#include <QHash>

class SpImageProvider : public QQuickImageProvider
{

public:
    SpImageProvider();
    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);

    // Keyed by id (e.g. "imB1a"/"imT2b") rather than one shared slot: a single
    // slot meant every requestPixmap() call ignored its own id and just
    // returned whatever was most recently set by ANYONE - background or text,
    // display 1 or display 2 - so one image element could end up showing
    // another element's content depending on call ordering/timing.
    void setPixMap(const QString &id, const QPixmap &p);

private:
    QHash<QString, QPixmap> m_pixmaps;
};


#endif // SPIMAGEPROVIDER_HPP
