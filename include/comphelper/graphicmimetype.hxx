/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef INCLUDED_COMPHELPER_GMH_HXX
#define INCLUDED_COMPHELPER_GMH_HXX

#include <comphelper/comphelperdllapi.h>
#include <rtl/ustring.hxx>
#include <vcl/salctype.hxx>

#include <com/sun/star/uno/Reference.h>

namespace com
{
namespace sun
{
namespace star
{
namespace graphic
{
class XGraphic;
}
}
}
}
namespace com
{
namespace sun
{
namespace star
{
namespace io
{
class XInputStream;
}
}
}
}

namespace comphelper
{
class COMPHELPER_DLLPUBLIC GraphicMimeTypeHelper
{
public:
    static OUString GetMimeTypeForExtension(const OString& rExt);
    static OUString
    GetMimeTypeForXGraphic(const css::uno::Reference<css::graphic::XGraphic>& xGraphic);
    static OUString
    GetMimeTypeForImageStream(const css::uno::Reference<css::io::XInputStream>& xInputStream);
    static OUString GetMimeTypeForConvertDataFormat(ConvertDataFormat convertDataFormat);
};
}

#endif // INCLUDED_COMPHELPER_GMH_HXX

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
