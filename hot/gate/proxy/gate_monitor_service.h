/***********************************************************************
 * Generated by Hottentot CC Generator
 * Date: 02-04-2016 10:40:06
 * Name: gate_monitor_service.h
 * Description:
 *   This file contains definition of the interface used by proxies.
 ***********************************************************************/

#ifndef _IR_NTNAEEM_GATE__PROXY__GATE_MONITOR_SERVICE_H_
#define _IR_NTNAEEM_GATE__PROXY__GATE_MONITOR_SERVICE_H_

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
  class GateMonitorService {
  public:
     GateMonitorService() {}
     virtual ~GateMonitorService() {}
  public:
    virtual void GetCurrentStat(
      ::naeem::hottentot::runtime::types::Utf8String &out
    ) = 0;
  };
} // END OF NAMESPACE proxy
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif