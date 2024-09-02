#ifndef QTDROPBOX_GLOBAL_H
#define QTDROPBOX_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTDROPBOX_LIBRARY)
#  define QTDROPBOXSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTDROPBOXSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTDROPBOX_GLOBAL_H
