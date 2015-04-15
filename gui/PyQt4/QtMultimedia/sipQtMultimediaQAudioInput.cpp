/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:33 2015
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

#include "sipAPIQtMultimedia.h"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtMultimedia/qaudioinput.sip"
#include <qaudioinput.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtMultimedia/qaudiodeviceinfo.sip"
#include <qaudiodeviceinfo.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtMultimedia/qaudio.sip"
#include <qaudio.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 35 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 71 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 77 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 80 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 83 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 86 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtMultimedia/sipQtMultimediaQAudioInput.cpp"


class sipQAudioInput : public QAudioInput
{
public:
    sipQAudioInput(const QAudioFormat&,QObject*);
    sipQAudioInput(const QAudioDeviceInfo&,const QAudioFormat&,QObject*);
    virtual ~sipQAudioInput();

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
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAudioInput(const sipQAudioInput &);
    sipQAudioInput &operator = (const sipQAudioInput &);

    char sipPyMethods[7];
};

sipQAudioInput::sipQAudioInput(const QAudioFormat& a0,QObject*a1): QAudioInput(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAudioInput::sipQAudioInput(const QAudioDeviceInfo& a0,const QAudioFormat& a1,QObject*a2): QAudioInput(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAudioInput::~sipQAudioInput()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAudioInput::metaObject() const
{
    return sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QAudioInput);
}

int sipQAudioInput::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAudioInput::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QAudioInput,_c,_id,_a);

    return _id;
}

void *sipQAudioInput::qt_metacast(const char *_clname)
{
    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QAudioInput, _clname)) ? this : QAudioInput::qt_metacast(_clname);
}

void sipQAudioInput::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QAudioInput::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioInput::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QAudioInput::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioInput::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QAudioInput::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioInput::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QAudioInput::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioInput::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QAudioInput::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQAudioInput::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QAudioInput::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQAudioInput::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QAudioInput::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAudioInput_format, "QAudioInput.format() -> QAudioFormat");

extern "C" {static PyObject *meth_QAudioInput_format(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            QAudioFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAudioFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAudioFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_format, doc_QAudioInput_format);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_start, "QAudioInput.start(QIODevice)\n"
    "QAudioInput.start() -> QIODevice");

extern "C" {static PyObject *meth_QAudioInput_start(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAudioInput, &sipCpp, sipType_QIODevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            QIODevice*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->start();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_start, doc_QAudioInput_start);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_stop, "QAudioInput.stop()");

extern "C" {static PyObject *meth_QAudioInput_stop(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_stop, doc_QAudioInput_stop);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_reset, "QAudioInput.reset()");

extern "C" {static PyObject *meth_QAudioInput_reset(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_reset, doc_QAudioInput_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_suspend, "QAudioInput.suspend()");

extern "C" {static PyObject *meth_QAudioInput_suspend(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_suspend(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->suspend();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_suspend, doc_QAudioInput_suspend);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_resume, "QAudioInput.resume()");

extern "C" {static PyObject *meth_QAudioInput_resume(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_resume(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resume();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_resume, doc_QAudioInput_resume);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_setBufferSize, "QAudioInput.setBufferSize(int)");

extern "C" {static PyObject *meth_QAudioInput_setBufferSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_setBufferSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioInput, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBufferSize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_setBufferSize, doc_QAudioInput_setBufferSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_bufferSize, "QAudioInput.bufferSize() -> int");

extern "C" {static PyObject *meth_QAudioInput_bufferSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_bufferSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bufferSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_bufferSize, doc_QAudioInput_bufferSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_bytesReady, "QAudioInput.bytesReady() -> int");

extern "C" {static PyObject *meth_QAudioInput_bytesReady(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_bytesReady(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bytesReady();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_bytesReady, doc_QAudioInput_bytesReady);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_periodSize, "QAudioInput.periodSize() -> int");

extern "C" {static PyObject *meth_QAudioInput_periodSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_periodSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->periodSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_periodSize, doc_QAudioInput_periodSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_setNotifyInterval, "QAudioInput.setNotifyInterval(int)");

extern "C" {static PyObject *meth_QAudioInput_setNotifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_setNotifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioInput, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNotifyInterval(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_setNotifyInterval, doc_QAudioInput_setNotifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_notifyInterval, "QAudioInput.notifyInterval() -> int");

extern "C" {static PyObject *meth_QAudioInput_notifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_notifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->notifyInterval();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_notifyInterval, doc_QAudioInput_notifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_processedUSecs, "QAudioInput.processedUSecs() -> int");

extern "C" {static PyObject *meth_QAudioInput_processedUSecs(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_processedUSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->processedUSecs();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_processedUSecs, doc_QAudioInput_processedUSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_elapsedUSecs, "QAudioInput.elapsedUSecs() -> int");

extern "C" {static PyObject *meth_QAudioInput_elapsedUSecs(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_elapsedUSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->elapsedUSecs();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_elapsedUSecs, doc_QAudioInput_elapsedUSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_error, "QAudioInput.error() -> QAudio.Error");

extern "C" {static PyObject *meth_QAudioInput_error(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            QAudio::Error sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudio_Error);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_error, doc_QAudioInput_error);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioInput_state, "QAudioInput.state() -> QAudio.State");

extern "C" {static PyObject *meth_QAudioInput_state(PyObject *, PyObject *);}
static PyObject *meth_QAudioInput_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioInput *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioInput, &sipCpp))
        {
            QAudio::State sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->state();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudio_State);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioInput, sipName_state, doc_QAudioInput_state);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAudioInput(void *, const sipTypeDef *);}
static void *cast_QAudioInput(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAudioInput)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAudioInput *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioInput(void *, int);}
static void release_QAudioInput(void *sipCppV,int)
{
    QAudioInput *sipCpp = reinterpret_cast<QAudioInput *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAudioInput(sipSimpleWrapper *);}
static void dealloc_QAudioInput(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAudioInput *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioInput(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAudioInput(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioInput(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAudioInput *sipCpp = 0;

    {
        const QAudioFormat& a0def = QAudioFormat();
        const QAudioFormat* a0 = &a0def;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            sipName_format,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J9JH", sipType_QAudioFormat, &a0, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAudioInput(*a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QAudioDeviceInfo* a0;
        const QAudioFormat& a1def = QAudioFormat();
        const QAudioFormat* a1 = &a1def;
        QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J9JH", sipType_QAudioDeviceInfo, &a0, sipType_QAudioFormat, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAudioInput(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAudioInput[] = {{141, 0, 1}};


static PyMethodDef methods_QAudioInput[] = {
    {SIP_MLNAME_CAST(sipName_bufferSize), meth_QAudioInput_bufferSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_bufferSize)},
    {SIP_MLNAME_CAST(sipName_bytesReady), meth_QAudioInput_bytesReady, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_bytesReady)},
    {SIP_MLNAME_CAST(sipName_elapsedUSecs), meth_QAudioInput_elapsedUSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_elapsedUSecs)},
    {SIP_MLNAME_CAST(sipName_error), meth_QAudioInput_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_error)},
    {SIP_MLNAME_CAST(sipName_format), meth_QAudioInput_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_format)},
    {SIP_MLNAME_CAST(sipName_notifyInterval), meth_QAudioInput_notifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_notifyInterval)},
    {SIP_MLNAME_CAST(sipName_periodSize), meth_QAudioInput_periodSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_periodSize)},
    {SIP_MLNAME_CAST(sipName_processedUSecs), meth_QAudioInput_processedUSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_processedUSecs)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QAudioInput_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_reset)},
    {SIP_MLNAME_CAST(sipName_resume), meth_QAudioInput_resume, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_resume)},
    {SIP_MLNAME_CAST(sipName_setBufferSize), meth_QAudioInput_setBufferSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_setBufferSize)},
    {SIP_MLNAME_CAST(sipName_setNotifyInterval), meth_QAudioInput_setNotifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_setNotifyInterval)},
    {SIP_MLNAME_CAST(sipName_start), meth_QAudioInput_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_start)},
    {SIP_MLNAME_CAST(sipName_state), meth_QAudioInput_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_state)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QAudioInput_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_stop)},
    {SIP_MLNAME_CAST(sipName_suspend), meth_QAudioInput_suspend, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioInput_suspend)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QAudioInput[] = {
    {"notify()", "\1QAudioInput.notify", 0, 0},
    {"stateChanged(QAudio::State)", "\1QAudioInput.stateChanged[QAudio.State]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QAudioInput, "\1QAudioInput(QAudioFormat format=QAudioFormat(), QObject parent=None)\n"
    "QAudioInput(QAudioDeviceInfo, QAudioFormat format=QAudioFormat(), QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtMultimedia_QAudioInput = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAudioInput,
        {0}
    },
    {
        sipNameNr_QAudioInput,
        {0, 0, 1},
        16, methods_QAudioInput,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioInput,
    -1,
    -1,
    supers_QAudioInput,
    0,
    init_type_QAudioInput,
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
    dealloc_QAudioInput,
    0,
    0,
    0,
    release_QAudioInput,
    cast_QAudioInput,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAudioInput::staticMetaObject,
    0,
    signals_QAudioInput,
};
