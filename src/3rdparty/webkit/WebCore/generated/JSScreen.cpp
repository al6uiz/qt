/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSScreen.h"

#include "Screen.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSScreen);

/* Hash table */

static const HashTableValue JSScreenTableValues[9] =
{
    { "height", DontDelete|ReadOnly, (intptr_t)jsScreenHeight, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsScreenWidth, (intptr_t)0 },
    { "colorDepth", DontDelete|ReadOnly, (intptr_t)jsScreenColorDepth, (intptr_t)0 },
    { "pixelDepth", DontDelete|ReadOnly, (intptr_t)jsScreenPixelDepth, (intptr_t)0 },
    { "availLeft", DontDelete|ReadOnly, (intptr_t)jsScreenAvailLeft, (intptr_t)0 },
    { "availTop", DontDelete|ReadOnly, (intptr_t)jsScreenAvailTop, (intptr_t)0 },
    { "availHeight", DontDelete|ReadOnly, (intptr_t)jsScreenAvailHeight, (intptr_t)0 },
    { "availWidth", DontDelete|ReadOnly, (intptr_t)jsScreenAvailWidth, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSScreenTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSScreenTableValues, 0 };
#else
    { 18, 15, JSScreenTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSScreenPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSScreenPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSScreenPrototypeTableValues, 0 };
#else
    { 1, 0, JSScreenPrototypeTableValues, 0 };
#endif

const ClassInfo JSScreenPrototype::s_info = { "ScreenPrototype", 0, &JSScreenPrototypeTable, 0 };

JSObject* JSScreenPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSScreen>(exec, globalObject);
}

const ClassInfo JSScreen::s_info = { "Screen", 0, &JSScreenTable, 0 };

JSScreen::JSScreen(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Screen> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSScreen::~JSScreen()
{
    forgetDOMObject(this, impl());
}

JSObject* JSScreen::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSScreenPrototype(JSScreenPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSScreen::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSScreen, Base>(exec, &JSScreenTable, this, propertyName, slot);
}

bool JSScreen::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSScreen, Base>(exec, &JSScreenTable, this, propertyName, descriptor);
}

JSValue jsScreenHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->height());
}

JSValue jsScreenWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->width());
}

JSValue jsScreenColorDepth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->colorDepth());
}

JSValue jsScreenPixelDepth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->pixelDepth());
}

JSValue jsScreenAvailLeft(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->availLeft());
}

JSValue jsScreenAvailTop(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->availTop());
}

JSValue jsScreenAvailHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->availHeight());
}

JSValue jsScreenAvailWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSScreen* castedThis = static_cast<JSScreen*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    Screen* imp = static_cast<Screen*>(castedThis->impl());
    return jsNumber(exec, imp->availWidth());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Screen* object)
{
    return getDOMObjectWrapper<JSScreen>(exec, globalObject, object);
}
Screen* toScreen(JSC::JSValue value)
{
    return value.inherits(&JSScreen::s_info) ? static_cast<JSScreen*>(asObject(value))->impl() : 0;
}

}
