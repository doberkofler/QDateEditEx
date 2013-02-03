/**************************************************************************
**
** Copyright (c) 2013 Qualiant Software GmbH
**
** Author: Andreas Holzammer, KDAB (andreas.holzammer@kdab.com)
**
** Contact: Qualiant Software (d.oberkofler@qualiant.at)
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** If you have questions regarding the use of this file, please contact
** Qualiant Software at d.oberkofler@qualiant.at.
**
**************************************************************************/

#ifndef WIDGETS_EXPORT_H
#define WIDGETS_EXPORT_H

#include <QtCore/qglobal.h>

#if defined(WIDGETS_DLL)
#  if defined(WIDGETS_LIBRARY)
#    define WIDGETS_EXPORT Q_DECL_EXPORT
#  else
#    define WIDGETS_EXPORT Q_DECL_IMPORT
#  endif
#else
# define WIDGETS_EXPORT
#endif

#endif // WIDGETS_EXPORT_H
