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

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDeclarative/qdeclarativepropertyvaluesource.sip"
#include <qdeclarativepropertyvaluesource.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativePropertyValueSource.cpp"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDeclarative/qdeclarativeproperty.sip"
#include <qdeclarativeproperty.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDeclarative/sipQtDeclarativeQDeclarativePropertyValueSource.cpp"


class sipQDeclarativePropertyValueSource : public QDeclarativePropertyValueSource
{
public:
    sipQDeclarativePropertyValueSource();
    sipQDeclarativePropertyValueSource(const QDeclarativePropertyValueSource&);
    virtual ~sipQDeclarativePropertyValueSource();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setTarget(const QDeclarativeProperty&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativePropertyValueSource(const sipQDeclarativePropertyValueSource &);
    sipQDeclarativePropertyValueSource &operator = (const sipQDeclarativePropertyValueSource &);

    char sipPyMethods[1];
};

sipQDeclarativePropertyValueSource::sipQDeclarativePropertyValueSource(): QDeclarativePropertyValueSource(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativePropertyValueSource::sipQDeclarativePropertyValueSource(const QDeclarativePropertyValueSource& a0): QDeclarativePropertyValueSource(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativePropertyValueSource::~sipQDeclarativePropertyValueSource()
{
    sipCommonDtor(sipPySelf);
}

void sipQDeclarativePropertyValueSource::setTarget(const QDeclarativeProperty& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDeclarativePropertyValueSource,sipName_setTarget);

    if (!sipMeth)
        return;

    extern void sipVH_QtDeclarative_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QDeclarativeProperty&);

    sipVH_QtDeclarative_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDeclarativePropertyValueSource_setTarget, "QDeclarativePropertyValueSource.setTarget(QDeclarativeProperty)");

extern "C" {static PyObject *meth_QDeclarativePropertyValueSource_setTarget(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativePropertyValueSource_setTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDeclarativeProperty* a0;
        QDeclarativePropertyValueSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDeclarativePropertyValueSource, &sipCpp, sipType_QDeclarativeProperty, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativePropertyValueSource, sipName_setTarget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTarget(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativePropertyValueSource, sipName_setTarget, doc_QDeclarativePropertyValueSource_setTarget);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativePropertyValueSource(void *, const sipTypeDef *);}
static void *cast_QDeclarativePropertyValueSource(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDeclarativePropertyValueSource)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativePropertyValueSource(void *, int);}
static void release_QDeclarativePropertyValueSource(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDeclarativePropertyValueSource *>(sipCppV);
    else
        delete reinterpret_cast<QDeclarativePropertyValueSource *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativePropertyValueSource(sipSimpleWrapper *);}
static void dealloc_QDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDeclarativePropertyValueSource *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativePropertyValueSource(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDeclarativePropertyValueSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativePropertyValueSource(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDeclarativePropertyValueSource *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativePropertyValueSource();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDeclarativePropertyValueSource* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativePropertyValueSource, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativePropertyValueSource(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativePropertyValueSource[] = {
    {SIP_MLNAME_CAST(sipName_setTarget), meth_QDeclarativePropertyValueSource_setTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativePropertyValueSource_setTarget)}
};

PyDoc_STRVAR(doc_QDeclarativePropertyValueSource, "\1QDeclarativePropertyValueSource()\n"
    "QDeclarativePropertyValueSource(QDeclarativePropertyValueSource)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativePropertyValueSource = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativePropertyValueSource,
        {0}
    },
    {
        sipNameNr_QDeclarativePropertyValueSource,
        {0, 0, 1},
        1, methods_QDeclarativePropertyValueSource,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativePropertyValueSource,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativePropertyValueSource,
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
    dealloc_QDeclarativePropertyValueSource,
    0,
    0,
    0,
    release_QDeclarativePropertyValueSource,
    cast_QDeclarativePropertyValueSource,
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
