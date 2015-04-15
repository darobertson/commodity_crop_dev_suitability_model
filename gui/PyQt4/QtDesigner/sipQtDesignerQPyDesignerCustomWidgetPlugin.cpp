/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:28:00 2015
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

#include "sipAPIQtDesigner.h"

#line 29 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDesigner/qpydesignercustomwidgetplugin.sip"
#include <qpydesignercustomwidgetplugin.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 71 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 74 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 31 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDesigner/abstractformeditor.sip"
#include <abstractformeditor.h>
#line 77 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 35 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 80 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"
#line 35 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 83 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDesigner/sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp"


class sipQPyDesignerCustomWidgetPlugin : public QPyDesignerCustomWidgetPlugin
{
public:
    sipQPyDesignerCustomWidgetPlugin(QObject*);
    virtual ~sipQPyDesignerCustomWidgetPlugin();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString codeTemplate() const;
    QString domXml() const;
    void initialize(QDesignerFormEditorInterface*);
    bool isInitialized() const;
    QWidget* createWidget(QWidget*);
    bool isContainer() const;
    QIcon icon() const;
    QString includeFile() const;
    QString whatsThis() const;
    QString toolTip() const;
    QString group() const;
    QString name() const;
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
    sipQPyDesignerCustomWidgetPlugin(const sipQPyDesignerCustomWidgetPlugin &);
    sipQPyDesignerCustomWidgetPlugin &operator = (const sipQPyDesignerCustomWidgetPlugin &);

    char sipPyMethods[19];
};

sipQPyDesignerCustomWidgetPlugin::sipQPyDesignerCustomWidgetPlugin(QObject*a0): QPyDesignerCustomWidgetPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerCustomWidgetPlugin::~sipQPyDesignerCustomWidgetPlugin()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerCustomWidgetPlugin::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerCustomWidgetPlugin);
}

int sipQPyDesignerCustomWidgetPlugin::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerCustomWidgetPlugin::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerCustomWidgetPlugin,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerCustomWidgetPlugin::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerCustomWidgetPlugin, _clname)) ? this : QPyDesignerCustomWidgetPlugin::qt_metacast(_clname);
}

QString sipQPyDesignerCustomWidgetPlugin::codeTemplate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_codeTemplate);

    if (!sipMeth)
        return QPyDesignerCustomWidgetPlugin::codeTemplate();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::domXml() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_domXml);

    if (!sipMeth)
        return QPyDesignerCustomWidgetPlugin::domXml();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerCustomWidgetPlugin::initialize(QDesignerFormEditorInterface*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_initialize);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::initialize(a0);
        return;
    }

    extern void sipVH_QtDesigner_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDesignerFormEditorInterface*);

    sipVH_QtDesigner_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetPlugin::isInitialized() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_isInitialized);

    if (!sipMeth)
        return QPyDesignerCustomWidgetPlugin::isInitialized();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QWidget* sipQPyDesignerCustomWidgetPlugin::createWidget(QWidget*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_createWidget);

    if (!sipMeth)
        return 0;

    typedef QWidget* (*sipVH_QtGui_8)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QWidget*);

    return ((sipVH_QtGui_8)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[8]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetPlugin::isContainer() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_isContainer);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QIcon sipQPyDesignerCustomWidgetPlugin::icon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_icon);

    if (!sipMeth)
        return QIcon();

    extern QIcon sipVH_QtDesigner_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_9(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::includeFile() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_includeFile);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::whatsThis() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_whatsThis);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::toolTip() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_toolTip);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::group() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_group);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQPyDesignerCustomWidgetPlugin::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QPyDesignerCustomWidgetPlugin,sipName_name);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerCustomWidgetPlugin::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerCustomWidgetPlugin::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerCustomWidgetPlugin::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerCustomWidgetPlugin::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerCustomWidgetPlugin::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerCustomWidgetPlugin::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerCustomWidgetPlugin::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyDesignerCustomWidgetPlugin(void *, const sipTypeDef *);}
static void *cast_QPyDesignerCustomWidgetPlugin(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPyDesignerCustomWidgetPlugin)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPyDesignerCustomWidgetPlugin *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QDesignerCustomWidgetInterface)->ctd_cast((QDesignerCustomWidgetInterface *)(QPyDesignerCustomWidgetPlugin *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerCustomWidgetPlugin(void *, int);}
static void release_QPyDesignerCustomWidgetPlugin(void *sipCppV,int)
{
    QPyDesignerCustomWidgetPlugin *sipCpp = reinterpret_cast<QPyDesignerCustomWidgetPlugin *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *);}
static void dealloc_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerCustomWidgetPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerCustomWidgetPlugin(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerCustomWidgetPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerCustomWidgetPlugin *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerCustomWidgetPlugin(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerCustomWidgetPlugin[] = {{141, 0, 0}, {6, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerCustomWidgetPlugin, "\1QPyDesignerCustomWidgetPlugin(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerCustomWidgetPlugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerCustomWidgetPlugin,
        {0}
    },
    {
        sipNameNr_QPyDesignerCustomWidgetPlugin,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerCustomWidgetPlugin,
    -1,
    -1,
    supers_QPyDesignerCustomWidgetPlugin,
    0,
    init_type_QPyDesignerCustomWidgetPlugin,
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
    dealloc_QPyDesignerCustomWidgetPlugin,
    0,
    0,
    0,
    release_QPyDesignerCustomWidgetPlugin,
    cast_QPyDesignerCustomWidgetPlugin,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerCustomWidgetPlugin::staticMetaObject,
    0,
    0
};
