// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Range.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8ClientRect.h"
#include "bindings/core/v8/V8ClientRectList.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DocumentFragment.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Range.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Range::wrapperTypeInfo = { gin::kEmbedderBlink, V8Range::domTemplate, V8Range::refObject, V8Range::derefObject, V8Range::trace, 0, 0, V8Range::preparePrototypeObject, V8Range::installConditionallyEnabledProperties, "Range", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Range.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Range::s_wrapperTypeInfo = V8Range::wrapperTypeInfo;

namespace RangeV8Internal {

static void startContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->startContainer()), impl);
}

static void startContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::startContainerAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void startOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueInt(info, impl->startOffset());
}

static void startOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::startOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void endContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->endContainer()), impl);
}

static void endContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::endContainerAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void endOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueInt(info, impl->endOffset());
}

static void endOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::endOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void collapsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueBool(info, impl->collapsed());
}

static void collapsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::collapsedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void commonAncestorContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Range* impl = V8Range::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->commonAncestorContainer()), impl);
}

static void commonAncestorContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    RangeV8Internal::commonAncestorContainerAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setStartMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setStart", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    int offset;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        offset = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setStart(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setStartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setStartMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setEnd", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    int offset;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        offset = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setEnd(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setStartBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setStartBefore", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->setStartBefore(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setStartBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setStartBeforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setStartAfterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setStartAfter", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->setStartAfter(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setStartAfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setStartAfterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setEndBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setEndBefore", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->setEndBefore(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setEndBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setEndBeforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setEndAfterMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setEndAfter", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->setEndAfter(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setEndAfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::setEndAfterMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void collapseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "collapse", "Range", info.Holder(), info.GetIsolate());
    Range* impl = V8Range::toImpl(info.Holder());
    bool toStart;
    {
        if (!info[0]->IsUndefined()) {
            toStart = toBoolean(info.GetIsolate(), info[0], exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            toStart = false;
        }
    }
    impl->collapse(toStart);
}

static void collapseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::collapseMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void selectNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "selectNode", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->selectNode(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void selectNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::selectNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void selectNodeContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "selectNodeContents", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->selectNodeContents(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void selectNodeContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::selectNodeContentsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void compareBoundaryPointsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "compareBoundaryPoints", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    unsigned how;
    Range* sourceRange;
    {
        how = toUInt16(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        sourceRange = V8Range::toImplWithTypeCheck(info.GetIsolate(), info[1]);
        if (!sourceRange) {
            exceptionState.throwTypeError("parameter 2 is not of type 'Range'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    int result = impl->compareBoundaryPoints(how, sourceRange, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueInt(info, result);
}

static void compareBoundaryPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::compareBoundaryPointsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteContents", "Range", info.Holder(), info.GetIsolate());
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->deleteContents(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::deleteContentsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void extractContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "extractContents", "Range", info.Holder(), info.GetIsolate());
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    RefPtrWillBeRawPtr<DocumentFragment> result = impl->extractContents(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void extractContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::extractContentsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cloneContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "cloneContents", "Range", info.Holder(), info.GetIsolate());
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    RefPtrWillBeRawPtr<DocumentFragment> result = impl->cloneContents(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void cloneContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::cloneContentsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertNode", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->insertNode(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void insertNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::insertNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void surroundContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "surroundContents", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    Node* newParent;
    {
        newParent = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newParent) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->surroundContents(newParent, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void surroundContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::surroundContentsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cloneRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Range* impl = V8Range::toImpl(info.Holder());
    v8SetReturnValue(info, impl->cloneRange());
}

static void cloneRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::cloneRangeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void detachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Range* impl = V8Range::toImpl(info.Holder());
    impl->detach();
}

static void detachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::RangeDetach);
    RangeV8Internal::detachMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void isPointInRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "isPointInRange", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    int offset;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        offset = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    bool result = impl->isPointInRange(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueBool(info, result);
}

static void isPointInRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::isPointInRangeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void comparePointMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "comparePoint", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    int offset;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        offset = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    int result = impl->comparePoint(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueInt(info, result);
}

static void comparePointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::comparePointMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void intersectsNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "intersectsNode", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    Node* node;
    {
        node = V8Node::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!node) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    bool result = impl->intersectsNode(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueBool(info, result);
}

static void intersectsNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::intersectsNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getClientRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Range* impl = V8Range::toImpl(info.Holder());
    v8SetReturnValue(info, impl->getClientRects());
}

static void getClientRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::getClientRectsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getBoundingClientRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Range* impl = V8Range::toImpl(info.Holder());
    v8SetReturnValue(info, impl->getBoundingClientRect());
}

static void getBoundingClientRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::getBoundingClientRectMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void createContextualFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createContextualFragment", "Range", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Range* impl = V8Range::toImpl(info.Holder());
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    V8StringResource<> fragment;
    {
        fragment = info[0];
        if (!fragment.prepare())
            return;
    }
    RefPtrWillBeRawPtr<DocumentFragment> result = impl->createContextualFragment(fragment, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createContextualFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::createContextualFragmentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void expandMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "expand", "Range", info.Holder(), info.GetIsolate());
    Range* impl = V8Range::toImpl(info.Holder());
    V8StringResource<> unit;
    {
        unit = info[0];
        if (!unit.prepare())
            return;
    }
    impl->expand(unit, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void expandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::RangeExpand);
    RangeV8Internal::expandMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Range* impl = V8Range::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    RangeV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
    RefPtrWillBeRawPtr<Range> impl = Range::create(document);
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Range::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace RangeV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8RangeAccessors[] = {
    {"startContainer", RangeV8Internal::startContainerAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"startOffset", RangeV8Internal::startOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"endContainer", RangeV8Internal::endContainerAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"endOffset", RangeV8Internal::endOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"collapsed", RangeV8Internal::collapsedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"commonAncestorContainer", RangeV8Internal::commonAncestorContainerAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8RangeMethods[] = {
    {"setStart", RangeV8Internal::setStartMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"setEnd", RangeV8Internal::setEndMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"setStartBefore", RangeV8Internal::setStartBeforeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"setStartAfter", RangeV8Internal::setStartAfterMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"setEndBefore", RangeV8Internal::setEndBeforeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"setEndAfter", RangeV8Internal::setEndAfterMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"collapse", RangeV8Internal::collapseMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"selectNode", RangeV8Internal::selectNodeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"selectNodeContents", RangeV8Internal::selectNodeContentsMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"compareBoundaryPoints", RangeV8Internal::compareBoundaryPointsMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteContents", RangeV8Internal::deleteContentsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"extractContents", RangeV8Internal::extractContentsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"cloneContents", RangeV8Internal::cloneContentsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"insertNode", RangeV8Internal::insertNodeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"surroundContents", RangeV8Internal::surroundContentsMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"cloneRange", RangeV8Internal::cloneRangeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"detach", RangeV8Internal::detachMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"isPointInRange", RangeV8Internal::isPointInRangeMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"comparePoint", RangeV8Internal::comparePointMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"intersectsNode", RangeV8Internal::intersectsNodeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getClientRects", RangeV8Internal::getClientRectsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getBoundingClientRect", RangeV8Internal::getBoundingClientRectMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"createContextualFragment", RangeV8Internal::createContextualFragmentMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"expand", RangeV8Internal::expandMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"toString", RangeV8Internal::toStringMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

void V8Range::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Range"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    RangeV8Internal::constructor(info);
}

static void installV8RangeTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Range", v8::Local<v8::FunctionTemplate>(), V8Range::internalFieldCount,
        0, 0,
        V8RangeAccessors, WTF_ARRAY_LENGTH(V8RangeAccessors),
        V8RangeMethods, WTF_ARRAY_LENGTH(V8RangeMethods));
    functionTemplate->SetCallHandler(V8Range::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8RangeConstants[] = {
        {"START_TO_START", 0, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"START_TO_END", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"END_TO_END", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"END_TO_START", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8RangeConstants, WTF_ARRAY_LENGTH(V8RangeConstants));
    static_assert(0 == Range::START_TO_START, "the value of Range_START_TO_START does not match with implementation");
    static_assert(1 == Range::START_TO_END, "the value of Range_START_TO_END does not match with implementation");
    static_assert(2 == Range::END_TO_END, "the value of Range_END_TO_END does not match with implementation");
    static_assert(3 == Range::END_TO_START, "the value of Range_END_TO_START does not match with implementation");

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Range::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RangeTemplate);
}

bool V8Range::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Range::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Range* V8Range::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Range::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<Range>()->ref();
#endif
}

void V8Range::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<Range>()->deref();
#endif
}

} // namespace blink