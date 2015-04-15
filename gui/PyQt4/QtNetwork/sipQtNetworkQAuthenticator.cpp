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

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtNetwork/qauthenticator.sip"
#include <qauthenticator.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 33 "sip/QtCore/qhash.sip"
#include <qhash.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 77 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"
#line 35 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQAuthenticator.cpp"


PyDoc_STRVAR(doc_QAuthenticator_user, "QAuthenticator.user() -> QString");

extern "C" {static PyObject *meth_QAuthenticator_user(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->user());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_user, doc_QAuthenticator_user);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_setUser, "QAuthenticator.setUser(QString)");

extern "C" {static PyObject *meth_QAuthenticator_setUser(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
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
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setUser, doc_QAuthenticator_setUser);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_password, "QAuthenticator.password() -> QString");

extern "C" {static PyObject *meth_QAuthenticator_password(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->password());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_password, doc_QAuthenticator_password);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_setPassword, "QAuthenticator.setPassword(QString)");

extern "C" {static PyObject *meth_QAuthenticator_setPassword(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
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
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setPassword, doc_QAuthenticator_setPassword);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_realm, "QAuthenticator.realm() -> QString");

extern "C" {static PyObject *meth_QAuthenticator_realm(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_realm(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->realm());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_realm, doc_QAuthenticator_realm);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_isNull, "QAuthenticator.isNull() -> bool");

extern "C" {static PyObject *meth_QAuthenticator_isNull(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_isNull, doc_QAuthenticator_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_option, "QAuthenticator.option(QString) -> QVariant");

extern "C" {static PyObject *meth_QAuthenticator_option(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_option(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->option(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_option, doc_QAuthenticator_option);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_options, "QAuthenticator.options() -> dict-of-QString-QVariant");

extern "C" {static PyObject *meth_QAuthenticator_options(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_options(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAuthenticator, &sipCpp))
        {
            QVariantHash*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariantHash(sipCpp->options());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QHash_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_options, doc_QAuthenticator_options);

    return NULL;
}


PyDoc_STRVAR(doc_QAuthenticator_setOption, "QAuthenticator.setOption(QString, QVariant)");

extern "C" {static PyObject *meth_QAuthenticator_setOption(PyObject *, PyObject *);}
static PyObject *meth_QAuthenticator_setOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QAuthenticator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QAuthenticator, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOption(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAuthenticator, sipName_setOption, doc_QAuthenticator_setOption);

    return NULL;
}


extern "C" {static PyObject *slot_QAuthenticator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAuthenticator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAuthenticator *sipCpp = reinterpret_cast<QAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAuthenticator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAuthenticator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QAuthenticator::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QAuthenticator,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAuthenticator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAuthenticator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAuthenticator *sipCpp = reinterpret_cast<QAuthenticator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAuthenticator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAuthenticator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAuthenticator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QAuthenticator::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QAuthenticator,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAuthenticator(void *, const sipTypeDef *);}
static void *cast_QAuthenticator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAuthenticator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAuthenticator(void *, int);}
static void release_QAuthenticator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAuthenticator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAuthenticator(void *, SIP_SSIZE_T, const void *);}
static void assign_QAuthenticator(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAuthenticator *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAuthenticator *>(sipSrc);
}


extern "C" {static void *array_QAuthenticator(SIP_SSIZE_T);}
static void *array_QAuthenticator(SIP_SSIZE_T sipNrElem)
{
    return new QAuthenticator[sipNrElem];
}


extern "C" {static void *copy_QAuthenticator(const void *, SIP_SSIZE_T);}
static void *copy_QAuthenticator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAuthenticator(reinterpret_cast<const QAuthenticator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAuthenticator(sipSimpleWrapper *);}
static void dealloc_QAuthenticator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAuthenticator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAuthenticator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAuthenticator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAuthenticator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAuthenticator();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QAuthenticator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAuthenticator, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAuthenticator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAuthenticator[] = {
    {(void *)slot_QAuthenticator___ne__, ne_slot},
    {(void *)slot_QAuthenticator___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QAuthenticator[] = {
    {SIP_MLNAME_CAST(sipName_isNull), meth_QAuthenticator_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_isNull)},
    {SIP_MLNAME_CAST(sipName_option), meth_QAuthenticator_option, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_option)},
    {SIP_MLNAME_CAST(sipName_options), meth_QAuthenticator_options, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_options)},
    {SIP_MLNAME_CAST(sipName_password), meth_QAuthenticator_password, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_password)},
    {SIP_MLNAME_CAST(sipName_realm), meth_QAuthenticator_realm, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_realm)},
    {SIP_MLNAME_CAST(sipName_setOption), meth_QAuthenticator_setOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_setOption)},
    {SIP_MLNAME_CAST(sipName_setPassword), meth_QAuthenticator_setPassword, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_setPassword)},
    {SIP_MLNAME_CAST(sipName_setUser), meth_QAuthenticator_setUser, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_setUser)},
    {SIP_MLNAME_CAST(sipName_user), meth_QAuthenticator_user, METH_VARARGS, SIP_MLDOC_CAST(doc_QAuthenticator_user)}
};

PyDoc_STRVAR(doc_QAuthenticator, "\1QAuthenticator()\n"
    "QAuthenticator(QAuthenticator)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QAuthenticator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAuthenticator,
        {0}
    },
    {
        sipNameNr_QAuthenticator,
        {0, 0, 1},
        9, methods_QAuthenticator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAuthenticator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAuthenticator,
    init_type_QAuthenticator,
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
    dealloc_QAuthenticator,
    assign_QAuthenticator,
    array_QAuthenticator,
    copy_QAuthenticator,
    release_QAuthenticator,
    cast_QAuthenticator,
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
