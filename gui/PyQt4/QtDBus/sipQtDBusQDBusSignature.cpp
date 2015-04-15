/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:28:00 2015
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

#include "sipAPIQtDBus.h"

#line 112 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusSignature.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusSignature.cpp"
#line 116 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qdbusextratypes.sip"
#include <QHash>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusSignature.cpp"


PyDoc_STRVAR(doc_QDBusSignature_signature, "QDBusSignature.signature() -> QString");

extern "C" {static PyObject *meth_QDBusSignature_signature(PyObject *, PyObject *);}
static PyObject *meth_QDBusSignature_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusSignature *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusSignature, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->signature());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusSignature, sipName_signature, doc_QDBusSignature_signature);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusSignature_setSignature, "QDBusSignature.setSignature(QString)");

extern "C" {static PyObject *meth_QDBusSignature_setSignature(PyObject *, PyObject *);}
static PyObject *meth_QDBusSignature_setSignature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QDBusSignature *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDBusSignature, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSignature(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusSignature, sipName_setSignature, doc_QDBusSignature_setSignature);

    return NULL;
}


extern "C" {static PyObject *slot_QDBusSignature___ge__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusSignature *sipCpp = reinterpret_cast<QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !operator<((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ge_slot,sipType_QDBusSignature,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusSignature *sipCpp = reinterpret_cast<QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,eq_slot,sipType_QDBusSignature,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusSignature *sipCpp = reinterpret_cast<QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ne_slot,sipType_QDBusSignature,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusSignature___lt__(PyObject *,PyObject *);}
static PyObject *slot_QDBusSignature___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusSignature *sipCpp = reinterpret_cast<QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusSignature* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDBusSignature, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator<((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,lt_slot,sipType_QDBusSignature,sipSelf,sipArg);
}


extern "C" {static long slot_QDBusSignature___hash__(PyObject *);}
static long slot_QDBusSignature___hash__(PyObject *sipSelf)
{
    QDBusSignature *sipCpp = reinterpret_cast<QDBusSignature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusSignature));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 126 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qdbusextratypes.sip"
        sipRes = qHash(*sipCpp);
#line 255 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusSignature.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusSignature(void *, const sipTypeDef *);}
static void *cast_QDBusSignature(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusSignature)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusSignature(void *, int);}
static void release_QDBusSignature(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDBusSignature *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDBusSignature(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusSignature(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusSignature *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusSignature *>(sipSrc);
}


extern "C" {static void *array_QDBusSignature(SIP_SSIZE_T);}
static void *array_QDBusSignature(SIP_SSIZE_T sipNrElem)
{
    return new QDBusSignature[sipNrElem];
}


extern "C" {static void *copy_QDBusSignature(const void *, SIP_SSIZE_T);}
static void *copy_QDBusSignature(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusSignature(reinterpret_cast<const QDBusSignature *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusSignature(sipSimpleWrapper *);}
static void dealloc_QDBusSignature(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusSignature(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusSignature(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusSignature(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusSignature *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusSignature();
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
            sipCpp = new QDBusSignature(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QDBusSignature* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusSignature, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusSignature(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusSignature[] = {
    {(void *)slot_QDBusSignature___ge__, ge_slot},
    {(void *)slot_QDBusSignature___eq__, eq_slot},
    {(void *)slot_QDBusSignature___ne__, ne_slot},
    {(void *)slot_QDBusSignature___lt__, lt_slot},
    {(void *)slot_QDBusSignature___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDBusSignature[] = {
    {SIP_MLNAME_CAST(sipName_setSignature), meth_QDBusSignature_setSignature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusSignature_setSignature)},
    {SIP_MLNAME_CAST(sipName_signature), meth_QDBusSignature_signature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusSignature_signature)}
};

PyDoc_STRVAR(doc_QDBusSignature, "\1QDBusSignature()\n"
    "QDBusSignature(QString)\n"
    "QDBusSignature(QDBusSignature)");


pyqt4ClassTypeDef sipTypeDef_QtDBus_QDBusSignature = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDBusSignature,
        {0}
    },
    {
        sipNameNr_QDBusSignature,
        {0, 0, 1},
        2, methods_QDBusSignature,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusSignature,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusSignature,
    init_type_QDBusSignature,
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
    dealloc_QDBusSignature,
    assign_QDBusSignature,
    array_QDBusSignature,
    copy_QDBusSignature,
    release_QDBusSignature,
    cast_QDBusSignature,
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
