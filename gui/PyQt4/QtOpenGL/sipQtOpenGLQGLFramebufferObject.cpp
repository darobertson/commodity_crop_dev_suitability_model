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

#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglframebufferobject.sip"
#include <qglframebufferobject.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"

#line 35 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 122 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtOpenGL/qglframebufferobject.sip"
#include <qglframebufferobject.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 35 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 31 "sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 61 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 35 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 168 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"
#line 119 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtOpenGL/sipQtOpenGLQGLFramebufferObject.cpp"


class sipQGLFramebufferObject : public QGLFramebufferObject
{
public:
    sipQGLFramebufferObject(const QSize&,GLenum);
    sipQGLFramebufferObject(int,int,GLenum);
    sipQGLFramebufferObject(const QSize&,QGLFramebufferObject::Attachment,GLenum,GLenum);
    sipQGLFramebufferObject(int,int,QGLFramebufferObject::Attachment,GLenum,GLenum);
    sipQGLFramebufferObject(const QSize&,const QGLFramebufferObjectFormat&);
    sipQGLFramebufferObject(int,int,const QGLFramebufferObjectFormat&);
    virtual ~sipQGLFramebufferObject();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGLFramebufferObject(const sipQGLFramebufferObject &);
    sipQGLFramebufferObject &operator = (const sipQGLFramebufferObject &);

    char sipPyMethods[2];
};

sipQGLFramebufferObject::sipQGLFramebufferObject(const QSize& a0,GLenum a1): QGLFramebufferObject(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::sipQGLFramebufferObject(int a0,int a1,GLenum a2): QGLFramebufferObject(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::sipQGLFramebufferObject(const QSize& a0,QGLFramebufferObject::Attachment a1,GLenum a2,GLenum a3): QGLFramebufferObject(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::sipQGLFramebufferObject(int a0,int a1,QGLFramebufferObject::Attachment a2,GLenum a3,GLenum a4): QGLFramebufferObject(a0,a1,a2,a3,a4), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::sipQGLFramebufferObject(const QSize& a0,const QGLFramebufferObjectFormat& a1): QGLFramebufferObject(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::sipQGLFramebufferObject(int a0,int a1,const QGLFramebufferObjectFormat& a2): QGLFramebufferObject(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLFramebufferObject::~sipQGLFramebufferObject()
{
    sipCommonDtor(sipPySelf);
}

int sipQGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QGLFramebufferObject::metric(a0);

    typedef int (*sipVH_QtGui_14)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return ((sipVH_QtGui_14)(sipModuleAPI_QtOpenGL_QtGui->em_virthandlers[14]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQGLFramebufferObject::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return QGLFramebufferObject::paintEngine();

    typedef QPaintEngine* (*sipVH_QtGui_27)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtGui_27)(sipModuleAPI_QtOpenGL_QtGui->em_virthandlers[27]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QGLFramebufferObject_attachment, "QGLFramebufferObject.attachment() -> QGLFramebufferObject.Attachment");

extern "C" {static PyObject *meth_QGLFramebufferObject_attachment(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_attachment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            QGLFramebufferObject::Attachment sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->attachment();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QGLFramebufferObject_Attachment);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_attachment, doc_QGLFramebufferObject_attachment);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_isValid, "QGLFramebufferObject.isValid() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_isValid, doc_QGLFramebufferObject_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_bind, "QGLFramebufferObject.bind() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_bind(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bind();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_bind, doc_QGLFramebufferObject_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_isBound, "QGLFramebufferObject.isBound() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_isBound(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_isBound(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isBound();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_isBound, doc_QGLFramebufferObject_isBound);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_release, "QGLFramebufferObject.release() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_release(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->release();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_release, doc_QGLFramebufferObject_release);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_texture, "QGLFramebufferObject.texture() -> int");

extern "C" {static PyObject *meth_QGLFramebufferObject_texture(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->texture();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_texture, doc_QGLFramebufferObject_texture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_drawTexture, "QGLFramebufferObject.drawTexture(QRectF, int, int textureTarget=GL_TEXTURE_2D)\n"
    "QGLFramebufferObject.drawTexture(QPointF, int, int textureTarget=GL_TEXTURE_2D)");

extern "C" {static PyObject *meth_QGLFramebufferObject_drawTexture(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_drawTexture(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        GLuint a1;
        GLenum a2 = GL_TEXTURE_2D;
        QGLFramebufferObject *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9u|u", &sipSelf, sipType_QGLFramebufferObject, &sipCpp, sipType_QRectF, &a0, &a1, &a2))
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
        QGLFramebufferObject *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1u|u", &sipSelf, sipType_QGLFramebufferObject, &sipCpp, sipType_QPointF, &a0, &a0State, &a1, &a2))
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
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_drawTexture, doc_QGLFramebufferObject_drawTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_size, "QGLFramebufferObject.size() -> QSize");

extern "C" {static PyObject *meth_QGLFramebufferObject_size(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_size, doc_QGLFramebufferObject_size);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_toImage, "QGLFramebufferObject.toImage() -> QImage");

extern "C" {static PyObject *meth_QGLFramebufferObject_toImage(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_toImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            QImage*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QImage(sipCpp->toImage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_toImage, doc_QGLFramebufferObject_toImage);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_paintEngine, "QGLFramebufferObject.paintEngine() -> QPaintEngine");

extern "C" {static PyObject *meth_QGLFramebufferObject_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            QPaintEngine*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGLFramebufferObject::paintEngine() : sipCpp->paintEngine());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_paintEngine, doc_QGLFramebufferObject_paintEngine);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_handle, "QGLFramebufferObject.handle() -> int");

extern "C" {static PyObject *meth_QGLFramebufferObject_handle(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            GLuint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->handle();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_handle, doc_QGLFramebufferObject_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_hasOpenGLFramebufferObjects, "QGLFramebufferObject.hasOpenGLFramebufferObjects() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_hasOpenGLFramebufferObjects(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_hasOpenGLFramebufferObjects(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QGLFramebufferObject::hasOpenGLFramebufferObjects();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_hasOpenGLFramebufferObjects, doc_QGLFramebufferObject_hasOpenGLFramebufferObjects);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_metric, "QGLFramebufferObject.metric(QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QGLFramebufferObject_metric(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPaintDevice::PaintDeviceMetric a0;
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QGLFramebufferObject, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGLFramebufferObject::metric(a0) : sipCpp->metric(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_metric, doc_QGLFramebufferObject_metric);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_format, "QGLFramebufferObject.format() -> QGLFramebufferObjectFormat");

extern "C" {static PyObject *meth_QGLFramebufferObject_format(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObject, &sipCpp))
        {
            QGLFramebufferObjectFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLFramebufferObjectFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLFramebufferObjectFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_format, doc_QGLFramebufferObject_format);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_hasOpenGLFramebufferBlit, "QGLFramebufferObject.hasOpenGLFramebufferBlit() -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObject_hasOpenGLFramebufferBlit(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_hasOpenGLFramebufferBlit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QGLFramebufferObject::hasOpenGLFramebufferBlit();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_hasOpenGLFramebufferBlit, doc_QGLFramebufferObject_hasOpenGLFramebufferBlit);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObject_blitFramebuffer, "QGLFramebufferObject.blitFramebuffer(QGLFramebufferObject, QRect, QGLFramebufferObject, QRect, int buffers=GL_COLOR_BUFFER_BIT, int filter=GL_NEAREST)");

extern "C" {static PyObject *meth_QGLFramebufferObject_blitFramebuffer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObject_blitFramebuffer(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFramebufferObject* a0;
        const QRect* a1;
        QGLFramebufferObject* a2;
        const QRect* a3;
        GLbitfield a4 = GL_COLOR_BUFFER_BIT;
        GLenum a5 = GL_NEAREST;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_buffers,
            sipName_filter,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8J9J8J9|uu", sipType_QGLFramebufferObject, &a0, sipType_QRect, &a1, sipType_QGLFramebufferObject, &a2, sipType_QRect, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            QGLFramebufferObject::blitFramebuffer(a0,*a1,a2,*a3,a4,a5);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObject, sipName_blitFramebuffer, doc_QGLFramebufferObject_blitFramebuffer);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLFramebufferObject(void *, const sipTypeDef *);}
static void *cast_QGLFramebufferObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGLFramebufferObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QPaintDevice)->ctd_cast((QPaintDevice *)(QGLFramebufferObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLFramebufferObject(void *, int);}
static void release_QGLFramebufferObject(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGLFramebufferObject *>(sipCppV);
    else
        delete reinterpret_cast<QGLFramebufferObject *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGLFramebufferObject(sipSimpleWrapper *);}
static void dealloc_QGLFramebufferObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGLFramebufferObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGLFramebufferObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGLFramebufferObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLFramebufferObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGLFramebufferObject *sipCpp = 0;

    {
        const QSize* a0;
        GLenum a1 = GL_TEXTURE_2D;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|u", sipType_QSize, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(*a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        GLenum a2 = GL_TEXTURE_2D;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_target,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|u", &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(a0,a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;
        QGLFramebufferObject::Attachment a1;
        GLenum a2 = GL_TEXTURE_2D;
        GLenum a3 = GL_RGBA8;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_target,
            sipName_internalFormat,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9E|uu", sipType_QSize, &a0, sipType_QGLFramebufferObject_Attachment, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(*a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        QGLFramebufferObject::Attachment a2;
        GLenum a3 = GL_TEXTURE_2D;
        GLenum a4 = GL_RGBA8;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_target,
            sipName_internalFormat,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiE|uu", &a0, &a1, sipType_QGLFramebufferObject_Attachment, &a2, &a3, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(a0,a1,a2,a3,a4);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSize* a0;
        const QGLFramebufferObjectFormat* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QSize, &a0, sipType_QGLFramebufferObjectFormat, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        const QGLFramebufferObjectFormat* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iiJ9", &a0, &a1, sipType_QGLFramebufferObjectFormat, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGLFramebufferObject(a0,a1,*a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGLFramebufferObject[] = {{365, 1, 1}};


static PyMethodDef methods_QGLFramebufferObject[] = {
    {SIP_MLNAME_CAST(sipName_attachment), meth_QGLFramebufferObject_attachment, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_attachment)},
    {SIP_MLNAME_CAST(sipName_bind), meth_QGLFramebufferObject_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_bind)},
    {SIP_MLNAME_CAST(sipName_blitFramebuffer), (PyCFunction)meth_QGLFramebufferObject_blitFramebuffer, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_blitFramebuffer)},
    {SIP_MLNAME_CAST(sipName_drawTexture), (PyCFunction)meth_QGLFramebufferObject_drawTexture, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_drawTexture)},
    {SIP_MLNAME_CAST(sipName_format), meth_QGLFramebufferObject_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_format)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QGLFramebufferObject_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_handle)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLFramebufferBlit), meth_QGLFramebufferObject_hasOpenGLFramebufferBlit, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_hasOpenGLFramebufferBlit)},
    {SIP_MLNAME_CAST(sipName_hasOpenGLFramebufferObjects), meth_QGLFramebufferObject_hasOpenGLFramebufferObjects, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_hasOpenGLFramebufferObjects)},
    {SIP_MLNAME_CAST(sipName_isBound), meth_QGLFramebufferObject_isBound, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_isBound)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGLFramebufferObject_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_isValid)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QGLFramebufferObject_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_metric)},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QGLFramebufferObject_paintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_paintEngine)},
    {SIP_MLNAME_CAST(sipName_release), meth_QGLFramebufferObject_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_release)},
    {SIP_MLNAME_CAST(sipName_size), meth_QGLFramebufferObject_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_size)},
    {SIP_MLNAME_CAST(sipName_texture), meth_QGLFramebufferObject_texture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_texture)},
    {SIP_MLNAME_CAST(sipName_toImage), meth_QGLFramebufferObject_toImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObject_toImage)}
};

static sipEnumMemberDef enummembers_QGLFramebufferObject[] = {
    {sipName_CombinedDepthStencil, static_cast<int>(QGLFramebufferObject::CombinedDepthStencil), 16},
    {sipName_Depth, static_cast<int>(QGLFramebufferObject::Depth), 16},
    {sipName_NoAttachment, static_cast<int>(QGLFramebufferObject::NoAttachment), 16},
};

PyDoc_STRVAR(doc_QGLFramebufferObject, "\1QGLFramebufferObject(QSize, int target=GL_TEXTURE_2D)\n"
    "QGLFramebufferObject(int, int, int target=GL_TEXTURE_2D)\n"
    "QGLFramebufferObject(QSize, QGLFramebufferObject.Attachment, int target=GL_TEXTURE_2D, int internalFormat=GL_RGBA8)\n"
    "QGLFramebufferObject(int, int, QGLFramebufferObject.Attachment, int target=GL_TEXTURE_2D, int internalFormat=GL_RGBA8)\n"
    "QGLFramebufferObject(QSize, QGLFramebufferObjectFormat)\n"
    "QGLFramebufferObject(int, int, QGLFramebufferObjectFormat)");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLFramebufferObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLFramebufferObject,
        {0}
    },
    {
        sipNameNr_QGLFramebufferObject,
        {0, 0, 1},
        16, methods_QGLFramebufferObject,
        3, enummembers_QGLFramebufferObject,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLFramebufferObject,
    -1,
    -1,
    supers_QGLFramebufferObject,
    0,
    init_type_QGLFramebufferObject,
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
    dealloc_QGLFramebufferObject,
    0,
    0,
    0,
    release_QGLFramebufferObject,
    cast_QGLFramebufferObject,
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
