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

#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"

#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 35 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 119 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtGui/sipQtGuiQGraphicsSceneMouseEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_pos, "QGraphicsSceneMouseEvent.pos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_pos, doc_QGraphicsSceneMouseEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_scenePos, "QGraphicsSceneMouseEvent.scenePos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_scenePos, doc_QGraphicsSceneMouseEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_screenPos, "QGraphicsSceneMouseEvent.screenPos() -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_screenPos, doc_QGraphicsSceneMouseEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownPos, "QGraphicsSceneMouseEvent.buttonDownPos(Qt.MouseButton) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownPos, doc_QGraphicsSceneMouseEvent_buttonDownPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownScenePos, "QGraphicsSceneMouseEvent.buttonDownScenePos(Qt.MouseButton) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownScenePos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScenePos, doc_QGraphicsSceneMouseEvent_buttonDownScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownScreenPos, "QGraphicsSceneMouseEvent.buttonDownScreenPos(Qt.MouseButton) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->buttonDownScreenPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScreenPos, doc_QGraphicsSceneMouseEvent_buttonDownScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastPos, "QGraphicsSceneMouseEvent.lastPos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastPos, doc_QGraphicsSceneMouseEvent_lastPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastScenePos, "QGraphicsSceneMouseEvent.lastScenePos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScenePos, doc_QGraphicsSceneMouseEvent_lastScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastScreenPos, "QGraphicsSceneMouseEvent.lastScreenPos() -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->lastScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScreenPos, doc_QGraphicsSceneMouseEvent_lastScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttons, "QGraphicsSceneMouseEvent.buttons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttons, doc_QGraphicsSceneMouseEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_button, "QGraphicsSceneMouseEvent.button() -> Qt.MouseButton");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButton sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->button();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_button, doc_QGraphicsSceneMouseEvent_button);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_modifiers, "QGraphicsSceneMouseEvent.modifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_modifiers, doc_QGraphicsSceneMouseEvent_modifiers);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMouseEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMouseEvent(void *, int);}
static void release_QGraphicsSceneMouseEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsSceneMouseEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneMouseEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMouseEvent[] = {{199, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QGraphicsSceneMouseEvent_button, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_button)},
    {SIP_MLNAME_CAST(sipName_buttonDownPos), meth_QGraphicsSceneMouseEvent_buttonDownPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownPos)},
    {SIP_MLNAME_CAST(sipName_buttonDownScenePos), meth_QGraphicsSceneMouseEvent_buttonDownScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownScenePos)},
    {SIP_MLNAME_CAST(sipName_buttonDownScreenPos), meth_QGraphicsSceneMouseEvent_buttonDownScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownScreenPos)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneMouseEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QGraphicsSceneMouseEvent_lastPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastPos)},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QGraphicsSceneMouseEvent_lastScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastScenePos)},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QGraphicsSceneMouseEvent_lastScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastScreenPos)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneMouseEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneMouseEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_pos)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneMouseEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneMouseEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_screenPos)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMouseEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneMouseEvent,
        {0, 0, 1},
        12, methods_QGraphicsSceneMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneMouseEvent,
    0,
    0,
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
    dealloc_QGraphicsSceneMouseEvent,
    0,
    0,
    0,
    release_QGraphicsSceneMouseEvent,
    cast_QGraphicsSceneMouseEvent,
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
