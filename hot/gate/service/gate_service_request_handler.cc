/****************************************************************************
 * Generated by Hottentot CC Generator
 * Date: 29-03-2016 10:58:47
 * Name: gate_service_request_handler.cc
 * Description:
 *   This file contains implementation of service's request handler class.
 ****************************************************************************/
 
#include <string.h>

#include <naeem/hottentot/runtime/request.h>
#include <naeem/hottentot/runtime/response.h>

#include "gate_service_request_handler.h"
#include "abstract_gate_service.h"
#include "gate_service.h"
#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace service {
  void 
  GateServiceRequestHandler::HandleRequest(::naeem::hottentot::runtime::Request &request, ::naeem::hottentot::runtime::Response &response) {
    if (request.GetMethodId() == 1548427490) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::ir::ntnaeem::gate::Message message;
      message.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      ::naeem::hottentot::runtime::types::UInt64 result;
      try {
        serviceObject->Enqueue(message, result, hotContext);
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
    if (request.GetMethodId() == 1428961905) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::naeem::hottentot::runtime::types::UInt64 id;
      id.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      ::naeem::hottentot::runtime::types::Enum< ::ir::ntnaeem::gate::MessageStatus> result;
      try {
        serviceObject->GetStatus(id, result, hotContext);
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
    if (request.GetMethodId() == 3250188767) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::naeem::hottentot::runtime::types::UInt64 id;
      id.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      try {
        serviceObject->Discard(id, hotContext);
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
        serializedData = 0;
      } else {
        ::naeem::hottentot::runtime::types::Utf8String faultMessage(hotContext.GetFaultMessage());
        serializedData = faultMessage.Serialize(&serializedDataLength);
      }
      response.SetStatusCode(hotContext.GetResponseStatusCode());
      response.SetData(serializedData);
      response.SetDataLength(serializedDataLength);
      return;
    }
    if (request.GetMethodId() == 2484924834) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::naeem::hottentot::runtime::types::Utf8String label;
      label.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      ::naeem::hottentot::runtime::types::Boolean result;
      try {
        serviceObject->HasMore(label, result, hotContext);
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
    if (request.GetMethodId() == 3070562612) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::naeem::hottentot::runtime::types::Utf8String label;
      label.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      ::ir::ntnaeem::gate::Message result;
      try {
        serviceObject->PopNext(label, result, hotContext);
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
    if (request.GetMethodId() == 3312297367) {
      ::ir::ntnaeem::gate::service::AbstractGateService *serviceObject = 
        dynamic_cast< ::ir::ntnaeem::gate::service::AbstractGateService*>(service_);
      /*
       * Deserialization and making input variables
       */
      ::naeem::hottentot::runtime::types::UInt64 id;
      id.Deserialize(request.GetArgumentData(0), request.GetArgumentLength(0));
      /*
       * Calling service method
       */
      ::naeem::hottentot::runtime::service::HotContext hotContext;
      
      try {
        serviceObject->Ack(id, hotContext);
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
        serializedData = 0;
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