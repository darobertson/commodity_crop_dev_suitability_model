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

#include "sipAPIQtNetwork.h"

#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"
#line 33 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 44 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtNetwork/sipQtNetworkQNetworkConfiguration.cpp"


PyDoc_STRVAR(doc_QNetworkConfiguration_state, "QNetworkConfiguration.state() -> QNetworkConfiguration.StateFlags");

extern "C" {static PyObject *meth_QNetworkConfiguration_state(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::StateFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkConfiguration::StateFlags(sipCpp->state());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_state, doc_QNetworkConfiguration_state);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_type, "QNetworkConfiguration.type() -> QNetworkConfiguration.Type");

extern "C" {static PyObject *meth_QNetworkConfiguration_type(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_type, doc_QNetworkConfiguration_type);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_purpose, "QNetworkConfiguration.purpose() -> QNetworkConfiguration.Purpose");

extern "C" {static PyObject *meth_QNetworkConfiguration_purpose(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_purpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::Purpose sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->purpose();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_Purpose);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_purpose, doc_QNetworkConfiguration_purpose);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerName, "QNetworkConfiguration.bearerName() -> QString");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->bearerName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerName, doc_QNetworkConfiguration_bearerName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerType, "QNetworkConfiguration.bearerType() -> QNetworkConfiguration.BearerType");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::BearerType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bearerType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_BearerType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerType, doc_QNetworkConfiguration_bearerType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_bearerTypeName, "QNetworkConfiguration.bearerTypeName() -> QString");

extern "C" {static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->bearerTypeName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerTypeName, doc_QNetworkConfiguration_bearerTypeName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_identifier, "QNetworkConfiguration.identifier() -> QString");

extern "C" {static PyObject *meth_QNetworkConfiguration_identifier(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_identifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->identifier());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_identifier, doc_QNetworkConfiguration_identifier);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_isRoamingAvailable, "QNetworkConfiguration.isRoamingAvailable() -> bool");

extern "C" {static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isRoamingAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isRoamingAvailable, doc_QNetworkConfiguration_isRoamingAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_children, "QNetworkConfiguration.children() -> list-of-QNetworkConfiguration");

extern "C" {static PyObject *meth_QNetworkConfiguration_children(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_children(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QList<QNetworkConfiguration>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkConfiguration>(sipCpp->children());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_children, doc_QNetworkConfiguration_children);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_name, "QNetworkConfiguration.name() -> QString");

extern "C" {static PyObject *meth_QNetworkConfiguration_name(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_name, doc_QNetworkConfiguration_name);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkConfiguration_isValid, "QNetworkConfiguration.isValid() -> bool");

extern "C" {static PyObject *meth_QNetworkConfiguration_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isValid, doc_QNetworkConfiguration_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkConfiguration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration *sipCpp = reinterpret_cast<QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkConfiguration::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkConfiguration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkConfiguration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration *sipCpp = reinterpret_cast<QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkConfiguration::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkConfiguration,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkConfiguration(void *, const sipTypeDef *);}
static void *cast_QNetworkConfiguration(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkConfiguration)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkConfiguration(void *, int);}
static void release_QNetworkConfiguration(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkConfiguration *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkConfiguration(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkConfiguration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkConfiguration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkConfiguration *>(sipSrc);
}


extern "C" {static void *array_QNetworkConfiguration(SIP_SSIZE_T);}
static void *array_QNetworkConfiguration(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkConfiguration[sipNrElem];
}


extern "C" {static void *copy_QNetworkConfiguration(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkConfiguration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkConfiguration(reinterpret_cast<const QNetworkConfiguration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkConfiguration(sipSimpleWrapper *);}
static void dealloc_QNetworkConfiguration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkConfiguration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkConfiguration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkConfiguration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkConfiguration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkConfiguration();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkConfiguration(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkConfiguration[] = {
    {(void *)slot_QNetworkConfiguration___ne__, ne_slot},
    {(void *)slot_QNetworkConfiguration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkConfiguration[] = {
    {SIP_MLNAME_CAST(sipName_bearerName), meth_QNetworkConfiguration_bearerName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_bearerName)},
    {SIP_MLNAME_CAST(sipName_bearerType), meth_QNetworkConfiguration_bearerType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_bearerType)},
    {SIP_MLNAME_CAST(sipName_bearerTypeName), meth_QNetworkConfiguration_bearerTypeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_bearerTypeName)},
    {SIP_MLNAME_CAST(sipName_children), meth_QNetworkConfiguration_children, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_children)},
    {SIP_MLNAME_CAST(sipName_identifier), meth_QNetworkConfiguration_identifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_identifier)},
    {SIP_MLNAME_CAST(sipName_isRoamingAvailable), meth_QNetworkConfiguration_isRoamingAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_isRoamingAvailable)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkConfiguration_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_isValid)},
    {SIP_MLNAME_CAST(sipName_name), meth_QNetworkConfiguration_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_name)},
    {SIP_MLNAME_CAST(sipName_purpose), meth_QNetworkConfiguration_purpose, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_purpose)},
    {SIP_MLNAME_CAST(sipName_state), meth_QNetworkConfiguration_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_state)},
    {SIP_MLNAME_CAST(sipName_type), meth_QNetworkConfiguration_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkConfiguration_type)}
};

static sipEnumMemberDef enummembers_QNetworkConfiguration[] = {
    {sipName_Active, static_cast<int>(QNetworkConfiguration::Active), 51},
    {sipName_Bearer2G, static_cast<int>(QNetworkConfiguration::Bearer2G), 49},
    {sipName_BearerBluetooth, static_cast<int>(QNetworkConfiguration::BearerBluetooth), 49},
    {sipName_BearerCDMA2000, static_cast<int>(QNetworkConfiguration::BearerCDMA2000), 49},
    {sipName_BearerEthernet, static_cast<int>(QNetworkConfiguration::BearerEthernet), 49},
    {sipName_BearerHSPA, static_cast<int>(QNetworkConfiguration::BearerHSPA), 49},
    {sipName_BearerUnknown, static_cast<int>(QNetworkConfiguration::BearerUnknown), 49},
    {sipName_BearerWCDMA, static_cast<int>(QNetworkConfiguration::BearerWCDMA), 49},
    {sipName_BearerWLAN, static_cast<int>(QNetworkConfiguration::BearerWLAN), 49},
    {sipName_BearerWiMAX, static_cast<int>(QNetworkConfiguration::BearerWiMAX), 49},
    {sipName_Defined, static_cast<int>(QNetworkConfiguration::Defined), 51},
    {sipName_Discovered, static_cast<int>(QNetworkConfiguration::Discovered), 51},
    {sipName_InternetAccessPoint, static_cast<int>(QNetworkConfiguration::InternetAccessPoint), 53},
    {sipName_Invalid, static_cast<int>(QNetworkConfiguration::Invalid), 53},
    {sipName_PrivatePurpose, static_cast<int>(QNetworkConfiguration::PrivatePurpose), 50},
    {sipName_PublicPurpose, static_cast<int>(QNetworkConfiguration::PublicPurpose), 50},
    {sipName_ServiceNetwork, static_cast<int>(QNetworkConfiguration::ServiceNetwork), 53},
    {sipName_ServiceSpecificPurpose, static_cast<int>(QNetworkConfiguration::ServiceSpecificPurpose), 50},
    {sipName_Undefined, static_cast<int>(QNetworkConfiguration::Undefined), 51},
    {sipName_UnknownPurpose, static_cast<int>(QNetworkConfiguration::UnknownPurpose), 50},
    {sipName_UserChoice, static_cast<int>(QNetworkConfiguration::UserChoice), 53},
};

PyDoc_STRVAR(doc_QNetworkConfiguration, "\1QNetworkConfiguration()\n"
    "QNetworkConfiguration(QNetworkConfiguration)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkConfiguration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkConfiguration,
        {0}
    },
    {
        sipNameNr_QNetworkConfiguration,
        {0, 0, 1},
        11, methods_QNetworkConfiguration,
        21, enummembers_QNetworkConfiguration,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkConfiguration,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkConfiguration,
    init_type_QNetworkConfiguration,
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
    dealloc_QNetworkConfiguration,
    assign_QNetworkConfiguration,
    array_QNetworkConfiguration,
    copy_QNetworkConfiguration,
    release_QNetworkConfiguration,
    cast_QNetworkConfiguration,
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
