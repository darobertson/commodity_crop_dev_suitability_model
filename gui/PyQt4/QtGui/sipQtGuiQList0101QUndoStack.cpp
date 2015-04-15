/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:26 2015
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

#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QUndoStack.cpp"

#line 66 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qundostack.sip"
#include <qundostack.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QUndoStack.cpp"


extern "C" {static void assign_QList_0101QUndoStack(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QUndoStack(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QUndoStack*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QUndoStack*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QUndoStack(SIP_SSIZE_T);}
static void *array_QList_0101QUndoStack(SIP_SSIZE_T sipNrElem)
{
    return new QList<QUndoStack*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QUndoStack(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QUndoStack(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QUndoStack*>(reinterpret_cast<const QList<QUndoStack*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QUndoStack(void *, int);}
static void release_QList_0101QUndoStack(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QUndoStack*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QUndoStack(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QUndoStack(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QUndoStack*> **sipCppPtr = reinterpret_cast<QList<QUndoStack*> **>(sipCppPtrV);

#line 150 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QUndoStack, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QUndoStack *> *ql = new QList<QUndoStack *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QUndoStack *t = reinterpret_cast<QUndoStack *>(sipConvertToType(itm, sipType_QUndoStack, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 123 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QUndoStack.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QUndoStack(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QUndoStack(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QUndoStack*> *sipCpp = reinterpret_cast<QList<QUndoStack*> *>(sipCppV);

#line 124 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QUndoStack *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QUndoStack to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QUndoStack, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 156 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QUndoStack.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QUndoStack = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_34107,
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
    assign_QList_0101QUndoStack,
    array_QList_0101QUndoStack,
    copy_QList_0101QUndoStack,
    release_QList_0101QUndoStack,
    convertTo_QList_0101QUndoStack,
    convertFrom_QList_0101QUndoStack
};
