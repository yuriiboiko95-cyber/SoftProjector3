/***************************************************************************
//
//    softProjector - an open source media projection software
//    Copyright (C) 2022  Vladislav Kobzar
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

#include <QTcpServer>

// Simple HTTP server implementation in Qt taken from https://stackoverflow.com/a/32931195

#ifndef HTTPSERVER_H
#define HTTPSERVER_H

#include <QObject>
#include <QTcpServer>

class HttpServer : public QObject
{
    Q_OBJECT

public:
    HttpServer(QObject *parent = nullptr);
    void startServer(QString httpServerIPAddress, quint16 httpServerPort, quint16 webSocketServerPort);
    void stopServer();
    void setHtmlResourcePath(QString path);
    bool isRunning;

public slots:
    void startConnection();
    void sendData();
    void closingClient();

private:
    QTcpServer *server = nullptr;
    QString ipAddress;
    quint16 httpPort;
    quint16 webSocketPort;
    QString htmlResourcePath = ":/html/html/httpserver.html";

signals:
};

#endif
