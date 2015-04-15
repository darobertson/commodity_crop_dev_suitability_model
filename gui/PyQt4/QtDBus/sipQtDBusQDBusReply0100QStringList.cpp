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

#include "sipAPIQtDBus.h"

#line 51 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusReply0100QStringList.cpp"

#line 56 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusReply0100QStringList.cpp"
#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusReply0100QStringList.cpp"


extern "C" {static void assign_QDBusReply_0100QStringList(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusReply_0100QStringList(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusReply<QStringList> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusReply<QStringList> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_0100QStringList(SIP_SSIZE_T);}
static void *array_QDBusReply_0100QStringList(SIP_SSIZE_T sipNrElem)
{
    return new QDBusReply<QStringList>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_0100QStringList(const void *, SIP_SSIZE_T);}
static void *copy_QDBusReply_0100QStringList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusReply<QStringList>(reinterpret_cast<const QDBusReply<QStringList> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_0100QStringList(void *, int);}
static void release_QDBusReply_0100QStringList(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QDBusReply<QStringList> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QDBusReply_0100QStringList(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_0100QStringList(PyObject *,void **,int *,PyObject *)
{
#line 89 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 83 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusReply0100QStringList.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_0100QStringList(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_0100QStringList(void *sipCppV, PyObject *sipTransferObj)
{
   QDBusReply<QStringList> *sipCpp = reinterpret_cast<QDBusReply<QStringList> *>(sipCppV);

#line 56 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtDBus/qpydbusreply.sip"
    PyObject *value_obj;

    if (sipCpp->isValid())
    {
        // Convert the value to a Python object.
        QStringList *value = new QStringList(sipCpp->value());

        if ((value_obj = sipConvertFromNewType(value, sipType_QStringList, NULL)) == NULL)
        {
            delete value;
            return NULL;
        }
    }
    else
    {
        value_obj = 0;
    }

    QPyDBusReply *reply = new QPyDBusReply(value_obj,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 123 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtDBus/sipQtDBusQDBusReply0100QStringList.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_0100QStringList = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_821,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QDBusReply_0100QStringList,
    array_QDBusReply_0100QStringList,
    copy_QDBusReply_0100QStringList,
    release_QDBusReply_0100QStringList,
    convertTo_QDBusReply_0100QStringList,
    convertFrom_QDBusReply_0100QStringList
};
