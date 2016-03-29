/***********************************************************************
 * Generated by Hottentot CC Generator
 * Date: 29-03-2016 10:58:46
 * Name: gate_service.h
 * Description:
 *   This file contains definition of the interface used by proxies.
 ***********************************************************************/

#ifndef _IR_NTNAEEM_GATE__PROXY__GATE_SERVICE_H_
#define _IR_NTNAEEM_GATE__PROXY__GATE_SERVICE_H_

#ifdef _MSC_VER
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif

#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>

#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace proxy {
  class GateService {
  public:
     GateService() {}
     virtual ~GateService() {}
  public:
    virtual void Enqueue(
      ::ir::ntnaeem::gate::Message &message, 
      ::naeem::hottentot::runtime::types::UInt64 &out
    ) = 0;
    virtual void GetStatus(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::naeem::hottentot::runtime::types::Enum< ::ir::ntnaeem::gate::MessageStatus> &out
    ) = 0;
    virtual void Discard(
      ::naeem::hottentot::runtime::types::UInt64 &id
    ) = 0;
    virtual void HasMore(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::naeem::hottentot::runtime::types::Boolean &out
    ) = 0;
    virtual void PopNext(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::ir::ntnaeem::gate::Message &out
    ) = 0;
    virtual void Ack(
      ::naeem::hottentot::runtime::types::UInt64 &id
    ) = 0;
  };
} // END OF NAMESPACE proxy
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif