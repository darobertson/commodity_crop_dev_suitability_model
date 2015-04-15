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

#line 1253 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"

#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionToolBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionToolBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBox(void *, int);}
static void release_QStyleOptionToolBox(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolBox *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBox(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolBox(reinterpret_cast<const QStyleOptionToolBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBox();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolBox, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBox(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolBox[] = {{500, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionToolBox::Type), 598},
    {sipName_Version, static_cast<int>(QStyleOptionToolBox::Version), 599},
};


extern "C" {static PyObject *varget_QStyleOptionToolBox_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBox_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolBox_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBox_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBox_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBox_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionToolBox_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBox_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionToolBox[] = {
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionToolBox_icon, (PyMethodDef *)varset_QStyleOptionToolBox_icon, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionToolBox_text, (PyMethodDef *)varset_QStyleOptionToolBox_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionToolBox, "\1QStyleOptionToolBox()\n"
    "QStyleOptionToolBox(QStyleOptionToolBox)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionToolBox,
        2, variables_QStyleOptionToolBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolBox,
    -1,
    -1,
    supers_QStyleOptionToolBox,
    0,
    init_type_QStyleOptionToolBox,
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
    dealloc_QStyleOptionToolBox,
    assign_QStyleOptionToolBox,
    array_QStyleOptionToolBox,
    copy_QStyleOptionToolBox,
    release_QStyleOptionToolBox,
    cast_QStyleOptionToolBox,
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
