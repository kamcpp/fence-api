/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 29-03-2016 10:58:47
 * Name: gate_monitor_service_impl.cc
 * Description:
 *   This file contains empty implementation of sample stub.
 ******************************************************************/
 
#include <naeem/hottentot/runtime/configuration.h>
#include <naeem/hottentot/runtime/logger.h>
#include <naeem/hottentot/runtime/utils.h>

#include "gate_monitor_service_impl.h"

#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
  void
  GateMonitorServiceImpl::OnInit() {
    // TODO: Called when service is initializing.
  }
  void
  GateMonitorServiceImpl::OnShutdown() {
    // TODO: Called when service is shutting down.
  }
  void
  GateMonitorServiceImpl::GetCurrentStat(
      ::naeem::hottentot::runtime::types::Utf8String &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << "GateMonitorServiceImpl::GetCurrentStat() is called." << std::endl;
    }
    // TODO
  }
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir