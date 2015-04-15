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

#line 40 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglshaderprogram.sip"
#include <qglshaderprogram.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"

#line 40 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglshaderprogram.sip"
#include <qglshaderprogram.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 234 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 68 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 71 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 74 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 77 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 80 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLShader.cpp"


class sipQGLShader : public QGLShader
{
public:
    sipQGLShader(QGLShader::ShaderType,QObject*);
    sipQGLShader(QGLShader::ShaderType,const QGLContext*,QObject*);
    virtual ~sipQGLShader();

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
    sipQGLShader(const sipQGLShader &);
    sipQGLShader &operator = (const sipQGLShader &);

    char sipPyMethods[7];
};

sipQGLShader::sipQGLShader(QGLShader::ShaderType a0,QObject*a1): QGLShader(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLShader::sipQGLShader(QGLShader::ShaderType a0,const QGLContext*a1,QObject*a2): QGLShader(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLShader::~sipQGLShader()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGLShader::metaObject() const
{
    return sip_QtOpenGL_qt_metaobject(sipPySelf,sipType_QGLShader);
}

int sipQGLShader::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGLShader::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtOpenGL_qt_metacall(sipPySelf,sipType_QGLShader,_c,_id,_a);

    return _id;
}

void *sipQGLShader::qt_metacast(const char *_clname)
{
    return (sip_QtOpenGL_qt_metacast(sipPySelf, sipType_QGLShader, _clname)) ? this : QGLShader::qt_metacast(_clname);
}

void sipQGLShader::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QGLShader::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGLShader::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QGLShader::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGLShader::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QGLShader::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGLShader::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QGLShader::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGLShader::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QGLShader::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQGLShader::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QGLShader::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQGLShader::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QGLShader::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGLShader_shaderType, "QGLShader.shaderType() -> QGLShader.ShaderType");

extern "C" {static PyObject *meth_QGLShader_shaderType(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_shaderType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLShader, &sipCpp))
        {
            QGLShader::ShaderType*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLShader::ShaderType(sipCpp->shaderType());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_shaderType, doc_QGLShader_shaderType);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_compileSourceCode, "QGLShader.compileSourceCode(QByteArray) -> bool\n"
    "QGLShader.compileSourceCode(QString) -> bool");

extern "C" {static PyObject *meth_QGLShader_compileSourceCode(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_compileSourceCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGLShader, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compileSourceCode(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGLShader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compileSourceCode(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_compileSourceCode, doc_QGLShader_compileSourceCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_compileSourceFile, "QGLShader.compileSourceFile(QString) -> bool");

extern "C" {static PyObject *meth_QGLShader_compileSourceFile(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_compileSourceFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGLShader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compileSourceFile(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_compileSourceFile, doc_QGLShader_compileSourceFile);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_sourceCode, "QGLShader.sourceCode() -> QByteArray");

extern "C" {static PyObject *meth_QGLShader_sourceCode(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_sourceCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLShader, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->sourceCode());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_sourceCode, doc_QGLShader_sourceCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_isCompiled, "QGLShader.isCompiled() -> bool");

extern "C" {static PyObject *meth_QGLShader_isCompiled(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_isCompiled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLShader, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isCompiled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_isCompiled, doc_QGLShader_isCompiled);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_log, "QGLShader.log() -> QString");

extern "C" {static PyObject *meth_QGLShader_log(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_log(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLShader, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->log());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_log, doc_QGLShader_log);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_shaderId, "QGLShader.shaderId() -> int");

extern "C" {static PyObject *meth_QGLShader_shaderId(PyObject *, PyObject *);}
static PyObject *meth_QGLShader_shaderId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLShader, &sipCpp))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->shaderId();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_shaderId, doc_QGLShader_shaderId);

    return NULL;
}


PyDoc_STRVAR(doc_QGLShader_hasOpenGLShaders, "QGLShader.hasOpenGLShaders(QGLShader.ShaderType, QGLContext context=None) -> bool");

extern "C" {static PyObject *meth_QGLShader_hasOpenGLShaders(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLShader_hasOpenGLShaders(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        const QGLContext* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_context,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|J8", sipType_QGLShader_ShaderType, &a0, &a0State, sipType_QGLContext, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QGLShader::hasOpenGLShaders(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLShader, sipName_hasOpenGLShaders, doc_QGLShader_hasOpenGLShaders);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLShader(void *, const sipTypeDef *);}
static void *cast_QGLShader(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGLShader)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QGLShader *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLShader(void *, int);}
static void release_QGLShader(void *sipCppV,int)
{
    QGLShader *sipCpp = reinterpret_cast<QGLShader *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGLShader(sipSimpleWrapper *);}
static void dealloc_QGLShader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGLShader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGLShader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGLShader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLShader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGLShader *sipCpp = 0;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QGLShader_ShaderType, &a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLShader(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        const QGLContext* a1;
        QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J8|JH", sipType_QGLShader_ShaderType, &a0, &a0State, sipType_QGLContext, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLShader(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGLShader[] = {{141, 0, 1}};


static PyMethodDef methods_QGLShader[] = {
    {SIP_MLNAME_CAST(sipName_compileSourceCode), meth_QGLShader_compileSourceCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_compileSourceCode)},
    {SIP_MLNAME_CAST(sipName_compileSourceFile), meth_QGLShader_compileSourceFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_compileSourceFile)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLShaders), (PyCFunction)meth_QGLShader_hasOpenGLShaders, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLShader_hasOpenGLShaders)},
    {SIP_MLNAME_CAST(sipName_isCompiled), meth_QGLShader_isCompiled, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_isCompiled)},
    {SIP_MLNAME_CAST(sipName_log), meth_QGLShader_log, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_log)},
    {SIP_MLNAME_CAST(sipName_shaderId), meth_QGLShader_shaderId, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_shaderId)},
    {SIP_MLNAME_CAST(sipName_shaderType), meth_QGLShader_shaderType, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_shaderType)},
    {SIP_MLNAME_CAST(sipName_sourceCode), meth_QGLShader_sourceCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLShader_sourceCode)}
};

static sipEnumMemberDef enummembers_QGLShader[] = {
    {sipName_Fragment, static_cast<int>(QGLShader::Fragment), 21},
    {sipName_Geometry, static_cast<int>(QGLShader::Geometry), 21},
    {sipName_Vertex, static_cast<int>(QGLShader::Vertex), 21},
};

PyDoc_STRVAR(doc_QGLShader, "\1QGLShader(QGLShader.ShaderType, QObject parent=None)\n"
    "QGLShader(QGLShader.ShaderType, QGLContext, QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLShader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGLShader,
        {0}
    },
    {
        sipNameNr_QGLShader,
        {0, 0, 1},
        8, methods_QGLShader,
        3, enummembers_QGLShader,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLShader,
    -1,
    -1,
    supers_QGLShader,
    0,
    init_type_QGLShader,
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
    dealloc_QGLShader,
    0,
    0,
    0,
    release_QGLShader,
    cast_QGLShader,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGLShader::staticMetaObject,
    0,
    0
};
