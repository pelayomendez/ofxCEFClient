// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/list_value_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefProcessMessage> CefProcessMessage::Create(const CefString& name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return NULL;

  // Execute
  cef_process_message_t* _retval = cef_process_message_create(
      name.GetStruct());

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefProcessMessageCToCpp::IsValid() {
  if (CEF_MEMBER_MISSING(struct_, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_valid(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefProcessMessageCToCpp::IsReadOnly() {
  if (CEF_MEMBER_MISSING(struct_, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_read_only(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefProcessMessage> CefProcessMessageCToCpp::Copy() {
  if (CEF_MEMBER_MISSING(struct_, copy))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_process_message_t* _retval = struct_->copy(struct_);

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}

CefString CefProcessMessageCToCpp::GetName() {
  if (CEF_MEMBER_MISSING(struct_, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefListValue> CefProcessMessageCToCpp::GetArgumentList() {
  if (CEF_MEMBER_MISSING(struct_, get_argument_list))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_list_value_t* _retval = struct_->get_argument_list(struct_);

  // Return type: refptr_same
  return CefListValueCToCpp::Wrap(_retval);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefProcessMessageCToCpp, CefProcessMessage,
    cef_process_message_t>::DebugObjCt = 0;
#endif

