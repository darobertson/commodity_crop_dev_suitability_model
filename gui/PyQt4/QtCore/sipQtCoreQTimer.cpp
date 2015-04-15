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

#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qtimer.sip"
#include <qtimer.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"

#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 338 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 355 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 274 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 37 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 120 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 36 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 71 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 74 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQTimer.cpp"


class sipQTimer : public QTimer
{
public:
    sipQTimer(QObject*);
    virtual ~sipQTimer();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void timerEvent(QTimerEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimer(const sipQTimer &);
    sipQTimer &operator = (const sipQTimer &);

    char sipPyMethods[7];
};

sipQTimer::sipQTimer(QObject*a0): QTimer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTimer::~sipQTimer()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTimer::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QTimer);
}

int sipQTimer::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTimer::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QTimer,_c,_id,_a);

    return _id;
}

void *sipQTimer::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QTimer, _clname)) ? this : QTimer::qt_metacast(_clname);
}

void sipQTimer::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QTimer::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTimer::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QTimer::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTimer::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QTimer::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTimer::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QTimer::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTimer::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QTimer::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTimer::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QTimer::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTimer::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QTimer::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTimer_isActive, "QTimer.isActive() -> bool");

extern "C" {static PyObject *meth_QTimer_isActive(PyObject *, PyObject *);}
static PyObject *meth_QTimer_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isActive();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_isActive, doc_QTimer_isActive);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_timerId, "QTimer.timerId() -> int");

extern "C" {static PyObject *meth_QTimer_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timerId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerId, doc_QTimer_timerId);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_setInterval, "QTimer.setInterval(int)");

extern "C" {static PyObject *meth_QTimer_setInterval(PyObject *, PyObject *);}
static PyObject *meth_QTimer_setInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setInterval(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_setInterval, doc_QTimer_setInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_interval, "QTimer.interval() -> int");

extern "C" {static PyObject *meth_QTimer_interval(PyObject *, PyObject *);}
static PyObject *meth_QTimer_interval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->interval();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_interval, doc_QTimer_interval);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_isSingleShot, "QTimer.isSingleShot() -> bool");

extern "C" {static PyObject *meth_QTimer_isSingleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_isSingleShot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSingleShot();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_isSingleShot, doc_QTimer_isSingleShot);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_setSingleShot, "QTimer.setSingleShot(bool)");

extern "C" {static PyObject *meth_QTimer_setSingleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_setSingleShot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSingleShot(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_setSingleShot, doc_QTimer_setSingleShot);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_singleShot, "QTimer.singleShot(int, QObject, SLOT())\n"
    "QTimer.singleShot(int, callable)");

extern "C" {static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *);}
static PyObject *meth_QTimer_singleShot(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QObject* a1;
        const char* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "iqS", &a0, "()", &a1, &a2, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QTimer::singleShot(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        QObject* a1;
        const char* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "ig", &a0, "()", &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QTimer::singleShot(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_singleShot, doc_QTimer_singleShot);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_start, "QTimer.start(int)\n"
    "QTimer.start()");

extern "C" {static PyObject *meth_QTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTimer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_start, doc_QTimer_start);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_stop, "QTimer.stop()");

extern "C" {static PyObject *meth_QTimer_stop(PyObject *, PyObject *);}
static PyObject *meth_QTimer_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_stop, doc_QTimer_stop);

    return NULL;
}


PyDoc_STRVAR(doc_QTimer_timerEvent, "QTimer.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QTimer_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QTimer_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        QTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QTimer, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QTimer::timerEvent(a0) : sipCpp->timerEvent(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimer, sipName_timerEvent, doc_QTimer_timerEvent);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimer(void *, const sipTypeDef *);}
static void *cast_QTimer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QTimer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimer(void *, int);}
static void release_QTimer(void *sipCppV,int)
{
    QTimer *sipCpp = reinterpret_cast<QTimer *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTimer(sipSimpleWrapper *);}
static void dealloc_QTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTimer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTimer *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimer(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimer[] = {{141, 255, 1}};


static PyMethodDef methods_QTimer[] = {
    {SIP_MLNAME_CAST(sipName_interval), meth_QTimer_interval, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_interval)},
    {SIP_MLNAME_CAST(sipName_isActive), meth_QTimer_isActive, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_isActive)},
    {SIP_MLNAME_CAST(sipName_isSingleShot), meth_QTimer_isSingleShot, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_isSingleShot)},
    {SIP_MLNAME_CAST(sipName_setInterval), meth_QTimer_setInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_setInterval)},
    {SIP_MLNAME_CAST(sipName_setSingleShot), meth_QTimer_setSingleShot, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_setSingleShot)},
    {SIP_MLNAME_CAST(sipName_singleShot), meth_QTimer_singleShot, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_singleShot)},
    {SIP_MLNAME_CAST(sipName_start), meth_QTimer_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_start)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QTimer_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_stop)},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QTimer_timerEvent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_timerEvent)},
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimer_timerId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimer_timerId)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QTimer[] = {
    {"timeout()", "\1QTimer.timeout", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QTimer, "\1QTimer(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimer,
        {0}
    },
    {
        sipNameNr_QTimer,
        {0, 0, 1},
        10, methods_QTimer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTimer,
    -1,
    -1,
    supers_QTimer,
    0,
    init_type_QTimer,
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
    dealloc_QTimer,
    0,
    0,
    0,
    release_QTimer,
    cast_QTimer,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QTimer::staticMetaObject,
    0,
    signals_QTimer,
};
