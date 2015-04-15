/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:23 2015
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

#include "sipAPIQtCore.h"

#line 36 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQString_1.cpp"



extern "C" {static void assign_QString_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QString_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QString *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QString *>(sipSrc);
}


extern "C" {static void *array_QString_1(SIP_SSIZE_T);}
static void *array_QString_1(SIP_SSIZE_T sipNrElem)
{
    return new QString[sipNrElem];
}


extern "C" {static void *copy_QString_1(const void *, SIP_SSIZE_T);}
static void *copy_QString_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QString(reinterpret_cast<const QString *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QString_1(void *, int);}
static void release_QString_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QString *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QString_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QString_1(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QString **sipCppPtr = reinterpret_cast<QString **>(sipCppPtrV);

#line 40 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qstring.sip"
if (sipIsErr == NULL)
#if PY_MAJOR_VERSION < 3
    return (sipPy == Py_None || PyString_Check(sipPy) || PyUnicode_Check(sipPy));
#else
    return (sipPy == Py_None || PyUnicode_Check(sipPy));
#endif

if (sipPy == Py_None)
{
    // None is the only way to create a null (as opposed to empty) QString.
    *sipCppPtr = new QString();

    return sipGetState(sipTransferObj);
}

#if PY_MAJOR_VERSION < 3
if (PyString_Check(sipPy))
{
    *sipCppPtr = new QString(PyString_AS_STRING(sipPy));

    return sipGetState(sipTransferObj);
}
#endif

*sipCppPtr = new QString(qpycore_PyObject_AsQString(sipPy));

return sipGetState(sipTransferObj);
#line 103 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQString_1.cpp"
}


extern "C" {static PyObject *convertFrom_QString_1(void *, PyObject *);}
static PyObject *convertFrom_QString_1(void *sipCppV, PyObject *)
{
   QString *sipCpp = reinterpret_cast<QString *>(sipCppV);

#line 70 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(*sipCpp);
#line 114 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQString_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QString_1 = {
    {
        1,
        &sipTypeDef_QtCore_QString_0.super.ctd_base,
        0,
        SIP_TYPE_ALLOW_NONE|SIP_TYPE_MAPPED,
        sipNameNr_QString,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QString_1,
    array_QString_1,
    copy_QString_1,
    release_QString_1,
    convertTo_QString_1,
    convertFrom_QString_1
};
