/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:27 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * If you are unsure which license is appropriate for your use, please
 * contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"

#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 89 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 35 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 35 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"


PyDoc_STRVAR(doc_QIcon_pixmap, "QIcon.pixmap(QSize, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> QPixmap\n"
    "QIcon.pixmap(int, int, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> QPixmap\n"
    "QIcon.pixmap(int, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> QPixmap");

extern "C" {static PyObject *meth_QIcon_pixmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_pixmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QIcon::Mode a1 = QIcon::Normal;
        QIcon::State a2 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap(*a0,a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    {
        int a0;
        int a1;
        QIcon::Mode a2 = QIcon::Normal;
        QIcon::State a3 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bii|EE", &sipSelf, sipType_QIcon, &sipCpp, &a0, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap(a0,a1,a2,a3));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    {
        int a0;
        QIcon::Mode a1 = QIcon::Normal;
        QIcon::State a2 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|EE", &sipSelf, sipType_QIcon, &sipCpp, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap(a0,a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_pixmap, doc_QIcon_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_actualSize, "QIcon.actualSize(QSize, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> QSize");

extern "C" {static PyObject *meth_QIcon_actualSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_actualSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QIcon::Mode a1 = QIcon::Normal;
        QIcon::State a2 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->actualSize(*a0,a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_actualSize, doc_QIcon_actualSize);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_availableSizes, "QIcon.availableSizes(QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> list-of-QSize");

extern "C" {static PyObject *meth_QIcon_availableSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_availableSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QIcon::Mode a0 = QIcon::Normal;
        QIcon::State a1 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QIcon_Mode, &a0, sipType_QIcon_State, &a1))
        {
            QList<QSize>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSize>(sipCpp->availableSizes(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_availableSizes, doc_QIcon_availableSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_paint, "QIcon.paint(QPainter, QRect, Qt.Alignment alignment=Qt.AlignCenter, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off)\n"
    "QIcon.paint(QPainter, int, int, int, int, Qt.Alignment alignment=Qt.AlignCenter, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off)");

extern "C" {static PyObject *meth_QIcon_paint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_paint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter* a0;
        const QRect* a1;
        Qt::Alignment a2def = Qt::AlignCenter;
        Qt::Alignment* a2 = &a2def;
        int a2State = 0;
        QIcon::Mode a3 = QIcon::Normal;
        QIcon::State a4 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_alignment,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8J9|J1EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QPainter, &a0, sipType_QRect, &a1, sipType_Qt_Alignment, &a2, &a2State, sipType_QIcon_Mode, &a3, sipType_QIcon_State, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->paint(a0,*a1,*a2,a3,a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_Qt_Alignment,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QPainter* a0;
        int a1;
        int a2;
        int a3;
        int a4;
        Qt::Alignment a5def = Qt::AlignCenter;
        Qt::Alignment* a5 = &a5def;
        int a5State = 0;
        QIcon::Mode a6 = QIcon::Normal;
        QIcon::State a7 = QIcon::Off;
        const QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_alignment,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8iiii|J1EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QPainter, &a0, &a1, &a2, &a3, &a4, sipType_Qt_Alignment, &a5, &a5State, sipType_QIcon_Mode, &a6, sipType_QIcon_State, &a7))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->paint(a0,a1,a2,a3,a4,*a5,a6,a7);
            Py_END_ALLOW_THREADS
            sipReleaseType(a5,sipType_Qt_Alignment,a5State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_paint, doc_QIcon_paint);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_isNull, "QIcon.isNull() -> bool");

extern "C" {static PyObject *meth_QIcon_isNull(PyObject *, PyObject *);}
static PyObject *meth_QIcon_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIcon, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_isNull, doc_QIcon_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_isDetached, "QIcon.isDetached() -> bool");

extern "C" {static PyObject *meth_QIcon_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QIcon_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIcon, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDetached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_isDetached, doc_QIcon_isDetached);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_serialNumber, "QIcon.serialNumber() -> int");

extern "C" {static PyObject *meth_QIcon_serialNumber(PyObject *, PyObject *);}
static PyObject *meth_QIcon_serialNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIcon, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->serialNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_serialNumber, doc_QIcon_serialNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_addPixmap, "QIcon.addPixmap(QPixmap, QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off)");

extern "C" {static PyObject *meth_QIcon_addPixmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_addPixmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QIcon::Mode a1 = QIcon::Normal;
        QIcon::State a2 = QIcon::Off;
        QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QPixmap, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addPixmap(*a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_addPixmap, doc_QIcon_addPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_addFile, "QIcon.addFile(QString, QSize size=QSize(), QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off)");

extern "C" {static PyObject *meth_QIcon_addFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_addFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QSize& a1def = QSize();
        const QSize* a1 = &a1def;
        QIcon::Mode a2 = QIcon::Normal;
        QIcon::State a3 = QIcon::Off;
        QIcon *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_size,
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J9EE", &sipSelf, sipType_QIcon, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addFile(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_addFile, doc_QIcon_addFile);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_cacheKey, "QIcon.cacheKey() -> int");

extern "C" {static PyObject *meth_QIcon_cacheKey(PyObject *, PyObject *);}
static PyObject *meth_QIcon_cacheKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIcon, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->cacheKey();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_cacheKey, doc_QIcon_cacheKey);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_fromTheme, "QIcon.fromTheme(QString, QIcon fallback=QIcon()) -> QIcon");

extern "C" {static PyObject *meth_QIcon_fromTheme(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIcon_fromTheme(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QIcon& a1def = QIcon();
        const QIcon* a1 = &a1def;

        static const char *sipKwdList[] = {
            NULL,
            sipName_fallback,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|J9", sipType_QString,&a0, &a0State, sipType_QIcon, &a1))
        {
            QIcon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QIcon(QIcon::fromTheme(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_fromTheme, doc_QIcon_fromTheme);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_hasThemeIcon, "QIcon.hasThemeIcon(QString) -> bool");

extern "C" {static PyObject *meth_QIcon_hasThemeIcon(PyObject *, PyObject *);}
static PyObject *meth_QIcon_hasThemeIcon(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QIcon::hasThemeIcon(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_hasThemeIcon, doc_QIcon_hasThemeIcon);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_themeSearchPaths, "QIcon.themeSearchPaths() -> QStringList");

extern "C" {static PyObject *meth_QIcon_themeSearchPaths(PyObject *, PyObject *);}
static PyObject *meth_QIcon_themeSearchPaths(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QIcon::themeSearchPaths());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_themeSearchPaths, doc_QIcon_themeSearchPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_setThemeSearchPaths, "QIcon.setThemeSearchPaths(QStringList)");

extern "C" {static PyObject *meth_QIcon_setThemeSearchPaths(PyObject *, PyObject *);}
static PyObject *meth_QIcon_setThemeSearchPaths(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QIcon::setThemeSearchPaths(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_setThemeSearchPaths, doc_QIcon_setThemeSearchPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_themeName, "QIcon.themeName() -> QString");

extern "C" {static PyObject *meth_QIcon_themeName(PyObject *, PyObject *);}
static PyObject *meth_QIcon_themeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QIcon::themeName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_themeName, doc_QIcon_themeName);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_setThemeName, "QIcon.setThemeName(QString)");

extern "C" {static PyObject *meth_QIcon_setThemeName(PyObject *, PyObject *);}
static PyObject *meth_QIcon_setThemeName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QIcon::setThemeName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_setThemeName, doc_QIcon_setThemeName);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_name, "QIcon.name() -> QString");

extern "C" {static PyObject *meth_QIcon_name(PyObject *, PyObject *);}
static PyObject *meth_QIcon_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIcon, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_name, doc_QIcon_name);

    return NULL;
}


PyDoc_STRVAR(doc_QIcon_swap, "QIcon.swap(QIcon)");

extern "C" {static PyObject *meth_QIcon_swap(PyObject *, PyObject *);}
static PyObject *meth_QIcon_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIcon* a0;
        QIcon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIcon, &sipCpp, sipType_QIcon, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIcon, sipName_swap, doc_QIcon_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIcon(void *, const sipTypeDef *);}
static void *cast_QIcon(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QIcon)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIcon(void *, int);}
static void release_QIcon(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QIcon *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QIcon(void *, SIP_SSIZE_T, const void *);}
static void assign_QIcon(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QIcon *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QIcon *>(sipSrc);
}


extern "C" {static void *array_QIcon(SIP_SSIZE_T);}
static void *array_QIcon(SIP_SSIZE_T sipNrElem)
{
    return new QIcon[sipNrElem];
}


extern "C" {static void *copy_QIcon(const void *, SIP_SSIZE_T);}
static void *copy_QIcon(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QIcon(reinterpret_cast<const QIcon *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIcon(sipSimpleWrapper *);}
static void dealloc_QIcon(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QIcon(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QIcon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIcon(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QIcon *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPixmap* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QIcon* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIcon, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        QIconEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J:", sipType_QIconEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QIconEngineV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J:", sipType_QIconEngineV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QIcon(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant,&a0, &a0State))
        {
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qicon.sip"
        #if QT_VERSION >= 0x050000
        sipCpp = new QIcon(a0->value<QIcon>());
        #else
        sipCpp = new QIcon(qVariantValue<QIcon>(*a0));
        #endif
#line 901 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQIcon.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QIcon[] = {
    {SIP_MLNAME_CAST(sipName_actualSize), (PyCFunction)meth_QIcon_actualSize, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_actualSize)},
    {SIP_MLNAME_CAST(sipName_addFile), (PyCFunction)meth_QIcon_addFile, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_addFile)},
    {SIP_MLNAME_CAST(sipName_addPixmap), (PyCFunction)meth_QIcon_addPixmap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_addPixmap)},
    {SIP_MLNAME_CAST(sipName_availableSizes), (PyCFunction)meth_QIcon_availableSizes, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_availableSizes)},
    {SIP_MLNAME_CAST(sipName_cacheKey), meth_QIcon_cacheKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_cacheKey)},
    {SIP_MLNAME_CAST(sipName_fromTheme), (PyCFunction)meth_QIcon_fromTheme, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_fromTheme)},
    {SIP_MLNAME_CAST(sipName_hasThemeIcon), meth_QIcon_hasThemeIcon, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_hasThemeIcon)},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QIcon_isDetached, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_isDetached)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QIcon_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_isNull)},
    {SIP_MLNAME_CAST(sipName_name), meth_QIcon_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_name)},
    {SIP_MLNAME_CAST(sipName_paint), (PyCFunction)meth_QIcon_paint, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_paint)},
    {SIP_MLNAME_CAST(sipName_pixmap), (PyCFunction)meth_QIcon_pixmap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIcon_pixmap)},
    {SIP_MLNAME_CAST(sipName_serialNumber), meth_QIcon_serialNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_serialNumber)},
    {SIP_MLNAME_CAST(sipName_setThemeName), meth_QIcon_setThemeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_setThemeName)},
    {SIP_MLNAME_CAST(sipName_setThemeSearchPaths), meth_QIcon_setThemeSearchPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_setThemeSearchPaths)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QIcon_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_swap)},
    {SIP_MLNAME_CAST(sipName_themeName), meth_QIcon_themeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_themeName)},
    {SIP_MLNAME_CAST(sipName_themeSearchPaths), meth_QIcon_themeSearchPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QIcon_themeSearchPaths)}
};

static sipEnumMemberDef enummembers_QIcon[] = {
    {sipName_Active, static_cast<int>(QIcon::Active), 227},
    {sipName_Disabled, static_cast<int>(QIcon::Disabled), 227},
    {sipName_Normal, static_cast<int>(QIcon::Normal), 227},
    {sipName_Off, static_cast<int>(QIcon::Off), 228},
    {sipName_On, static_cast<int>(QIcon::On), 228},
    {sipName_Selected, static_cast<int>(QIcon::Selected), 227},
};

PyDoc_STRVAR(doc_QIcon, "\1QIcon()\n"
    "QIcon(QPixmap)\n"
    "QIcon(QIcon)\n"
    "QIcon(QString)\n"
    "QIcon(QIconEngine)\n"
    "QIcon(QIconEngineV2)\n"
    "QIcon(QVariant)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QIcon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QIcon,
        {0}
    },
    {
        sipNameNr_QIcon,
        {0, 0, 1},
        18, methods_QIcon,
        6, enummembers_QIcon,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIcon,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QIcon,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QIcon,
    assign_QIcon,
    array_QIcon,
    copy_QIcon,
    release_QIcon,
    cast_QIcon,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
