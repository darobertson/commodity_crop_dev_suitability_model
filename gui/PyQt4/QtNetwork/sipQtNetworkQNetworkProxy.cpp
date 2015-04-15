/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:33 2015
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

#include "sipAPIQtNetwork.h"

#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkProxy.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkProxy.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkProxy.cpp"


PyDoc_STRVAR(doc_QNetworkProxy_setType, "QNetworkProxy.setType(QNetworkProxy.ProxyType)");

extern "C" {static PyObject *meth_QNetworkProxy_setType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::ProxyType a0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkProxy_ProxyType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setType, doc_QNetworkProxy_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_type, "QNetworkProxy.type() -> QNetworkProxy.ProxyType");

extern "C" {static PyObject *meth_QNetworkProxy_type(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QNetworkProxy::ProxyType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkProxy_ProxyType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_type, doc_QNetworkProxy_type);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setUser, "QNetworkProxy.setUser(QString)");

extern "C" {static PyObject *meth_QNetworkProxy_setUser(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUser(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setUser, doc_QNetworkProxy_setUser);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_user, "QNetworkProxy.user() -> QString");

extern "C" {static PyObject *meth_QNetworkProxy_user(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->user());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_user, doc_QNetworkProxy_user);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setPassword, "QNetworkProxy.setPassword(QString)");

extern "C" {static PyObject *meth_QNetworkProxy_setPassword(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPassword(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setPassword, doc_QNetworkProxy_setPassword);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_password, "QNetworkProxy.password() -> QString");

extern "C" {static PyObject *meth_QNetworkProxy_password(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->password());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_password, doc_QNetworkProxy_password);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setHostName, "QNetworkProxy.setHostName(QString)");

extern "C" {static PyObject *meth_QNetworkProxy_setHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHostName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setHostName, doc_QNetworkProxy_setHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_hostName, "QNetworkProxy.hostName() -> QString");

extern "C" {static PyObject *meth_QNetworkProxy_hostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_hostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->hostName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_hostName, doc_QNetworkProxy_hostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setPort, "QNetworkProxy.setPort(int)");

extern "C" {static PyObject *meth_QNetworkProxy_setPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        quint16 a0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_QNetworkProxy, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setPort, doc_QNetworkProxy_setPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_port, "QNetworkProxy.port() -> int");

extern "C" {static PyObject *meth_QNetworkProxy_port(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            quint16 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->port();
            Py_END_ALLOW_THREADS

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_port, doc_QNetworkProxy_port);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setApplicationProxy, "QNetworkProxy.setApplicationProxy(QNetworkProxy)");

extern "C" {static PyObject *meth_QNetworkProxy_setApplicationProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setApplicationProxy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QNetworkProxy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QNetworkProxy::setApplicationProxy(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setApplicationProxy, doc_QNetworkProxy_setApplicationProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_applicationProxy, "QNetworkProxy.applicationProxy() -> QNetworkProxy");

extern "C" {static PyObject *meth_QNetworkProxy_applicationProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_applicationProxy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QNetworkProxy*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy(QNetworkProxy::applicationProxy());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_applicationProxy, doc_QNetworkProxy_applicationProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_isCachingProxy, "QNetworkProxy.isCachingProxy() -> bool");

extern "C" {static PyObject *meth_QNetworkProxy_isCachingProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_isCachingProxy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCachingProxy();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_isCachingProxy, doc_QNetworkProxy_isCachingProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_isTransparentProxy, "QNetworkProxy.isTransparentProxy() -> bool");

extern "C" {static PyObject *meth_QNetworkProxy_isTransparentProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_isTransparentProxy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isTransparentProxy();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_isTransparentProxy, doc_QNetworkProxy_isTransparentProxy);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_setCapabilities, "QNetworkProxy.setCapabilities(QNetworkProxy.Capabilities)");

extern "C" {static PyObject *meth_QNetworkProxy_setCapabilities(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_setCapabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities* a0;
        int a0State = 0;
        QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxy, &sipCpp, sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCapabilities(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_setCapabilities, doc_QNetworkProxy_setCapabilities);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxy_capabilities, "QNetworkProxy.capabilities() -> QNetworkProxy.Capabilities");

extern "C" {static PyObject *meth_QNetworkProxy_capabilities(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxy_capabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxy, &sipCpp))
        {
            QNetworkProxy::Capabilities*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy::Capabilities(sipCpp->capabilities());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxy, sipName_capabilities, doc_QNetworkProxy_capabilities);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkProxy___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy *sipCpp = reinterpret_cast<QNetworkProxy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxy, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxy::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkProxy,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxy___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy *sipCpp = reinterpret_cast<QNetworkProxy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxy, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxy::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkProxy,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkProxy(void *, const sipTypeDef *);}
static void *cast_QNetworkProxy(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkProxy)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxy(void *, int);}
static void release_QNetworkProxy(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkProxy *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkProxy(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkProxy(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkProxy *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkProxy *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxy(SIP_SSIZE_T);}
static void *array_QNetworkProxy(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkProxy[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxy(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxy(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkProxy(reinterpret_cast<const QNetworkProxy *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxy(sipSimpleWrapper *);}
static void dealloc_QNetworkProxy(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxy(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkProxy(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkProxy(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkProxy *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QNetworkProxy::ProxyType a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        quint16 a2 = 0;
        const QString& a3def = QString();
        const QString* a3 = &a3def;
        int a3State = 0;
        const QString& a4def = QString();
        const QString* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_hostName,
            sipName_port,
            sipName_user,
            sipName_password,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|J1tJ1J1", sipType_QNetworkProxy_ProxyType, &a0, sipType_QString,&a1, &a1State, &a2, sipType_QString,&a3, &a3State, sipType_QString,&a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy(a0,*a1,a2,*a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast<QString *>(a4),sipType_QString,a4State);

            return sipCpp;
        }
    }

    {
        const QNetworkProxy* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxy[] = {
    {(void *)slot_QNetworkProxy___ne__, ne_slot},
    {(void *)slot_QNetworkProxy___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkProxy[] = {
    {SIP_MLNAME_CAST(sipName_applicationProxy), meth_QNetworkProxy_applicationProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_applicationProxy)},
    {SIP_MLNAME_CAST(sipName_capabilities), meth_QNetworkProxy_capabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_capabilities)},
    {SIP_MLNAME_CAST(sipName_hostName), meth_QNetworkProxy_hostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_hostName)},
    {SIP_MLNAME_CAST(sipName_isCachingProxy), meth_QNetworkProxy_isCachingProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_isCachingProxy)},
    {SIP_MLNAME_CAST(sipName_isTransparentProxy), meth_QNetworkProxy_isTransparentProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_isTransparentProxy)},
    {SIP_MLNAME_CAST(sipName_password), meth_QNetworkProxy_password, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_password)},
    {SIP_MLNAME_CAST(sipName_port), meth_QNetworkProxy_port, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_port)},
    {SIP_MLNAME_CAST(sipName_setApplicationProxy), meth_QNetworkProxy_setApplicationProxy, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setApplicationProxy)},
    {SIP_MLNAME_CAST(sipName_setCapabilities), meth_QNetworkProxy_setCapabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setCapabilities)},
    {SIP_MLNAME_CAST(sipName_setHostName), meth_QNetworkProxy_setHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setHostName)},
    {SIP_MLNAME_CAST(sipName_setPassword), meth_QNetworkProxy_setPassword, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setPassword)},
    {SIP_MLNAME_CAST(sipName_setPort), meth_QNetworkProxy_setPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setPort)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QNetworkProxy_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setType)},
    {SIP_MLNAME_CAST(sipName_setUser), meth_QNetworkProxy_setUser, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_setUser)},
    {SIP_MLNAME_CAST(sipName_type), meth_QNetworkProxy_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_type)},
    {SIP_MLNAME_CAST(sipName_user), meth_QNetworkProxy_user, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxy_user)}
};

static sipEnumMemberDef enummembers_QNetworkProxy[] = {
    {sipName_CachingCapability, static_cast<int>(QNetworkProxy::CachingCapability), 66},
    {sipName_DefaultProxy, static_cast<int>(QNetworkProxy::DefaultProxy), 67},
    {sipName_FtpCachingProxy, static_cast<int>(QNetworkProxy::FtpCachingProxy), 67},
    {sipName_HostNameLookupCapability, static_cast<int>(QNetworkProxy::HostNameLookupCapability), 66},
    {sipName_HttpCachingProxy, static_cast<int>(QNetworkProxy::HttpCachingProxy), 67},
    {sipName_HttpProxy, static_cast<int>(QNetworkProxy::HttpProxy), 67},
    {sipName_ListeningCapability, static_cast<int>(QNetworkProxy::ListeningCapability), 66},
    {sipName_NoProxy, static_cast<int>(QNetworkProxy::NoProxy), 67},
    {sipName_Socks5Proxy, static_cast<int>(QNetworkProxy::Socks5Proxy), 67},
    {sipName_TunnelingCapability, static_cast<int>(QNetworkProxy::TunnelingCapability), 66},
    {sipName_UdpTunnelingCapability, static_cast<int>(QNetworkProxy::UdpTunnelingCapability), 66},
};

PyDoc_STRVAR(doc_QNetworkProxy, "\1QNetworkProxy()\n"
    "QNetworkProxy(QNetworkProxy.ProxyType, QString hostName=QString(), int port=0, QString user=QString(), QString password=QString())\n"
    "QNetworkProxy(QNetworkProxy)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxy = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxy,
        {0}
    },
    {
        sipNameNr_QNetworkProxy,
        {0, 0, 1},
        16, methods_QNetworkProxy,
        11, enummembers_QNetworkProxy,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxy,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxy,
    init_type_QNetworkProxy,
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
    dealloc_QNetworkProxy,
    assign_QNetworkProxy,
    array_QNetworkProxy,
    copy_QNetworkProxy,
    release_QNetworkProxy,
    cast_QNetworkProxy,
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
