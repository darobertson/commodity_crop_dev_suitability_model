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

#line 2214 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionTabWidgetFrameV2.cpp"

#line 35 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionTabWidgetFrameV2.cpp"
#line 525 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionTabWidgetFrameV2.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionTabWidgetFrameV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTabWidgetFrameV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabWidgetFrameV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTabWidgetFrameV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionTabWidgetFrame)->ctd_cast((QStyleOptionTabWidgetFrame *)(QStyleOptionTabWidgetFrameV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabWidgetFrameV2(void *, int);}
static void release_QStyleOptionTabWidgetFrameV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabWidgetFrameV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabWidgetFrameV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabWidgetFrameV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabWidgetFrameV2(SIP_SSIZE_T);}
static void *array_QStyleOptionTabWidgetFrameV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabWidgetFrameV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabWidgetFrameV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabWidgetFrameV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabWidgetFrameV2(reinterpret_cast<const QStyleOptionTabWidgetFrameV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabWidgetFrameV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabWidgetFrameV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabWidgetFrameV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabWidgetFrameV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabWidgetFrameV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabWidgetFrameV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabWidgetFrameV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabWidgetFrameV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabWidgetFrameV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabWidgetFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabWidgetFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabWidgetFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabWidgetFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabWidgetFrameV2[] = {{583, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabWidgetFrameV2[] = {
    {sipName_Version, static_cast<int>(QStyleOptionTabWidgetFrameV2::Version), 587},
};


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrameV2_selectedTabRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrameV2_selectedTabRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRect*sipVal;
    QStyleOptionTabWidgetFrameV2 *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipSelf);

    sipVal = &sipCpp->selectedTabRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrameV2_selectedTabRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrameV2_selectedTabRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect*sipVal;
    QStyleOptionTabWidgetFrameV2 *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selectedTabRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrameV2_tabBarRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrameV2_tabBarRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRect*sipVal;
    QStyleOptionTabWidgetFrameV2 *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipSelf);

    sipVal = &sipCpp->tabBarRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrameV2_tabBarRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrameV2_tabBarRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect*sipVal;
    QStyleOptionTabWidgetFrameV2 *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrameV2 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabWidgetFrameV2[] = {
    {InstanceVariable, sipName_selectedTabRect, (PyMethodDef *)varget_QStyleOptionTabWidgetFrameV2_selectedTabRect, (PyMethodDef *)varset_QStyleOptionTabWidgetFrameV2_selectedTabRect, NULL, NULL},
    {InstanceVariable, sipName_tabBarRect, (PyMethodDef *)varget_QStyleOptionTabWidgetFrameV2_tabBarRect, (PyMethodDef *)varset_QStyleOptionTabWidgetFrameV2_tabBarRect, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTabWidgetFrameV2, "\1QStyleOptionTabWidgetFrameV2()\n"
    "QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrameV2)\n"
    "QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrame)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabWidgetFrameV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabWidgetFrameV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabWidgetFrameV2,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionTabWidgetFrameV2,
        2, variables_QStyleOptionTabWidgetFrameV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTabWidgetFrameV2,
    -1,
    -1,
    supers_QStyleOptionTabWidgetFrameV2,
    0,
    init_type_QStyleOptionTabWidgetFrameV2,
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
    dealloc_QStyleOptionTabWidgetFrameV2,
    assign_QStyleOptionTabWidgetFrameV2,
    array_QStyleOptionTabWidgetFrameV2,
    copy_QStyleOptionTabWidgetFrameV2,
    release_QStyleOptionTabWidgetFrameV2,
    cast_QStyleOptionTabWidgetFrameV2,
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
