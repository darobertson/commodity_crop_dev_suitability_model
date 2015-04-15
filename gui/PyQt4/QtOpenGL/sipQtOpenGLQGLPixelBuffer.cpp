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

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglpixelbuffer.sip"
#include <qglpixelbuffer.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"

#line 35 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 79 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 331 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 31 "sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 61 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 35 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 168 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 119 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 35 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 62 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 65 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLPixelBuffer.cpp"


class sipQGLPixelBuffer : public QGLPixelBuffer
{
public:
    sipQGLPixelBuffer(const QSize&,const QGLFormat&,QGLWidget*);
    sipQGLPixelBuffer(int,int,const QGLFormat&,QGLWidget*);
    virtual ~sipQGLPixelBuffer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int devType() const;
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGLPixelBuffer(const sipQGLPixelBuffer &);
    sipQGLPixelBuffer &operator = (const sipQGLPixelBuffer &);

    char sipPyMethods[3];
};

sipQGLPixelBuffer::sipQGLPixelBuffer(const QSize& a0,const QGLFormat& a1,QGLWidget*a2): QGLPixelBuffer(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLPixelBuffer::sipQGLPixelBuffer(int a0,int a1,const QGLFormat& a2,QGLWidget*a3): QGLPixelBuffer(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLPixelBuffer::~sipQGLPixelBuffer()
{
    sipCommonDtor(sipPySelf);
}

int sipQGLPixelBuffer::devType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_devType);

    if (!sipMeth)
        return QGLPixelBuffer::devType();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QGLPixelBuffer::metric(a0);

    typedef int (*sipVH_QtGui_14)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return ((sipVH_QtGui_14)(sipModuleAPI_QtOpenGL_QtGui->em_virthandlers[14]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQGLPixelBuffer::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return QGLPixelBuffer::paintEngine();

    typedef QPaintEngine* (*sipVH_QtGui_27)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtGui_27)(sipModuleAPI_QtOpenGL_QtGui->em_virthandlers[27]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QGLPixelBuffer_isValid, "QGLPixelBuffer.isValid() -> bool");

extern "C" {static PyObject *meth_QGLPixelBuffer_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_isValid, doc_QGLPixelBuffer_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_makeCurrent, "QGLPixelBuffer.makeCurrent() -> bool");

extern "C" {static PyObject *meth_QGLPixelBuffer_makeCurrent(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_makeCurrent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->makeCurrent();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_makeCurrent, doc_QGLPixelBuffer_makeCurrent);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_doneCurrent, "QGLPixelBuffer.doneCurrent() -> bool");

extern "C" {static PyObject *meth_QGLPixelBuffer_doneCurrent(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_doneCurrent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->doneCurrent();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_doneCurrent, doc_QGLPixelBuffer_doneCurrent);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_generateDynamicTexture, "QGLPixelBuffer.generateDynamicTexture() -> int");

extern "C" {static PyObject *meth_QGLPixelBuffer_generateDynamicTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_generateDynamicTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->generateDynamicTexture();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_generateDynamicTexture, doc_QGLPixelBuffer_generateDynamicTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_bindToDynamicTexture, "QGLPixelBuffer.bindToDynamicTexture(int) -> bool");

extern "C" {static PyObject *meth_QGLPixelBuffer_bindToDynamicTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_bindToDynamicTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLuint a0;
        QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bindToDynamicTexture(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_bindToDynamicTexture, doc_QGLPixelBuffer_bindToDynamicTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_releaseFromDynamicTexture, "QGLPixelBuffer.releaseFromDynamicTexture()");

extern "C" {static PyObject *meth_QGLPixelBuffer_releaseFromDynamicTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_releaseFromDynamicTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->releaseFromDynamicTexture();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_releaseFromDynamicTexture, doc_QGLPixelBuffer_releaseFromDynamicTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_updateDynamicTexture, "QGLPixelBuffer.updateDynamicTexture(int)");

extern "C" {static PyObject *meth_QGLPixelBuffer_updateDynamicTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_updateDynamicTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLuint a0;
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->updateDynamicTexture(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_updateDynamicTexture, doc_QGLPixelBuffer_updateDynamicTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_bindTexture, "QGLPixelBuffer.bindTexture(QImage, int target=GL_TEXTURE_2D) -> int\n"
    "QGLPixelBuffer.bindTexture(QPixmap, int target=GL_TEXTURE_2D) -> int\n"
    "QGLPixelBuffer.bindTexture(QString) -> int");

extern "C" {static PyObject *meth_QGLPixelBuffer_bindTexture(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_bindTexture(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage* a0;
        GLenum a1 = GL_TEXTURE_2D;
        QGLPixelBuffer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|u", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QImage, &a0, &a1))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bindTexture(*a0,a1);
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QPixmap* a0;
        GLenum a1 = GL_TEXTURE_2D;
        QGLPixelBuffer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|u", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QPixmap, &a0, &a1))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bindTexture(*a0,a1);
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QGLPixelBuffer *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QString,&a0, &a0State))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bindTexture(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_bindTexture, doc_QGLPixelBuffer_bindTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_drawTexture, "QGLPixelBuffer.drawTexture(QRectF, int, int textureTarget=GL_TEXTURE_2D)\n"
    "QGLPixelBuffer.drawTexture(QPointF, int, int textureTarget=GL_TEXTURE_2D)");

extern "C" {static PyObject *meth_QGLPixelBuffer_drawTexture(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_drawTexture(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        GLuint a1;
        GLenum a2 = GL_TEXTURE_2D;
        QGLPixelBuffer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9u|u", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QRectF, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->drawTexture(*a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        GLuint a1;
        GLenum a2 = GL_TEXTURE_2D;
        QGLPixelBuffer *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1u|u", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QPointF, &a0, &a0State, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->drawTexture(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_drawTexture, doc_QGLPixelBuffer_drawTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_deleteTexture, "QGLPixelBuffer.deleteTexture(int)");

extern "C" {static PyObject *meth_QGLPixelBuffer_deleteTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_deleteTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLuint a0;
        QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->deleteTexture(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_deleteTexture, doc_QGLPixelBuffer_deleteTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_size, "QGLPixelBuffer.size() -> QSize");

extern "C" {static PyObject *meth_QGLPixelBuffer_size(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_size, doc_QGLPixelBuffer_size);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_handle, "QGLPixelBuffer.handle() -> sip.voidptr");

extern "C" {static PyObject *meth_QGLPixelBuffer_handle(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            Qt::HANDLE sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->handle();
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr((void *)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_handle, doc_QGLPixelBuffer_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_toImage, "QGLPixelBuffer.toImage() -> QImage");

extern "C" {static PyObject *meth_QGLPixelBuffer_toImage(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_toImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            QImage*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QImage(sipCpp->toImage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_toImage, doc_QGLPixelBuffer_toImage);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_paintEngine, "QGLPixelBuffer.paintEngine() -> QPaintEngine");

extern "C" {static PyObject *meth_QGLPixelBuffer_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            QPaintEngine*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGLPixelBuffer::paintEngine() : sipCpp->paintEngine());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_paintEngine, doc_QGLPixelBuffer_paintEngine);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_format, "QGLPixelBuffer.format() -> QGLFormat");

extern "C" {static PyObject *meth_QGLPixelBuffer_format(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            QGLFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_format, doc_QGLPixelBuffer_format);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_hasOpenGLPbuffers, "QGLPixelBuffer.hasOpenGLPbuffers() -> bool");

extern "C" {static PyObject *meth_QGLPixelBuffer_hasOpenGLPbuffers(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_hasOpenGLPbuffers(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QGLPixelBuffer::hasOpenGLPbuffers();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_hasOpenGLPbuffers, doc_QGLPixelBuffer_hasOpenGLPbuffers);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_metric, "QGLPixelBuffer.metric(QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QGLPixelBuffer_metric(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPaintDevice::PaintDeviceMetric a0;
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QGLPixelBuffer, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGLPixelBuffer::metric(a0) : sipCpp->metric(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_metric, doc_QGLPixelBuffer_metric);

    return NULL;
}


PyDoc_STRVAR(doc_QGLPixelBuffer_devType, "QGLPixelBuffer.devType() -> int");

extern "C" {static PyObject *meth_QGLPixelBuffer_devType(PyObject *, PyObject *);}
static PyObject *meth_QGLPixelBuffer_devType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLPixelBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QGLPixelBuffer, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGLPixelBuffer::devType() : sipCpp->devType());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLPixelBuffer, sipName_devType, doc_QGLPixelBuffer_devType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLPixelBuffer(void *, const sipTypeDef *);}
static void *cast_QGLPixelBuffer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGLPixelBuffer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QPaintDevice)->ctd_cast((QPaintDevice *)(QGLPixelBuffer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLPixelBuffer(void *, int);}
static void release_QGLPixelBuffer(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGLPixelBuffer *>(sipCppV);
    else
        delete reinterpret_cast<QGLPixelBuffer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGLPixelBuffer(sipSimpleWrapper *);}
static void dealloc_QGLPixelBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGLPixelBuffer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGLPixelBuffer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGLPixelBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLPixelBuffer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGLPixelBuffer *sipCpp = 0;

    {
        const QSize* a0;
        const QGLFormat& a1def = QGLFormat::defaultFormat();
        const QGLFormat* a1 = &a1def;
        QGLWidget* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
            sipName_shareWidget,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J9J8", sipType_QSize, &a0, sipType_QGLFormat, &a1, sipType_QGLWidget, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLPixelBuffer(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        const QGLFormat& a2def = QGLFormat::defaultFormat();
        const QGLFormat* a2 = &a2def;
        QGLWidget* a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_format,
            sipName_shareWidget,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|J9J8", &a0, &a1, sipType_QGLFormat, &a2, sipType_QGLWidget, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLPixelBuffer(a0,a1,*a2,a3);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGLPixelBuffer[] = {{365, 1, 1}};


static PyMethodDef methods_QGLPixelBuffer[] = {
    {SIP_MLNAME_CAST(sipName_bindTexture), (PyCFunction)meth_QGLPixelBuffer_bindTexture, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_bindTexture)},
    {SIP_MLNAME_CAST(sipName_bindToDynamicTexture), meth_QGLPixelBuffer_bindToDynamicTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_bindToDynamicTexture)},
    {SIP_MLNAME_CAST(sipName_deleteTexture), meth_QGLPixelBuffer_deleteTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_deleteTexture)},
    {SIP_MLNAME_CAST(sipName_devType), meth_QGLPixelBuffer_devType, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_devType)},
    {SIP_MLNAME_CAST(sipName_doneCurrent), meth_QGLPixelBuffer_doneCurrent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_doneCurrent)},
    {SIP_MLNAME_CAST(sipName_drawTexture), (PyCFunction)meth_QGLPixelBuffer_drawTexture, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_drawTexture)},
    {SIP_MLNAME_CAST(sipName_format), meth_QGLPixelBuffer_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_format)},
    {SIP_MLNAME_CAST(sipName_generateDynamicTexture), meth_QGLPixelBuffer_generateDynamicTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_generateDynamicTexture)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QGLPixelBuffer_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_handle)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLPbuffers), meth_QGLPixelBuffer_hasOpenGLPbuffers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_hasOpenGLPbuffers)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGLPixelBuffer_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_isValid)},
    {SIP_MLNAME_CAST(sipName_makeCurrent), meth_QGLPixelBuffer_makeCurrent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_makeCurrent)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QGLPixelBuffer_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_metric)},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QGLPixelBuffer_paintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_paintEngine)},
    {SIP_MLNAME_CAST(sipName_releaseFromDynamicTexture), meth_QGLPixelBuffer_releaseFromDynamicTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_releaseFromDynamicTexture)},
    {SIP_MLNAME_CAST(sipName_size), meth_QGLPixelBuffer_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_size)},
    {SIP_MLNAME_CAST(sipName_toImage), meth_QGLPixelBuffer_toImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_toImage)},
    {SIP_MLNAME_CAST(sipName_updateDynamicTexture), meth_QGLPixelBuffer_updateDynamicTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLPixelBuffer_updateDynamicTexture)}
};

PyDoc_STRVAR(doc_QGLPixelBuffer, "\1QGLPixelBuffer(QSize, QGLFormat format=QGLFormat.defaultFormat(), QGLWidget shareWidget=None)\n"
    "QGLPixelBuffer(int, int, QGLFormat format=QGLFormat.defaultFormat(), QGLWidget shareWidget=None)");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLPixelBuffer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLPixelBuffer,
        {0}
    },
    {
        sipNameNr_QGLPixelBuffer,
        {0, 0, 1},
        18, methods_QGLPixelBuffer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLPixelBuffer,
    -1,
    -1,
    supers_QGLPixelBuffer,
    0,
    init_type_QGLPixelBuffer,
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
    dealloc_QGLPixelBuffer,
    0,
    0,
    0,
    release_QGLPixelBuffer,
    cast_QGLPixelBuffer,
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
