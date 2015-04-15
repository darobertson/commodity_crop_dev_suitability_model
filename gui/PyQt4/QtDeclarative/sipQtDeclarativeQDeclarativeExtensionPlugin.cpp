/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:36 2015
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

#include "sipAPIQtDeclarative.h"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDeclarative/qdeclarativeextensionplugin.sip"
#include <qdeclarativeextensionplugin.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDeclarative/qdeclarativeengine.sip"
#include <qdeclarativeengine.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 71 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 74 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 77 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativeExtensionPlugin.cpp"


class sipQDeclarativeExtensionPlugin : public QDeclarativeExtensionPlugin
{
public:
    sipQDeclarativeExtensionPlugin(QObject*);
    virtual ~sipQDeclarativeExtensionPlugin();

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
    void initializeEngine(QDeclarativeEngine*,const char*);
    void registerTypes(const char*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativeExtensionPlugin(const sipQDeclarativeExtensionPlugin &);
    sipQDeclarativeExtensionPlugin &operator = (const sipQDeclarativeExtensionPlugin &);

    char sipPyMethods[9];
};

sipQDeclarativeExtensionPlugin::sipQDeclarativeExtensionPlugin(QObject*a0): QDeclarativeExtensionPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeExtensionPlugin::~sipQDeclarativeExtensionPlugin()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDeclarativeExtensionPlugin::metaObject() const
{
    return sip_QtDeclarative_qt_metaobject(sipPySelf,sipType_QDeclarativeExtensionPlugin);
}

int sipQDeclarativeExtensionPlugin::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDeclarativeExtensionPlugin::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDeclarative_qt_metacall(sipPySelf,sipType_QDeclarativeExtensionPlugin,_c,_id,_a);

    return _id;
}

void *sipQDeclarativeExtensionPlugin::qt_metacast(const char *_clname)
{
    return (sip_QtDeclarative_qt_metacast(sipPySelf, sipType_QDeclarativeExtensionPlugin, _clname)) ? this : QDeclarativeExtensionPlugin::qt_metacast(_clname);
}

void sipQDeclarativeExtensionPlugin::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativeExtensionPlugin::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativeExtensionPlugin::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativeExtensionPlugin::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativeExtensionPlugin::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDeclarativeExtensionPlugin::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDeclarativeExtensionPlugin::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDeclarativeExtensionPlugin::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDeclarativeExtensionPlugin::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDeclarativeExtensionPlugin::initializeEngine(QDeclarativeEngine*a0,const char*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_initializeEngine);

    if (!sipMeth)
    {
        QDeclarativeExtensionPlugin::initializeEngine(a0,a1);
        return;
    }

    extern void sipVH_QtDeclarative_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDeclarativeEngine*,const char*);

    sipVH_QtDeclarative_5(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQDeclarativeExtensionPlugin::registerTypes(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QDeclarativeExtensionPlugin,sipName_registerTypes);

    if (!sipMeth)
        return;

    extern void sipVH_QtDeclarative_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtDeclarative_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDeclarativeExtensionPlugin_registerTypes, "QDeclarativeExtensionPlugin.registerTypes(str)");

extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_registerTypes(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_registerTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char* a0;
        QDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativeExtensionPlugin, sipName_registerTypes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->registerTypes(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_registerTypes, doc_QDeclarativeExtensionPlugin_registerTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeExtensionPlugin_initializeEngine, "QDeclarativeExtensionPlugin.initializeEngine(QDeclarativeEngine, str)");

extern "C" {static PyObject *meth_QDeclarativeExtensionPlugin_initializeEngine(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeExtensionPlugin_initializeEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDeclarativeEngine* a0;
        const char* a1;
        QDeclarativeExtensionPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8s", &sipSelf, sipType_QDeclarativeExtensionPlugin, &sipCpp, sipType_QDeclarativeEngine, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QDeclarativeExtensionPlugin::initializeEngine(a0,a1) : sipCpp->initializeEngine(a0,a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeExtensionPlugin, sipName_initializeEngine, doc_QDeclarativeExtensionPlugin_initializeEngine);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeExtensionPlugin(void *, const sipTypeDef *);}
static void *cast_QDeclarativeExtensionPlugin(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDeclarativeExtensionPlugin)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QDeclarativeExtensionPlugin *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeExtensionPlugin(void *, int);}
static void release_QDeclarativeExtensionPlugin(void *sipCppV,int)
{
    QDeclarativeExtensionPlugin *sipCpp = reinterpret_cast<QDeclarativeExtensionPlugin *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativeExtensionPlugin(sipSimpleWrapper *);}
static void dealloc_QDeclarativeExtensionPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDeclarativeExtensionPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeExtensionPlugin(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDeclarativeExtensionPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeExtensionPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDeclarativeExtensionPlugin *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeExtensionPlugin(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDeclarativeExtensionPlugin[] = {{141, 0, 1}};


static PyMethodDef methods_QDeclarativeExtensionPlugin[] = {
    {SIP_MLNAME_CAST(sipName_initializeEngine), meth_QDeclarativeExtensionPlugin_initializeEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeExtensionPlugin_initializeEngine)},
    {SIP_MLNAME_CAST(sipName_registerTypes), meth_QDeclarativeExtensionPlugin_registerTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeExtensionPlugin_registerTypes)}
};

PyDoc_STRVAR(doc_QDeclarativeExtensionPlugin, "\1QDeclarativeExtensionPlugin(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeExtensionPlugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeExtensionPlugin,
        {0}
    },
    {
        sipNameNr_QDeclarativeExtensionPlugin,
        {0, 0, 1},
        2, methods_QDeclarativeExtensionPlugin,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeExtensionPlugin,
    -1,
    -1,
    supers_QDeclarativeExtensionPlugin,
    0,
    init_type_QDeclarativeExtensionPlugin,
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
    dealloc_QDeclarativeExtensionPlugin,
    0,
    0,
    0,
    release_QDeclarativeExtensionPlugin,
    cast_QDeclarativeExtensionPlugin,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDeclarativeExtensionPlugin::staticMetaObject,
    0,
    0
};
