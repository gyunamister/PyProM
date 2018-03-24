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

#include "sipAPIQtCore.h"

#line 189 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
#include <QtGlobal>
#line 29 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtCore/sipQtCorequintptr.cpp"



extern "C" {static void assign_quintptr(void *, SIP_SSIZE_T, void *);}
static void assign_quintptr(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::quintptr *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::quintptr *>(sipSrc);
}


extern "C" {static void *array_quintptr(SIP_SSIZE_T);}
static void *array_quintptr(SIP_SSIZE_T sipNrElem)
{
    return new  ::quintptr[sipNrElem];
}


extern "C" {static void *copy_quintptr(const void *, SIP_SSIZE_T);}
static void *copy_quintptr(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::quintptr(reinterpret_cast<const  ::quintptr *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_quintptr(void *, int);}
static void release_quintptr(void *ptr, int)
{
    delete reinterpret_cast< ::quintptr *>(ptr);
}



extern "C" {static int convertTo_quintptr(PyObject *, void **, int *, PyObject *);}
static int convertTo_quintptr(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
     ::quintptr **sipCppPtr = reinterpret_cast< ::quintptr **>(sipCppPtrV);

#line 193 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
    quintptr ptr = (quintptr)sipConvertToVoidPtr(sipPy);

    if (!sipIsErr)
        return !PyErr_Occurred();

    // Mapped types deal with pointers, so create one on the heap.
    quintptr *heap = new quintptr;
    *heap = ptr;

    *sipCppPtr = heap;

    // Make sure the pointer doesn't leak.
    return SIP_TEMPORARY;
#line 82 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtCore/sipQtCorequintptr.cpp"
}


extern "C" {static PyObject *convertFrom_quintptr(void *, PyObject *);}
static PyObject *convertFrom_quintptr(void *sipCppV, PyObject *)
{
    ::quintptr *sipCpp = reinterpret_cast< ::quintptr *>(sipCppV);

#line 209 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtCore/qglobal.sip"
    return sipConvertFromVoidPtr((void *)*sipCpp);
#line 93 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtCore/sipQtCorequintptr.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_quintptr = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_quintptr,     /* quintptr */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_quintptr,
    array_quintptr,
    copy_quintptr,
    release_quintptr,
    convertTo_quintptr,
    convertFrom_quintptr
};