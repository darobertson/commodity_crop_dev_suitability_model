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

#line 2026 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionViewItemV3.cpp"

#line 35 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionViewItemV3.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionViewItemV3.cpp"
#line 1135 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionViewItemV3.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionViewItemV3(void *, const sipTypeDef *);}
static void *cast_QStyleOptionViewItemV3(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionViewItemV3)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionViewItemV2)->ctd_cast((QStyleOptionViewItemV2 *)(QStyleOptionViewItemV3 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItemV3(void *, int);}
static void release_QStyleOptionViewItemV3(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionViewItemV3 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItemV3(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItemV3(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItemV3 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItemV3 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItemV3(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItemV3(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItemV3[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItemV3(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItemV3(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItemV3(reinterpret_cast<const QStyleOptionViewItemV3 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItemV3(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItemV3(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItemV3(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItemV3(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItemV3(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItemV3 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV3();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItemV3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItemV3, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItemV3[] = {{613, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItemV3[] = {
    {sipName_Version, static_cast<int>(QStyleOptionViewItemV3::Version), 618},
};


extern "C" {static PyObject *varget_QStyleOptionViewItemV3_locale(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV3_locale(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QLocale*sipVal;
    QStyleOptionViewItemV3 *sipCpp = reinterpret_cast<QStyleOptionViewItemV3 *>(sipSelf);

    sipVal = &sipCpp->locale;

    sipPy = sipConvertFromType(sipVal, sipType_QLocale, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItemV3_locale(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV3_locale(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QLocale*sipVal;
    QStyleOptionViewItemV3 *sipCpp = reinterpret_cast<QStyleOptionViewItemV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QLocale *>(sipForceConvertToType(sipPy,sipType_QLocale,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->locale = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV3_widget(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV3_widget(void *sipSelf, PyObject *, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItemV3 *sipCpp = reinterpret_cast<QStyleOptionViewItemV3 *>(sipSelf);

    sipVal = sipCpp->widget;

    return sipConvertFromType(const_cast<QWidget *>(sipVal), sipType_QWidget, NULL);
}


extern "C" {static int varset_QStyleOptionViewItemV3_widget(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV3_widget(void *sipSelf, PyObject *sipPy, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItemV3 *sipCpp = reinterpret_cast<QStyleOptionViewItemV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QWidget *>(sipForceConvertToType(sipPy,sipType_QWidget,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->widget = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItemV3[] = {
    {InstanceVariable, sipName_locale, (PyMethodDef *)varget_QStyleOptionViewItemV3_locale, (PyMethodDef *)varset_QStyleOptionViewItemV3_locale, NULL, NULL},
    {InstanceVariable, sipName_widget, (PyMethodDef *)varget_QStyleOptionViewItemV3_widget, (PyMethodDef *)varset_QStyleOptionViewItemV3_widget, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionViewItemV3, "\1QStyleOptionViewItemV3()\n"
    "QStyleOptionViewItemV3(QStyleOptionViewItemV3)\n"
    "QStyleOptionViewItemV3(QStyleOptionViewItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItemV3 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItemV3,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItemV3,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionViewItemV3,
        2, variables_QStyleOptionViewItemV3,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItemV3,
    -1,
    -1,
    supers_QStyleOptionViewItemV3,
    0,
    init_type_QStyleOptionViewItemV3,
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
    dealloc_QStyleOptionViewItemV3,
    assign_QStyleOptionViewItemV3,
    array_QStyleOptionViewItemV3,
    copy_QStyleOptionViewItemV3,
    release_QStyleOptionViewItemV3,
    cast_QStyleOptionViewItemV3,
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
