#ifndef PROBLEM_GLOBAL_H
#define PROBLEM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROBLEM_LIBRARY)
#  define PROBLEMSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PROBLEMSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PROBLEM_GLOBAL_H
