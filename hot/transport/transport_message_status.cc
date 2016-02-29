/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 06-02-2016 12:36:46
 * Name: transport_message_status.cc
 * Description:
 *   This file contains implementation of TransportMessageStatus class.
 ******************************************************************/

#include <iostream>
#include <string.h>

#include <naeem/hottentot/runtime/hot_ptr.h>

#include "transport_message_status.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace transport {
  TransportMessageStatus::TransportMessageStatus(const TransportMessageStatus &other) {
    statusCode_ = other.statusCode_;
  }
  TransportMessageStatus::TransportMessageStatus(TransportMessageStatus *other) {
    statusCode_ = other->statusCode_;
  }
  unsigned char *
  TransportMessageStatus::Serialize(uint32_t *length_ptr) {
    uint32_t totalLength = 0;
    uint32_t length0 = 0;
    ::naeem::hottentot::runtime::HotPtr<unsigned char, true> ptr0 = 
      statusCode_.Serialize(&length0);
    totalLength += length0;
    unsigned char *data = new unsigned char[totalLength];
    uint32_t c = 0;
    unsigned char *data0 = ptr0.Get();
    for (uint32_t i = 0; i < length0; i++) {
      data[c++] = data0[i];
    }
    if (c != totalLength) {
      std::cout << "Struct Serialization: Inconsistency in length of serialized byte array." << std::endl;
      exit(1);
    };
    if (length_ptr) {
      *length_ptr = totalLength;
    }
    return data;
  }
  void
  TransportMessageStatus::Deserialize(unsigned char *data, uint32_t length) {
    uint32_t c = 0, elength = 0;
    statusCode_.Deserialize(data + c, 2);
    c += 2;
    if (c != length) {
      std::cout << "Struct Deserialization: Inconsistency in length of deserialized byte array." << std::endl;
      exit(1);
    };
  }
} // END OF NAMESPACE transport
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir