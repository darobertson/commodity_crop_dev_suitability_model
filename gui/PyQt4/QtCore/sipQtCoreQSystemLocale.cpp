/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Tue Jan 20 20:27:23 2015
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

#include "sipAPIQtCore.h"

#line 1367 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 34 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQSystemLocale.cpp"

#line 35 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 38 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQSystemLocale.cpp"
#line 274 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 41 "/Users/ktaylora/PLJV/tillage_likelihood_model/gui/PyQt4/QtCore/sipQtCoreQSystemLocale.cpp"


class sipQSystemLocale : public QSystemLocale
{
public:
    sipQSystemLocale();
    sipQSystemLocale(const QSystemLocale&);
    virtual ~sipQSystemLocale();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QLocale fallbackLocale() const;
    QVariant query(QSystemLocale::QueryType,QVariant) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSystemLocale(const sipQSystemLocale &);
    sipQSystemLocale &operator = (const sipQSystemLocale &);

    char sipPyMethods[2];
};

sipQSystemLocale::sipQSystemLocale(): QSystemLocale(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemLocale::sipQSystemLocale(const QSystemLocale& a0): QSystemLocale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemLocale::~sipQSystemLocale()
{
    sipCommonDtor(sipPySelf);
}

QLocale sipQSystemLocale::fallbackLocale() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_fallbackLocale);

    if (!sipMeth)
        return QSystemLocale::fallbackLocale();

    extern QLocale sipVH_QtCore_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_29(sipGILState, 0, sipPySelf, sipMeth);
}

QVariant sipQSystemLocale::query(QSystemLocale::QueryType a0,QVariant a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_query);

    if (!sipMeth)
        return QSystemLocale::query(a0,a1);

    extern QVariant sipVH_QtCore_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QSystemLocale::QueryType,QVariant);

    return sipVH_QtCore_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QSystemLocale_query, "QSystemLocale.query(QSystemLocale.QueryType, QVariant) -> QVariant");

extern "C" {static PyObject *meth_QSystemLocale_query(PyObject *, PyObject *);}
static PyObject *meth_QSystemLocale_query(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSystemLocale::QueryType a0;
        QVariant* a1;
        int a1State = 0;
        const QSystemLocale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QSystemLocale, &sipCpp, sipType_QSystemLocale_QueryType, &a0, sipType_QVariant,&a1, &a1State))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QSystemLocale::query(a0,*a1) : sipCpp->query(a0,*a1)));
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemLocale, sipName_query, doc_QSystemLocale_query);

    return NULL;
}


PyDoc_STRVAR(doc_QSystemLocale_fallbackLocale, "QSystemLocale.fallbackLocale() -> QLocale");

extern "C" {static PyObject *meth_QSystemLocale_fallbackLocale(PyObject *, PyObject *);}
static PyObject *meth_QSystemLocale_fallbackLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSystemLocale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemLocale, &sipCpp))
        {
            QLocale*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale((sipSelfWasArg ? sipCpp->QSystemLocale::fallbackLocale() : sipCpp->fallbackLocale()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemLocale, sipName_fallbackLocale, doc_QSystemLocale_fallbackLocale);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSystemLocale(void *, const sipTypeDef *);}
static void *cast_QSystemLocale(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSystemLocale)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSystemLocale(void *, int);}
static void release_QSystemLocale(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSystemLocale *>(sipCppV);
    else
        delete reinterpret_cast<QSystemLocale *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSystemLocale(void *, SIP_SSIZE_T, const void *);}
static void assign_QSystemLocale(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSystemLocale *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSystemLocale *>(sipSrc);
}


extern "C" {static void *array_QSystemLocale(SIP_SSIZE_T);}
static void *array_QSystemLocale(SIP_SSIZE_T sipNrElem)
{
    return new QSystemLocale[sipNrElem];
}


extern "C" {static void *copy_QSystemLocale(const void *, SIP_SSIZE_T);}
static void *copy_QSystemLocale(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSystemLocale(reinterpret_cast<const QSystemLocale *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSystemLocale(sipSimpleWrapper *);}
static void dealloc_QSystemLocale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSystemLocale *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSystemLocale(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSystemLocale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSystemLocale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSystemLocale *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSystemLocale();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSystemLocale* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSystemLocale, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSystemLocale(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSystemLocale[] = {
    {SIP_MLNAME_CAST(sipName_fallbackLocale), meth_QSystemLocale_fallbackLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemLocale_fallbackLocale)},
    {SIP_MLNAME_CAST(sipName_query), meth_QSystemLocale_query, METH_VARARGS, SIP_MLDOC_CAST(doc_QSystemLocale_query)}
};

static sipEnumMemberDef enummembers_QSystemLocale[] = {
    {sipName_AMText, static_cast<int>(QSystemLocale::AMText), 210},
    {sipName_CountryId, static_cast<int>(QSystemLocale::CountryId), 210},
    {sipName_CurrencySymbol, static_cast<int>(QSystemLocale::CurrencySymbol), 210},
    {sipName_CurrencyToString, static_cast<int>(QSystemLocale::CurrencyToString), 210},
    {sipName_DateFormatLong, static_cast<int>(QSystemLocale::DateFormatLong), 210},
    {sipName_DateFormatShort, static_cast<int>(QSystemLocale::DateFormatShort), 210},
    {sipName_DateTimeFormatLong, static_cast<int>(QSystemLocale::DateTimeFormatLong), 210},
    {sipName_DateTimeFormatShort, static_cast<int>(QSystemLocale::DateTimeFormatShort), 210},
    {sipName_DateTimeToStringLong, static_cast<int>(QSystemLocale::DateTimeToStringLong), 210},
    {sipName_DateTimeToStringShort, static_cast<int>(QSystemLocale::DateTimeToStringShort), 210},
    {sipName_DateToStringLong, static_cast<int>(QSystemLocale::DateToStringLong), 210},
    {sipName_DateToStringShort, static_cast<int>(QSystemLocale::DateToStringShort), 210},
    {sipName_DayNameLong, static_cast<int>(QSystemLocale::DayNameLong), 210},
    {sipName_DayNameShort, static_cast<int>(QSystemLocale::DayNameShort), 210},
    {sipName_DecimalPoint, static_cast<int>(QSystemLocale::DecimalPoint), 210},
    {sipName_FirstDayOfWeek, static_cast<int>(QSystemLocale::FirstDayOfWeek), 210},
    {sipName_GroupSeparator, static_cast<int>(QSystemLocale::GroupSeparator), 210},
    {sipName_LanguageId, static_cast<int>(QSystemLocale::LanguageId), 210},
    {sipName_ListToSeparatedString, static_cast<int>(QSystemLocale::ListToSeparatedString), 210},
    {sipName_LocaleChanged, static_cast<int>(QSystemLocale::LocaleChanged), 210},
    {sipName_MeasurementSystem, static_cast<int>(QSystemLocale::MeasurementSystem), 210},
    {sipName_MonthNameLong, static_cast<int>(QSystemLocale::MonthNameLong), 210},
    {sipName_MonthNameShort, static_cast<int>(QSystemLocale::MonthNameShort), 210},
    {sipName_NativeCountryName, static_cast<int>(QSystemLocale::NativeCountryName), 210},
    {sipName_NativeLanguageName, static_cast<int>(QSystemLocale::NativeLanguageName), 210},
    {sipName_NegativeSign, static_cast<int>(QSystemLocale::NegativeSign), 210},
    {sipName_PMText, static_cast<int>(QSystemLocale::PMText), 210},
    {sipName_PositiveSign, static_cast<int>(QSystemLocale::PositiveSign), 210},
    {sipName_ScriptId, static_cast<int>(QSystemLocale::ScriptId), 210},
    {sipName_StringToAlternateQuotation, static_cast<int>(QSystemLocale::StringToAlternateQuotation), 210},
    {sipName_StringToStandardQuotation, static_cast<int>(QSystemLocale::StringToStandardQuotation), 210},
    {sipName_TimeFormatLong, static_cast<int>(QSystemLocale::TimeFormatLong), 210},
    {sipName_TimeFormatShort, static_cast<int>(QSystemLocale::TimeFormatShort), 210},
    {sipName_TimeToStringLong, static_cast<int>(QSystemLocale::TimeToStringLong), 210},
    {sipName_TimeToStringShort, static_cast<int>(QSystemLocale::TimeToStringShort), 210},
    {sipName_UILanguages, static_cast<int>(QSystemLocale::UILanguages), 210},
    {sipName_Weekdays, static_cast<int>(QSystemLocale::Weekdays), 210},
    {sipName_ZeroDigit, static_cast<int>(QSystemLocale::ZeroDigit), 210},
};

PyDoc_STRVAR(doc_QSystemLocale, "\1QSystemLocale()\n"
    "QSystemLocale(QSystemLocale)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QSystemLocale = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSystemLocale,
        {0}
    },
    {
        sipNameNr_QSystemLocale,
        {0, 0, 1},
        2, methods_QSystemLocale,
        38, enummembers_QSystemLocale,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSystemLocale,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSystemLocale,
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
    dealloc_QSystemLocale,
    assign_QSystemLocale,
    array_QSystemLocale,
    copy_QSystemLocale,
    release_QSystemLocale,
    cast_QSystemLocale,
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
