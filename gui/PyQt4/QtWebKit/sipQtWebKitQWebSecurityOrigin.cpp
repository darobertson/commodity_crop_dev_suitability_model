/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:55 2015
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

#include "sipAPIQtWebKit.h"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtWebKit/qwebsecurityorigin.sip"
#include <qwebsecurityorigin.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"

#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtWebKit/qwebdatabase.sip"
#include <qwebdatabase.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtWebKit/sipQtWebKitQWebSecurityOrigin.cpp"


PyDoc_STRVAR(doc_QWebSecurityOrigin_allOrigins, "QWebSecurityOrigin.allOrigins() -> list-of-QWebSecurityOrigin");

extern "C" {static PyObject *meth_QWebSecurityOrigin_allOrigins(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_allOrigins(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QWebSecurityOrigin>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebSecurityOrigin>(QWebSecurityOrigin::allOrigins());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebSecurityOrigin,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_allOrigins, doc_QWebSecurityOrigin_allOrigins);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_scheme, "QWebSecurityOrigin.scheme() -> QString");

extern "C" {static PyObject *meth_QWebSecurityOrigin_scheme(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_scheme(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->scheme());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_scheme, doc_QWebSecurityOrigin_scheme);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_host, "QWebSecurityOrigin.host() -> QString");

extern "C" {static PyObject *meth_QWebSecurityOrigin_host(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_host(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->host());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_host, doc_QWebSecurityOrigin_host);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_port, "QWebSecurityOrigin.port() -> int");

extern "C" {static PyObject *meth_QWebSecurityOrigin_port(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->port();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_port, doc_QWebSecurityOrigin_port);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_databaseUsage, "QWebSecurityOrigin.databaseUsage() -> int");

extern "C" {static PyObject *meth_QWebSecurityOrigin_databaseUsage(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_databaseUsage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->databaseUsage();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_databaseUsage, doc_QWebSecurityOrigin_databaseUsage);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_databaseQuota, "QWebSecurityOrigin.databaseQuota() -> int");

extern "C" {static PyObject *meth_QWebSecurityOrigin_databaseQuota(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_databaseQuota(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->databaseQuota();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_databaseQuota, doc_QWebSecurityOrigin_databaseQuota);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_setDatabaseQuota, "QWebSecurityOrigin.setDatabaseQuota(int)");

extern "C" {static PyObject *meth_QWebSecurityOrigin_setDatabaseQuota(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_setDatabaseQuota(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDatabaseQuota(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_setDatabaseQuota, doc_QWebSecurityOrigin_setDatabaseQuota);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_databases, "QWebSecurityOrigin.databases() -> list-of-QWebDatabase");

extern "C" {static PyObject *meth_QWebSecurityOrigin_databases(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_databases(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp))
        {
            QList<QWebDatabase>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebDatabase>(sipCpp->databases());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebDatabase,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_databases, doc_QWebSecurityOrigin_databases);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_addLocalScheme, "QWebSecurityOrigin.addLocalScheme(QString)");

extern "C" {static PyObject *meth_QWebSecurityOrigin_addLocalScheme(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_addLocalScheme(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QWebSecurityOrigin::addLocalScheme(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_addLocalScheme, doc_QWebSecurityOrigin_addLocalScheme);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_removeLocalScheme, "QWebSecurityOrigin.removeLocalScheme(QString)");

extern "C" {static PyObject *meth_QWebSecurityOrigin_removeLocalScheme(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_removeLocalScheme(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QWebSecurityOrigin::removeLocalScheme(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_removeLocalScheme, doc_QWebSecurityOrigin_removeLocalScheme);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_localSchemes, "QWebSecurityOrigin.localSchemes() -> QStringList");

extern "C" {static PyObject *meth_QWebSecurityOrigin_localSchemes(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_localSchemes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(QWebSecurityOrigin::localSchemes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_localSchemes, doc_QWebSecurityOrigin_localSchemes);

    return NULL;
}


PyDoc_STRVAR(doc_QWebSecurityOrigin_setApplicationCacheQuota, "QWebSecurityOrigin.setApplicationCacheQuota(int)");

extern "C" {static PyObject *meth_QWebSecurityOrigin_setApplicationCacheQuota(PyObject *, PyObject *);}
static PyObject *meth_QWebSecurityOrigin_setApplicationCacheQuota(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QWebSecurityOrigin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QWebSecurityOrigin, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setApplicationCacheQuota(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebSecurityOrigin, sipName_setApplicationCacheQuota, doc_QWebSecurityOrigin_setApplicationCacheQuota);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebSecurityOrigin(void *, const sipTypeDef *);}
static void *cast_QWebSecurityOrigin(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebSecurityOrigin)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebSecurityOrigin(void *, int);}
static void release_QWebSecurityOrigin(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebSecurityOrigin *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWebSecurityOrigin(sipSimpleWrapper *);}
static void dealloc_QWebSecurityOrigin(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebSecurityOrigin(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebSecurityOrigin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebSecurityOrigin(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebSecurityOrigin *sipCpp = 0;

    {
        const QWebSecurityOrigin* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebSecurityOrigin, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebSecurityOrigin(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebSecurityOrigin[] = {
    {SIP_MLNAME_CAST(sipName_addLocalScheme), meth_QWebSecurityOrigin_addLocalScheme, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_addLocalScheme)},
    {SIP_MLNAME_CAST(sipName_allOrigins), meth_QWebSecurityOrigin_allOrigins, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_allOrigins)},
    {SIP_MLNAME_CAST(sipName_databaseQuota), meth_QWebSecurityOrigin_databaseQuota, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_databaseQuota)},
    {SIP_MLNAME_CAST(sipName_databaseUsage), meth_QWebSecurityOrigin_databaseUsage, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_databaseUsage)},
    {SIP_MLNAME_CAST(sipName_databases), meth_QWebSecurityOrigin_databases, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_databases)},
    {SIP_MLNAME_CAST(sipName_host), meth_QWebSecurityOrigin_host, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_host)},
    {SIP_MLNAME_CAST(sipName_localSchemes), meth_QWebSecurityOrigin_localSchemes, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_localSchemes)},
    {SIP_MLNAME_CAST(sipName_port), meth_QWebSecurityOrigin_port, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_port)},
    {SIP_MLNAME_CAST(sipName_removeLocalScheme), meth_QWebSecurityOrigin_removeLocalScheme, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_removeLocalScheme)},
    {SIP_MLNAME_CAST(sipName_scheme), meth_QWebSecurityOrigin_scheme, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_scheme)},
    {SIP_MLNAME_CAST(sipName_setApplicationCacheQuota), meth_QWebSecurityOrigin_setApplicationCacheQuota, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_setApplicationCacheQuota)},
    {SIP_MLNAME_CAST(sipName_setDatabaseQuota), meth_QWebSecurityOrigin_setDatabaseQuota, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebSecurityOrigin_setDatabaseQuota)}
};

PyDoc_STRVAR(doc_QWebSecurityOrigin, "\1QWebSecurityOrigin(QWebSecurityOrigin)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebSecurityOrigin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebSecurityOrigin,
        {0}
    },
    {
        sipNameNr_QWebSecurityOrigin,
        {0, 0, 1},
        12, methods_QWebSecurityOrigin,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebSecurityOrigin,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebSecurityOrigin,
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
    dealloc_QWebSecurityOrigin,
    0,
    0,
    0,
    release_QWebSecurityOrigin,
    cast_QWebSecurityOrigin,
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
