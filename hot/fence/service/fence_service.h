/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 07-05-2016 11:20:04
 * Name: fence_service.h
 * Description:
 *   This file contains definition of service interface.
 ***************************************************************/

#ifndef _ORG_LABCRYPTO_FENCE__SERVICE__FENCE_SERVICE_H_
#define _ORG_LABCRYPTO_FENCE__SERVICE__FENCE_SERVICE_H_

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

#include <org/labcrypto/hottentot/primitives.h>
#include <org/labcrypto/hottentot/runtime/service/hot_context.h>

#include "../message.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace service {
  class FenceService {
  public:
     FenceService() {}
     virtual ~FenceService() {}
  public:
    virtual void Enqueue(
      ::org::labcrypto::fence::Message &message, 
      ::org::labcrypto::hottentot::UInt64 &out, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void GetStatus(
      ::org::labcrypto::hottentot::UInt64 &id, 
      ::org::labcrypto::hottentot::UInt16 &out, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void Discard(
      ::org::labcrypto::hottentot::UInt64 &id, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void HasMore(
      ::org::labcrypto::hottentot::Utf8String &label, 
      ::org::labcrypto::hottentot::Boolean &out, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void PopNext(
      ::org::labcrypto::hottentot::Utf8String &label, 
      ::org::labcrypto::fence::Message &out, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
    virtual void Ack(
      ::org::labcrypto::hottentot::UInt64 &id, 
      ::org::labcrypto::hottentot::runtime::service::HotContext &hotContext
    ) = 0;
  };
} // END OF NAMESPACE service
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org

#endif