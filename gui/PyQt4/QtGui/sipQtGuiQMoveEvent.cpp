/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:27 2015
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

#line 557 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQMoveEvent.cpp"

#line 35 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQMoveEvent.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQMoveEvent.cpp"


class sipQMoveEvent : public QMoveEvent
{
public:
    sipQMoveEvent(const QPoint&,const QPoint&);
    sipQMoveEvent(const QMoveEvent&);
    ~sipQMoveEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMoveEvent(const sipQMoveEvent &);
    sipQMoveEvent &operator = (const sipQMoveEvent &);
};

sipQMoveEvent::sipQMoveEvent(const QPoint& a0,const QPoint& a1): QMoveEvent(a0,a1), sipPySelf(0)
{
}

sipQMoveEvent::sipQMoveEvent(const QMoveEvent& a0): QMoveEvent(a0), sipPySelf(0)
{
}

sipQMoveEvent::~sipQMoveEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QMoveEvent_pos, "QMoveEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QMoveEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QMoveEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMoveEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMoveEvent, sipName_pos, doc_QMoveEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QMoveEvent_oldPos, "QMoveEvent.oldPos() -> QPoint");

extern "C" {static PyObject *meth_QMoveEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QMoveEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMoveEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->oldPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMoveEvent, sipName_oldPos, doc_QMoveEvent_oldPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMoveEvent(void *, const sipTypeDef *);}
static void *cast_QMoveEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMoveEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QMoveEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMoveEvent(void *, int);}
static void release_QMoveEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast<QMoveEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMoveEvent(sipSimpleWrapper *);}
static void dealloc_QMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMoveEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMoveEvent *sipCpp = 0;

    {
        const QPoint* a0;
        const QPoint* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMoveEvent(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMoveEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMoveEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMoveEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMoveEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QMoveEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldPos), meth_QMoveEvent_oldPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMoveEvent_oldPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QMoveEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMoveEvent_pos)}
};

PyDoc_STRVAR(doc_QMoveEvent, "\1QMoveEvent(QPoint, QPoint)\n"
    "QMoveEvent(QMoveEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMoveEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QMoveEvent,
        {0}
    },
    {
        sipNameNr_QMoveEvent,
        {0, 0, 1},
        2, methods_QMoveEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMoveEvent,
    -1,
    -1,
    supers_QMoveEvent,
    0,
    init_type_QMoveEvent,
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
    dealloc_QMoveEvent,
    0,
    0,
    0,
    release_QMoveEvent,
    cast_QMoveEvent,
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
