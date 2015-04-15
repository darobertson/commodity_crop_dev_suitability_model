/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:43 2015
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

#include "sipAPIQtOpenGL.h"

#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQList0101QGLShader.cpp"

#line 40 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglshaderprogram.sip"
#include <qglshaderprogram.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQList0101QGLShader.cpp"


extern "C" {static void assign_QList_0101QGLShader(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QGLShader(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGLShader*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGLShader*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGLShader(SIP_SSIZE_T);}
static void *array_QList_0101QGLShader(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGLShader*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGLShader(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGLShader(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGLShader*>(reinterpret_cast<const QList<QGLShader*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGLShader(void *, int);}
static void release_QList_0101QGLShader(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QGLShader*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QGLShader(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGLShader(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGLShader*> **sipCppPtr = reinterpret_cast<QList<QGLShader*> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QGLShader, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QGLShader *> *ql = new QList<QGLShader *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QGLShader *t = reinterpret_cast<QGLShader *>(sipConvertToType(itm, sipType_QGLShader, sipTransferObj, 0, 0, sipIsErr));

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
#line 123 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQList0101QGLShader.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGLShader(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGLShader(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGLShader*> *sipCpp = reinterpret_cast<QList<QGLShader*> *>(sipCppV);

#line 124 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGLShader *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QGLShader to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QGLShader, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 156 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQList0101QGLShader.cpp"
}


sipMappedTypeDef sipTypeDef_QtOpenGL_QList_0101QGLShader = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1792,
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
    assign_QList_0101QGLShader,
    array_QList_0101QGLShader,
    copy_QList_0101QGLShader,
    release_QList_0101QGLShader,
    convertTo_QList_0101QGLShader,
    convertFrom_QList_0101QGLShader
};
