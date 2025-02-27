// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QWEBENGINEURLRESPONSEINFO_P_H
#define QWEBENGINEURLRESPONSEINFO_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qtwebenginecoreglobal_p.h"

#include <QtCore/QHash>
#include <QtCore/QUrl>

QT_BEGIN_NAMESPACE

class Q_WEBENGINECORE_PRIVATE_EXPORT QWebEngineUrlResponseInfoPrivate
{
public:
    QWebEngineUrlResponseInfoPrivate(const QUrl &requestUrl,
                                     const QMultiHash<QByteArray, QByteArray> &requestHeaders,
                                     const QHash<QByteArray, QByteArray> &responseHeaders)
        : requestUrl(requestUrl)
        , requestHeaders(requestHeaders)
        , responseHeaders(responseHeaders)
        , isModified(false)
    {
    }

    QUrl requestUrl;
    QMultiHash<QByteArray, QByteArray> requestHeaders;
    QHash<QByteArray, QByteArray> responseHeaders;
    bool isModified;
};

QT_END_NAMESPACE

#endif // QWEBENGINEURLRESPONSEINFO_P_H
