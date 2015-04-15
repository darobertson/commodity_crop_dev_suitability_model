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

#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"

#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qfontinfo.sip"
#include <qfontinfo.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 628 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"
#line 128 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qfontdatabase.sip"
#include <qfontdatabase.h>
#include <qlist.h>
#line 57 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQFontDatabase.cpp"


PyDoc_STRVAR(doc_QFontDatabase_standardSizes, "QFontDatabase.standardSizes() -> list-of-int");

extern "C" {static PyObject *meth_QFontDatabase_standardSizes(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_standardSizes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<int>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(QFontDatabase::standardSizes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_standardSizes, doc_QFontDatabase_standardSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_writingSystems, "QFontDatabase.writingSystems() -> list-of-QFontDatabase.WritingSystem\n"
    "QFontDatabase.writingSystems(QString) -> list-of-QFontDatabase.WritingSystem");

extern "C" {static PyObject *meth_QFontDatabase_writingSystems(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontDatabase, &sipCpp))
        {
            QList<QFontDatabase::WritingSystem>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QFontDatabase::WritingSystem>(sipCpp->writingSystems());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QFontDatabase_WritingSystem,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QList<QFontDatabase::WritingSystem>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QFontDatabase::WritingSystem>(sipCpp->writingSystems(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QFontDatabase_WritingSystem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystems, doc_QFontDatabase_writingSystems);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_families, "QFontDatabase.families(QFontDatabase.WritingSystem writingSystem=QFontDatabase.Any) -> QStringList");

extern "C" {static PyObject *meth_QFontDatabase_families(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_families(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0 = QFontDatabase::Any;
        const QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            sipName_writingSystem,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFontDatabase_WritingSystem, &a0))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->families(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_families, doc_QFontDatabase_families);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_styles, "QFontDatabase.styles(QString) -> QStringList");

extern "C" {static PyObject *meth_QFontDatabase_styles(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_styles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->styles(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_styles, doc_QFontDatabase_styles);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_pointSizes, "QFontDatabase.pointSizes(QString, QString style=QString()) -> list-of-int");

extern "C" {static PyObject *meth_QFontDatabase_pointSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_pointSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QList<int>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(sipCpp->pointSizes(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_pointSizes, doc_QFontDatabase_pointSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_smoothSizes, "QFontDatabase.smoothSizes(QString, QString) -> list-of-int");

extern "C" {static PyObject *meth_QFontDatabase_smoothSizes(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_smoothSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QList<int>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(sipCpp->smoothSizes(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_smoothSizes, doc_QFontDatabase_smoothSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_styleString, "QFontDatabase.styleString(QFont) -> QString\n"
    "QFontDatabase.styleString(QFontInfo) -> QString");

extern "C" {static PyObject *meth_QFontDatabase_styleString(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_styleString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFont* a0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFont, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->styleString(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QFontInfo* a0;
        QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QFontInfo, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->styleString(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_styleString, doc_QFontDatabase_styleString);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_font, "QFontDatabase.font(QString, QString, int) -> QFont");

extern "C" {static PyObject *meth_QFontDatabase_font(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        int a2;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1i", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            QFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(sipCpp->font(*a0,*a1,a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_font, doc_QFontDatabase_font);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_isBitmapScalable, "QFontDatabase.isBitmapScalable(QString, QString style=QString()) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_isBitmapScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isBitmapScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isBitmapScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isBitmapScalable, doc_QFontDatabase_isBitmapScalable);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_isSmoothlyScalable, "QFontDatabase.isSmoothlyScalable(QString, QString style=QString()) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_isSmoothlyScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isSmoothlyScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSmoothlyScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isSmoothlyScalable, doc_QFontDatabase_isSmoothlyScalable);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_isScalable, "QFontDatabase.isScalable(QString, QString style=QString()) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_isScalable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isScalable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isScalable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isScalable, doc_QFontDatabase_isScalable);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_isFixedPitch, "QFontDatabase.isFixedPitch(QString, QString style=QString()) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_isFixedPitch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_isFixedPitch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFixedPitch(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_isFixedPitch, doc_QFontDatabase_isFixedPitch);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_italic, "QFontDatabase.italic(QString, QString) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_italic(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_italic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->italic(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_italic, doc_QFontDatabase_italic);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_bold, "QFontDatabase.bold(QString, QString) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_bold(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_bold(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bold(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_bold, doc_QFontDatabase_bold);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_weight, "QFontDatabase.weight(QString, QString) -> int");

extern "C" {static PyObject *meth_QFontDatabase_weight(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QFontDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QFontDatabase, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->weight(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_weight, doc_QFontDatabase_weight);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_writingSystemName, "QFontDatabase.writingSystemName(QFontDatabase.WritingSystem) -> QString");

extern "C" {static PyObject *meth_QFontDatabase_writingSystemName(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystemName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QFontDatabase_WritingSystem, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QFontDatabase::writingSystemName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystemName, doc_QFontDatabase_writingSystemName);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_writingSystemSample, "QFontDatabase.writingSystemSample(QFontDatabase.WritingSystem) -> QString");

extern "C" {static PyObject *meth_QFontDatabase_writingSystemSample(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_writingSystemSample(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontDatabase::WritingSystem a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QFontDatabase_WritingSystem, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QFontDatabase::writingSystemSample(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_writingSystemSample, doc_QFontDatabase_writingSystemSample);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_addApplicationFont, "QFontDatabase.addApplicationFont(QString) -> int");

extern "C" {static PyObject *meth_QFontDatabase_addApplicationFont(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_addApplicationFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::addApplicationFont(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_addApplicationFont, doc_QFontDatabase_addApplicationFont);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_addApplicationFontFromData, "QFontDatabase.addApplicationFontFromData(QByteArray) -> int");

extern "C" {static PyObject *meth_QFontDatabase_addApplicationFontFromData(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_addApplicationFontFromData(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::addApplicationFontFromData(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_addApplicationFontFromData, doc_QFontDatabase_addApplicationFontFromData);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_applicationFontFamilies, "QFontDatabase.applicationFontFamilies(int) -> QStringList");

extern "C" {static PyObject *meth_QFontDatabase_applicationFontFamilies(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_applicationFontFamilies(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QFontDatabase::applicationFontFamilies(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_applicationFontFamilies, doc_QFontDatabase_applicationFontFamilies);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_removeApplicationFont, "QFontDatabase.removeApplicationFont(int) -> bool");

extern "C" {static PyObject *meth_QFontDatabase_removeApplicationFont(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_removeApplicationFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::removeApplicationFont(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_removeApplicationFont, doc_QFontDatabase_removeApplicationFont);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_removeAllApplicationFonts, "QFontDatabase.removeAllApplicationFonts() -> bool");

extern "C" {static PyObject *meth_QFontDatabase_removeAllApplicationFonts(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_removeAllApplicationFonts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::removeAllApplicationFonts();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_removeAllApplicationFonts, doc_QFontDatabase_removeAllApplicationFonts);

    return NULL;
}


PyDoc_STRVAR(doc_QFontDatabase_supportsThreadedFontRendering, "QFontDatabase.supportsThreadedFontRendering() -> bool");

extern "C" {static PyObject *meth_QFontDatabase_supportsThreadedFontRendering(PyObject *, PyObject *);}
static PyObject *meth_QFontDatabase_supportsThreadedFontRendering(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QFontDatabase::supportsThreadedFontRendering();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontDatabase, sipName_supportsThreadedFontRendering, doc_QFontDatabase_supportsThreadedFontRendering);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFontDatabase(void *, const sipTypeDef *);}
static void *cast_QFontDatabase(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFontDatabase)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontDatabase(void *, int);}
static void release_QFontDatabase(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontDatabase *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QFontDatabase(void *, SIP_SSIZE_T, const void *);}
static void assign_QFontDatabase(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFontDatabase *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFontDatabase *>(sipSrc);
}


extern "C" {static void *array_QFontDatabase(SIP_SSIZE_T);}
static void *array_QFontDatabase(SIP_SSIZE_T sipNrElem)
{
    return new QFontDatabase[sipNrElem];
}


extern "C" {static void *copy_QFontDatabase(const void *, SIP_SSIZE_T);}
static void *copy_QFontDatabase(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFontDatabase(reinterpret_cast<const QFontDatabase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFontDatabase(sipSimpleWrapper *);}
static void dealloc_QFontDatabase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontDatabase(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFontDatabase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontDatabase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontDatabase *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontDatabase();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontDatabase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontDatabase, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontDatabase(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFontDatabase[] = {
    {SIP_MLNAME_CAST(sipName_addApplicationFont), meth_QFontDatabase_addApplicationFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_addApplicationFont)},
    {SIP_MLNAME_CAST(sipName_addApplicationFontFromData), meth_QFontDatabase_addApplicationFontFromData, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_addApplicationFontFromData)},
    {SIP_MLNAME_CAST(sipName_applicationFontFamilies), meth_QFontDatabase_applicationFontFamilies, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_applicationFontFamilies)},
    {SIP_MLNAME_CAST(sipName_bold), meth_QFontDatabase_bold, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_bold)},
    {SIP_MLNAME_CAST(sipName_families), (PyCFunction)meth_QFontDatabase_families, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_families)},
    {SIP_MLNAME_CAST(sipName_font), meth_QFontDatabase_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_font)},
    {SIP_MLNAME_CAST(sipName_isBitmapScalable), (PyCFunction)meth_QFontDatabase_isBitmapScalable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_isBitmapScalable)},
    {SIP_MLNAME_CAST(sipName_isFixedPitch), (PyCFunction)meth_QFontDatabase_isFixedPitch, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_isFixedPitch)},
    {SIP_MLNAME_CAST(sipName_isScalable), (PyCFunction)meth_QFontDatabase_isScalable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_isScalable)},
    {SIP_MLNAME_CAST(sipName_isSmoothlyScalable), (PyCFunction)meth_QFontDatabase_isSmoothlyScalable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_isSmoothlyScalable)},
    {SIP_MLNAME_CAST(sipName_italic), meth_QFontDatabase_italic, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_italic)},
    {SIP_MLNAME_CAST(sipName_pointSizes), (PyCFunction)meth_QFontDatabase_pointSizes, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontDatabase_pointSizes)},
    {SIP_MLNAME_CAST(sipName_removeAllApplicationFonts), meth_QFontDatabase_removeAllApplicationFonts, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_removeAllApplicationFonts)},
    {SIP_MLNAME_CAST(sipName_removeApplicationFont), meth_QFontDatabase_removeApplicationFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_removeApplicationFont)},
    {SIP_MLNAME_CAST(sipName_smoothSizes), meth_QFontDatabase_smoothSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_smoothSizes)},
    {SIP_MLNAME_CAST(sipName_standardSizes), meth_QFontDatabase_standardSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_standardSizes)},
    {SIP_MLNAME_CAST(sipName_styleString), meth_QFontDatabase_styleString, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_styleString)},
    {SIP_MLNAME_CAST(sipName_styles), meth_QFontDatabase_styles, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_styles)},
    {SIP_MLNAME_CAST(sipName_supportsThreadedFontRendering), meth_QFontDatabase_supportsThreadedFontRendering, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_supportsThreadedFontRendering)},
    {SIP_MLNAME_CAST(sipName_weight), meth_QFontDatabase_weight, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_weight)},
    {SIP_MLNAME_CAST(sipName_writingSystemName), meth_QFontDatabase_writingSystemName, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_writingSystemName)},
    {SIP_MLNAME_CAST(sipName_writingSystemSample), meth_QFontDatabase_writingSystemSample, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_writingSystemSample)},
    {SIP_MLNAME_CAST(sipName_writingSystems), meth_QFontDatabase_writingSystems, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontDatabase_writingSystems)}
};

static sipEnumMemberDef enummembers_QFontDatabase[] = {
    {sipName_Any, static_cast<int>(QFontDatabase::Any), 131},
    {sipName_Arabic, static_cast<int>(QFontDatabase::Arabic), 131},
    {sipName_Armenian, static_cast<int>(QFontDatabase::Armenian), 131},
    {sipName_Bengali, static_cast<int>(QFontDatabase::Bengali), 131},
    {sipName_Cyrillic, static_cast<int>(QFontDatabase::Cyrillic), 131},
    {sipName_Devanagari, static_cast<int>(QFontDatabase::Devanagari), 131},
    {sipName_Georgian, static_cast<int>(QFontDatabase::Georgian), 131},
    {sipName_Greek, static_cast<int>(QFontDatabase::Greek), 131},
    {sipName_Gujarati, static_cast<int>(QFontDatabase::Gujarati), 131},
    {sipName_Gurmukhi, static_cast<int>(QFontDatabase::Gurmukhi), 131},
    {sipName_Hebrew, static_cast<int>(QFontDatabase::Hebrew), 131},
    {sipName_Japanese, static_cast<int>(QFontDatabase::Japanese), 131},
    {sipName_Kannada, static_cast<int>(QFontDatabase::Kannada), 131},
    {sipName_Khmer, static_cast<int>(QFontDatabase::Khmer), 131},
    {sipName_Korean, static_cast<int>(QFontDatabase::Korean), 131},
    {sipName_Lao, static_cast<int>(QFontDatabase::Lao), 131},
    {sipName_Latin, static_cast<int>(QFontDatabase::Latin), 131},
    {sipName_Malayalam, static_cast<int>(QFontDatabase::Malayalam), 131},
    {sipName_Myanmar, static_cast<int>(QFontDatabase::Myanmar), 131},
    {sipName_Nko, static_cast<int>(QFontDatabase::Nko), 131},
    {sipName_Ogham, static_cast<int>(QFontDatabase::Ogham), 131},
    {sipName_Oriya, static_cast<int>(QFontDatabase::Oriya), 131},
    {sipName_Other, static_cast<int>(QFontDatabase::Other), 131},
    {sipName_Runic, static_cast<int>(QFontDatabase::Runic), 131},
    {sipName_SimplifiedChinese, static_cast<int>(QFontDatabase::SimplifiedChinese), 131},
    {sipName_Sinhala, static_cast<int>(QFontDatabase::Sinhala), 131},
    {sipName_Symbol, static_cast<int>(QFontDatabase::Symbol), 131},
    {sipName_Syriac, static_cast<int>(QFontDatabase::Syriac), 131},
    {sipName_Tamil, static_cast<int>(QFontDatabase::Tamil), 131},
    {sipName_Telugu, static_cast<int>(QFontDatabase::Telugu), 131},
    {sipName_Thaana, static_cast<int>(QFontDatabase::Thaana), 131},
    {sipName_Thai, static_cast<int>(QFontDatabase::Thai), 131},
    {sipName_Tibetan, static_cast<int>(QFontDatabase::Tibetan), 131},
    {sipName_TraditionalChinese, static_cast<int>(QFontDatabase::TraditionalChinese), 131},
    {sipName_Vietnamese, static_cast<int>(QFontDatabase::Vietnamese), 131},
};

PyDoc_STRVAR(doc_QFontDatabase, "\1QFontDatabase()\n"
    "QFontDatabase(QFontDatabase)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontDatabase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontDatabase,
        {0}
    },
    {
        sipNameNr_QFontDatabase,
        {0, 0, 1},
        23, methods_QFontDatabase,
        35, enummembers_QFontDatabase,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontDatabase,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QFontDatabase,
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
    dealloc_QFontDatabase,
    assign_QFontDatabase,
    array_QFontDatabase,
    copy_QFontDatabase,
    release_QFontDatabase,
    cast_QFontDatabase,
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
