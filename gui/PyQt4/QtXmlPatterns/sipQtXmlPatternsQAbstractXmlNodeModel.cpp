/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:56 2015
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

#include "sipAPIQtXmlPatterns.h"

#line 86 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 33 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 47 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 33 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 50 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 53 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"
#line 107 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 59 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtXmlPatterns/sipQtXmlPatternsQAbstractXmlNodeModel.cpp"


class sipQAbstractXmlNodeModel : public QAbstractXmlNodeModel
{
public:
    sipQAbstractXmlNodeModel();
    virtual ~sipQAbstractXmlNodeModel();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QVector<QXmlNodeModelIndex> attributes(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&) const;
    QVector<QXmlNodeModelIndex> nodesByIdref(const QXmlName&) const;
    QXmlNodeModelIndex elementById(const QXmlName&) const;
    QVector<QXmlName> namespaceBindings(const QXmlNodeModelIndex&) const;
    QVariant typedValue(const QXmlNodeModelIndex&) const;
    QString stringValue(const QXmlNodeModelIndex&) const;
    QXmlName name(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex root(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::DocumentOrder compareOrder(const QXmlNodeModelIndex&,const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::NodeKind kind(const QXmlNodeModelIndex&) const;
    QUrl documentUri(const QXmlNodeModelIndex&) const;
    QUrl baseUri(const QXmlNodeModelIndex&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractXmlNodeModel(const sipQAbstractXmlNodeModel &);
    sipQAbstractXmlNodeModel &operator = (const sipQAbstractXmlNodeModel &);

    char sipPyMethods[13];
};

sipQAbstractXmlNodeModel::sipQAbstractXmlNodeModel(): QAbstractXmlNodeModel(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractXmlNodeModel::~sipQAbstractXmlNodeModel()
{
    sipCommonDtor(sipPySelf);
}

QVector<QXmlNodeModelIndex> sipQAbstractXmlNodeModel::attributes(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_attributes);

    if (!sipMeth)
        return QVector<QXmlNodeModelIndex>();

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQAbstractXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_nextFromSimpleAxis);

    if (!sipMeth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_10(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QVector<QXmlNodeModelIndex> sipQAbstractXmlNodeModel::nodesByIdref(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_nodesByIdref);

    if (!sipMeth)
        return QVector<QXmlNodeModelIndex>();

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    return sipVH_QtXmlPatterns_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQAbstractXmlNodeModel::elementById(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_elementById);

    if (!sipMeth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    return sipVH_QtXmlPatterns_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QVector<QXmlName> sipQAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_namespaceBindings);

    if (!sipMeth)
        return QVector<QXmlName>();

    extern QVector<QXmlName> sipVH_QtXmlPatterns_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QVariant sipQAbstractXmlNodeModel::typedValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_typedValue);

    if (!sipMeth)
        return QVariant();

    extern QVariant sipVH_QtXmlPatterns_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_11(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_stringValue);

    if (!sipMeth)
        return QString();

    extern QString sipVH_QtXmlPatterns_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlName sipQAbstractXmlNodeModel::name(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_name);

    if (!sipMeth)
        return QXmlName();

    extern QXmlName sipVH_QtXmlPatterns_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQAbstractXmlNodeModel::root(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_root);

    if (!sipMeth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex::DocumentOrder sipQAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex& a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_compareOrder);

    if (!sipMeth)
        return (QXmlNodeModelIndex::DocumentOrder)0;

    extern QXmlNodeModelIndex::DocumentOrder sipVH_QtXmlPatterns_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_14(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QXmlNodeModelIndex::NodeKind sipQAbstractXmlNodeModel::kind(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_kind);

    if (!sipMeth)
        return (QXmlNodeModelIndex::NodeKind)0;

    extern QXmlNodeModelIndex::NodeKind sipVH_QtXmlPatterns_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_15(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QUrl sipQAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_documentUri);

    if (!sipMeth)
        return QUrl();

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QUrl sipQAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QAbstractXmlNodeModel,sipName_baseUri);

    if (!sipMeth)
        return QUrl();

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_baseUri, "QAbstractXmlNodeModel.baseUri(QXmlNodeModelIndex) -> QUrl");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_baseUri(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_baseUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QUrl*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_baseUri);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->baseUri(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_baseUri, doc_QAbstractXmlNodeModel_baseUri);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_documentUri, "QAbstractXmlNodeModel.documentUri(QXmlNodeModelIndex) -> QUrl");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_documentUri(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_documentUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QUrl*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_documentUri);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->documentUri(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_documentUri, doc_QAbstractXmlNodeModel_documentUri);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_kind, "QAbstractXmlNodeModel.kind(QXmlNodeModelIndex) -> QXmlNodeModelIndex.NodeKind");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_kind(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_kind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QXmlNodeModelIndex::NodeKind sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_kind);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->kind(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QXmlNodeModelIndex_NodeKind);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_kind, doc_QAbstractXmlNodeModel_kind);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_compareOrder, "QAbstractXmlNodeModel.compareOrder(QXmlNodeModelIndex, QXmlNodeModelIndex) -> QXmlNodeModelIndex.DocumentOrder");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_compareOrder(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_compareOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QXmlNodeModelIndex* a1;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0, sipType_QXmlNodeModelIndex, &a1))
        {
            QXmlNodeModelIndex::DocumentOrder sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_compareOrder);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compareOrder(*a0,*a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QXmlNodeModelIndex_DocumentOrder);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_compareOrder, doc_QAbstractXmlNodeModel_compareOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_root, "QAbstractXmlNodeModel.root(QXmlNodeModelIndex) -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_root(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_root(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QXmlNodeModelIndex*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_root);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->root(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_root, doc_QAbstractXmlNodeModel_root);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_name, "QAbstractXmlNodeModel.name(QXmlNodeModelIndex) -> QXmlName");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_name(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QXmlName*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_name);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlName(sipCpp->name(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_name, doc_QAbstractXmlNodeModel_name);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_stringValue, "QAbstractXmlNodeModel.stringValue(QXmlNodeModelIndex) -> QString");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_stringValue(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_stringValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_stringValue);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->stringValue(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_stringValue, doc_QAbstractXmlNodeModel_stringValue);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_typedValue, "QAbstractXmlNodeModel.typedValue(QXmlNodeModelIndex) -> QVariant");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_typedValue(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_typedValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVariant*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_typedValue);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->typedValue(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_typedValue, doc_QAbstractXmlNodeModel_typedValue);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_namespaceBindings, "QAbstractXmlNodeModel.namespaceBindings(QXmlNodeModelIndex) -> list-of-QXmlName");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_namespaceBindings(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_namespaceBindings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVector<QXmlName>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_namespaceBindings);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlName>(sipCpp->namespaceBindings(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_namespaceBindings, doc_QAbstractXmlNodeModel_namespaceBindings);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_elementById, "QAbstractXmlNodeModel.elementById(QXmlName) -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_elementById(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_elementById(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QXmlNodeModelIndex*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_elementById);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->elementById(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_elementById, doc_QAbstractXmlNodeModel_elementById);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_nodesByIdref, "QAbstractXmlNodeModel.nodesByIdref(QXmlName) -> list-of-QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_nodesByIdref(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_nodesByIdref(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QVector<QXmlNodeModelIndex>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_nodesByIdref);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlNodeModelIndex>(sipCpp->nodesByIdref(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_nodesByIdref, doc_QAbstractXmlNodeModel_nodesByIdref);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_sourceLocation, "QAbstractXmlNodeModel.sourceLocation(QXmlNodeModelIndex) -> QSourceLocation");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_sourceLocation(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_sourceLocation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QSourceLocation*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSourceLocation(sipCpp->sourceLocation(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSourceLocation,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_sourceLocation, doc_QAbstractXmlNodeModel_sourceLocation);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_nextFromSimpleAxis, "QAbstractXmlNodeModel.nextFromSimpleAxis(QAbstractXmlNodeModel.SimpleAxis, QXmlNodeModelIndex) -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_nextFromSimpleAxis(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_nextFromSimpleAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlNodeModel::SimpleAxis a0;
        const QXmlNodeModelIndex* a1;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pEJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QAbstractXmlNodeModel_SimpleAxis, &a0, sipType_QXmlNodeModelIndex, &a1))
        {
            QXmlNodeModelIndex*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_nextFromSimpleAxis);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->nextFromSimpleAxis(a0,*a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_nextFromSimpleAxis, doc_QAbstractXmlNodeModel_nextFromSimpleAxis);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_attributes, "QAbstractXmlNodeModel.attributes(QXmlNodeModelIndex) -> list-of-QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_attributes(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex* a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVector<QXmlNodeModelIndex>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlNodeModel, sipName_attributes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlNodeModelIndex>(sipCpp->attributes(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_attributes, doc_QAbstractXmlNodeModel_attributes);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlNodeModel_createIndex, "QAbstractXmlNodeModel.createIndex(int) -> QXmlNodeModelIndex\n"
    "QAbstractXmlNodeModel.createIndex(int, int) -> QXmlNodeModelIndex\n"
    "QAbstractXmlNodeModel.createIndex(object, int additionalData=0) -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QAbstractXmlNodeModel_createIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlNodeModel_createIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "pn", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, &a0))
        {
            QXmlNodeModelIndex*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->createIndex(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    {
        qint64 a0;
        qint64 a1;
        const QAbstractXmlNodeModel *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "pnn", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, &a0, &a1))
        {
            QXmlNodeModelIndex*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->createIndex(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    {
        PyObject * a0;
        qint64 a1 = 0;
        const QAbstractXmlNodeModel *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_additionalData,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "pP0|n", &sipSelf, sipType_QAbstractXmlNodeModel, &sipCpp, &a0, &a1))
        {
            QXmlNodeModelIndex*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->createIndex(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlNodeModel, sipName_createIndex, doc_QAbstractXmlNodeModel_createIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractXmlNodeModel(void *, const sipTypeDef *);}
static void *cast_QAbstractXmlNodeModel(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractXmlNodeModel)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractXmlNodeModel(void *, int);}
static void release_QAbstractXmlNodeModel(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractXmlNodeModel *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractXmlNodeModel *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractXmlNodeModel(sipSimpleWrapper *);}
static void dealloc_QAbstractXmlNodeModel(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractXmlNodeModel *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractXmlNodeModel(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractXmlNodeModel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractXmlNodeModel(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractXmlNodeModel *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractXmlNodeModel();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractXmlNodeModel[] = {
    {SIP_MLNAME_CAST(sipName_attributes), meth_QAbstractXmlNodeModel_attributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_attributes)},
    {SIP_MLNAME_CAST(sipName_baseUri), meth_QAbstractXmlNodeModel_baseUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_baseUri)},
    {SIP_MLNAME_CAST(sipName_compareOrder), meth_QAbstractXmlNodeModel_compareOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_compareOrder)},
    {SIP_MLNAME_CAST(sipName_createIndex), (PyCFunction)meth_QAbstractXmlNodeModel_createIndex, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_createIndex)},
    {SIP_MLNAME_CAST(sipName_documentUri), meth_QAbstractXmlNodeModel_documentUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_documentUri)},
    {SIP_MLNAME_CAST(sipName_elementById), meth_QAbstractXmlNodeModel_elementById, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_elementById)},
    {SIP_MLNAME_CAST(sipName_kind), meth_QAbstractXmlNodeModel_kind, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_kind)},
    {SIP_MLNAME_CAST(sipName_name), meth_QAbstractXmlNodeModel_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_name)},
    {SIP_MLNAME_CAST(sipName_namespaceBindings), meth_QAbstractXmlNodeModel_namespaceBindings, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_namespaceBindings)},
    {SIP_MLNAME_CAST(sipName_nextFromSimpleAxis), meth_QAbstractXmlNodeModel_nextFromSimpleAxis, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_nextFromSimpleAxis)},
    {SIP_MLNAME_CAST(sipName_nodesByIdref), meth_QAbstractXmlNodeModel_nodesByIdref, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_nodesByIdref)},
    {SIP_MLNAME_CAST(sipName_root), meth_QAbstractXmlNodeModel_root, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_root)},
    {SIP_MLNAME_CAST(sipName_sourceLocation), meth_QAbstractXmlNodeModel_sourceLocation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_sourceLocation)},
    {SIP_MLNAME_CAST(sipName_stringValue), meth_QAbstractXmlNodeModel_stringValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_stringValue)},
    {SIP_MLNAME_CAST(sipName_typedValue), meth_QAbstractXmlNodeModel_typedValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlNodeModel_typedValue)}
};

static sipEnumMemberDef enummembers_QAbstractXmlNodeModel[] = {
    {sipName_FirstChild, static_cast<int>(QAbstractXmlNodeModel::FirstChild), 3},
    {sipName_NextSibling, static_cast<int>(QAbstractXmlNodeModel::NextSibling), 3},
    {sipName_Parent, static_cast<int>(QAbstractXmlNodeModel::Parent), 3},
    {sipName_PreviousSibling, static_cast<int>(QAbstractXmlNodeModel::PreviousSibling), 3},
};

PyDoc_STRVAR(doc_QAbstractXmlNodeModel, "\1QAbstractXmlNodeModel()");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractXmlNodeModel = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractXmlNodeModel,
        {0}
    },
    {
        sipNameNr_QAbstractXmlNodeModel,
        {0, 0, 1},
        15, methods_QAbstractXmlNodeModel,
        4, enummembers_QAbstractXmlNodeModel,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractXmlNodeModel,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractXmlNodeModel,
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
    dealloc_QAbstractXmlNodeModel,
    0,
    0,
    0,
    release_QAbstractXmlNodeModel,
    cast_QAbstractXmlNodeModel,
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
