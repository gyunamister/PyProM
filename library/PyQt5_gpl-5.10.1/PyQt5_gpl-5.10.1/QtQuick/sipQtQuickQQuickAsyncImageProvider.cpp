/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtQuick.h"

#line 84 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtQuick/qquickimageprovider.sip"
#include <qquickimageprovider.h>
#line 29 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"

#line 62 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtQuick/qquickimageprovider.sip"
#include <qquickimageprovider.h>
#line 33 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtQuick/qquickimageprovider.sip"
#include <qquickimageprovider.h>
#line 42 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 45 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 48 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 51 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"
#line 26 "sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 54 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtQuick/sipQtQuickQQuickAsyncImageProvider.cpp"


class sipQQuickAsyncImageProvider : public  ::QQuickAsyncImageProvider
{
public:
    sipQQuickAsyncImageProvider();
    sipQQuickAsyncImageProvider(const  ::QQuickAsyncImageProvider&);
    virtual ~sipQQuickAsyncImageProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QQuickImageResponse* requestImageResponse(const  ::QString&,const  ::QSize&);
     ::QQmlImageProviderBase::Flags flags() const;
     ::QQmlImageProviderBase::ImageType imageType() const;
     ::QImage requestImage(const  ::QString&, ::QSize*,const  ::QSize&);
     ::QPixmap requestPixmap(const  ::QString&, ::QSize*,const  ::QSize&);
     ::QQuickTextureFactory* requestTexture(const  ::QString&, ::QSize*,const  ::QSize&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQuickAsyncImageProvider(const sipQQuickAsyncImageProvider &);
    sipQQuickAsyncImageProvider &operator = (const sipQQuickAsyncImageProvider &);

    char sipPyMethods[6];
};

sipQQuickAsyncImageProvider::sipQQuickAsyncImageProvider():  ::QQuickAsyncImageProvider(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickAsyncImageProvider::sipQQuickAsyncImageProvider(const  ::QQuickAsyncImageProvider& a0):  ::QQuickAsyncImageProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickAsyncImageProvider::~sipQQuickAsyncImageProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QQuickImageResponse* sipQQuickAsyncImageProvider::requestImageResponse(const  ::QString& a0,const  ::QSize& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QQuickAsyncImageProvider,sipName_requestImageResponse);

    if (!sipMeth)
        return 0;

    extern  ::QQuickImageResponse* sipVH_QtQuick_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QSize&);

    return sipVH_QtQuick_40(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

 ::QQmlImageProviderBase::Flags sipQQuickAsyncImageProvider::flags() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_flags);

    if (!sipMeth)
        return  ::QQuickAsyncImageProvider::flags();

    extern  ::QQmlImageProviderBase::Flags sipVH_QtQuick_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_33(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QQmlImageProviderBase::ImageType sipQQuickAsyncImageProvider::imageType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_imageType);

    if (!sipMeth)
        return  ::QQuickAsyncImageProvider::imageType();

    extern  ::QQmlImageProviderBase::ImageType sipVH_QtQuick_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_34(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QImage sipQQuickAsyncImageProvider::requestImage(const  ::QString& a0, ::QSize*a1,const  ::QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_requestImage);

    if (!sipMeth)
        return  ::QQuickAsyncImageProvider::requestImage(a0,a1,a2);

    extern  ::QImage sipVH_QtQuick_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::QSize*,const  ::QSize&);

    return sipVH_QtQuick_35(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QPixmap sipQQuickAsyncImageProvider::requestPixmap(const  ::QString& a0, ::QSize*a1,const  ::QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_requestPixmap);

    if (!sipMeth)
        return  ::QQuickAsyncImageProvider::requestPixmap(a0,a1,a2);

    extern  ::QPixmap sipVH_QtQuick_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::QSize*,const  ::QSize&);

    return sipVH_QtQuick_36(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QQuickTextureFactory* sipQQuickAsyncImageProvider::requestTexture(const  ::QString& a0, ::QSize*a1,const  ::QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_requestTexture);

    if (!sipMeth)
        return  ::QQuickAsyncImageProvider::requestTexture(a0,a1,a2);

    extern  ::QQuickTextureFactory* sipVH_QtQuick_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::QSize*,const  ::QSize&);

    return sipVH_QtQuick_37(sipGILState, sipImportedVirtErrorHandlers_QtQuick_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QQuickAsyncImageProvider_requestImageResponse, "requestImageResponse(self, str, QSize) -> QQuickImageResponse");

extern "C" {static PyObject *meth_QQuickAsyncImageProvider_requestImageResponse(PyObject *, PyObject *);}
static PyObject *meth_QQuickAsyncImageProvider_requestImageResponse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSize* a1;
         ::QQuickAsyncImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QQuickAsyncImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1))
        {
             ::QQuickImageResponse*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QQuickAsyncImageProvider, sipName_requestImageResponse);
                return NULL;
            }

            sipRes = sipCpp->requestImageResponse(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QQuickImageResponse,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickAsyncImageProvider, sipName_requestImageResponse, doc_QQuickAsyncImageProvider_requestImageResponse);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QQuickAsyncImageProvider(void *, const sipTypeDef *);}
static void *cast_QQuickAsyncImageProvider(void *sipCppV, const sipTypeDef *targetType)
{
     ::QQuickAsyncImageProvider *sipCpp = reinterpret_cast< ::QQuickAsyncImageProvider *>(sipCppV);

    if (targetType == sipType_QQuickImageProvider)
        return static_cast< ::QQuickImageProvider *>(sipCpp);

    if (targetType == sipType_QQmlImageProviderBase)
        return static_cast< ::QQmlImageProviderBase *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickAsyncImageProvider(void *, int);}
static void release_QQuickAsyncImageProvider(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQuickAsyncImageProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::QQuickAsyncImageProvider *>(sipCppV);
}


extern "C" {static void dealloc_QQuickAsyncImageProvider(sipSimpleWrapper *);}
static void dealloc_QQuickAsyncImageProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQQuickAsyncImageProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QQuickAsyncImageProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QQuickAsyncImageProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickAsyncImageProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQuickAsyncImageProvider *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQQuickAsyncImageProvider();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QQuickAsyncImageProvider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQuickAsyncImageProvider, &a0))
        {
            sipCpp = new sipQQuickAsyncImageProvider(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQuickAsyncImageProvider[] = {{5, 255, 1}};


static PyMethodDef methods_QQuickAsyncImageProvider[] = {
    {SIP_MLNAME_CAST(sipName_requestImageResponse), meth_QQuickAsyncImageProvider_requestImageResponse, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickAsyncImageProvider_requestImageResponse)}
};

PyDoc_STRVAR(doc_QQuickAsyncImageProvider, "\1QQuickAsyncImageProvider()\n"
"QQuickAsyncImageProvider(QQuickAsyncImageProvider)");


static pyqt5ClassPluginDef plugin_QQuickAsyncImageProvider = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtQuick_QQuickAsyncImageProvider = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QQuickAsyncImageProvider,
        {0},
        &plugin_QQuickAsyncImageProvider
    },
    {
        sipNameNr_QQuickAsyncImageProvider,
        {0, 0, 1},
        1, methods_QQuickAsyncImageProvider,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickAsyncImageProvider,
    -1,
    -1,
    supers_QQuickAsyncImageProvider,
    0,
    init_type_QQuickAsyncImageProvider,
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
    dealloc_QQuickAsyncImageProvider,
    0,
    0,
    0,
    release_QQuickAsyncImageProvider,
    cast_QQuickAsyncImageProvider,
    0,
    0,
    0,
    0,
    0,
    0
};