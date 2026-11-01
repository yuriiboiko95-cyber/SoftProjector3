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

#include "../headers/spimageprovider.hpp"
#include <QDebug>

SpImageProvider::SpImageProvider() :
    QQuickImageProvider(QQuickImageProvider::Pixmap)
{
}

QPixmap SpImageProvider::requestPixmap(const QString &id, QSize *size, const QSize &requestedSize)
{
    Q_UNUSED(size);
    Q_UNUSED(requestedSize);
    bool found = m_pixmaps.contains(id);
    QPixmap p = m_pixmaps.value(id);
    qDebug() << "[SIP diag] requestPixmap(): id=" << id << " found=" << found
             << " size=" << p.size() << " isNull=" << p.isNull();
    return p;
}

void SpImageProvider::setPixMap(const QString &id, const QPixmap &p)
{
    qDebug() << "[SIP diag] setPixMap(): id=" << id << " size=" << p.size() << " isNull=" << p.isNull();
    m_pixmaps[id] = p;
}
