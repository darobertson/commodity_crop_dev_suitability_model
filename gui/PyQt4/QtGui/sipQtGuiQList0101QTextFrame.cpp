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
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QTextFrame.cpp"

#line 70 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QTextFrame.cpp"


extern "C" {static void assign_QList_0101QTextFrame(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QTextFrame(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QTextFrame*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QTextFrame*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QTextFrame(SIP_SSIZE_T);}
static void *array_QList_0101QTextFrame(SIP_SSIZE_T sipNrElem)
{
    return new QList<QTextFrame*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QTextFrame(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QTextFrame(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QTextFrame*>(reinterpret_cast<const QList<QTextFrame*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QTextFrame(void *, int);}
static void release_QList_0101QTextFrame(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QTextFrame*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QTextFrame(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QTextFrame(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QTextFrame*> **sipCppPtr = reinterpret_cast<QList<QTextFrame*> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QTextFrame, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QTextFrame *> *ql = new QList<QTextFrame *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QTextFrame *t = reinterpret_cast<QTextFrame *>(sipConvertToType(itm, sipType_QTextFrame, sipTransferObj, 0, 0, sipIsErr));

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
#line 123 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QTextFrame.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QTextFrame(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QTextFrame(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QTextFrame*> *sipCpp = reinterpret_cast<QList<QTextFrame*> *>(sipCppV);

#line 124 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextFrame *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QTextFrame to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QTextFrame, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 156 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQList0101QTextFrame.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QTextFrame = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_34126,
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
    assign_QList_0101QTextFrame,
    array_QList_0101QTextFrame,
    copy_QList_0101QTextFrame,
    release_QList_0101QTextFrame,
    convertTo_QList_0101QTextFrame,
    convertFrom_QList_0101QTextFrame
};
