/****************************************************************************
 * Generated by Hottentot CC Generator
 * Date: 02-04-2016 10:40:06
 * Name: gate_monitor_service_request_handler.cc
 * Description:
 *   This file contains implementation of service's request handler class.
 ****************************************************************************/
 
#include <string.h>

#include <naeem/hottentot/runtime/request.h>
#include <naeem/hottentot/runtime/response.h>

#include "gate_monitor_service_request_handler.h"
#include "abstract_gate_monitor_service.h"
#include "gate_monitor_service.h"
#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace service {
  void 
  GateMonitorServiceRequestHandler::HandleRequest(::naeem::hottentot::runtime::Request &request, ::naeem::hottentot::runtime::Response &response) {
    if (request.GetMethodId() == 382105227) {
      ::ir::ntnaeem::gate::service::AbstractGateMonitorService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateMonitorService*>(service_);
      /*
       * Deserialization and making input variables
       */
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      ::naeem::hottentot::runtime::types::Utf8String result;
      try {
        serviceObject->GetCurrentStat(result, hotContext);
      } catch (std::exception &e) {
        hotContext.SetFaultyResponse(e.what(), 50);
      } catch (...) {
        hotContext.SetFaultyResponse("Unknown server side exception.", 51);
      }
      /*
       * Serializiation of returned object
       */
      unsigned char *serializedData = 0;
      uint32_t serializedDataLength = 0;
      if (hotContext.GetResponseStatusCode() == 0) {
        serializedData = result.Serialize(&serializedDataLength);
      } else {
        ::naeem::hottentot::runtime::types::Utf8String faultMessage(hotContext.GetFaultMessage());
        serializedData = faultMessage.Serialize(&serializedDataLength);
      }
      response.SetStatusCode(hotContext.GetResponseStatusCode());
      response.SetData(serializedData);
      response.SetDataLength(serializedDataLength);
      return;
    }
    char errorMessage[] = "Method not found.";
    response.SetStatusCode(1);
    response.SetData((unsigned char*)errorMessage);
    response.SetDataLength(strlen(errorMessage));
  }
} // END OF NAMESPACE service
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir