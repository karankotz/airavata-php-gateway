/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef messaging_events_TYPES_H
#define messaging_events_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "status_models_types.h"
#include "application_io_models_types.h"
#include "airavata_commons_types.h"


namespace apache { namespace airavata { namespace model { namespace messaging { namespace event {

struct MessageLevel {
  enum type {
    INFO = 0,
    DEBUG = 1,
    ERROR = 2,
    ACK = 3
  };
};

extern const std::map<int, const char*> _MessageLevel_VALUES_TO_NAMES;

struct MessageType {
  enum type {
    EXPERIMENT = 0,
    TASK = 1,
    PROCESS = 2,
    JOB = 3,
    LAUNCHPROCESS = 4,
    TERMINATEPROCESS = 5,
    PROCESSOUTPUT = 6
  };
};

extern const std::map<int, const char*> _MessageType_VALUES_TO_NAMES;

class ExperimentStatusChangeEvent;

class ProcessIdentifier;

class TaskIdentifier;

class TaskStatusChangeEvent;

class TaskStatusChangeRequestEvent;

class ProcessStatusChangeEvent;

class ProcessStatusChangeRequestEvent;

class TaskOutputChangeEvent;

class JobIdentifier;

class ProcessSubmitEvent;

class ProcessTerminateEvent;

class JobStatusChangeEvent;

class JobStatusChangeRequestEvent;

class Message;


class ExperimentStatusChangeEvent {
 public:

  static const char* ascii_fingerprint; // = "38C252E94E93B69D04EB3A6EE2F9EDFB";
  static const uint8_t binary_fingerprint[16]; // = {0x38,0xC2,0x52,0xE9,0x4E,0x93,0xB6,0x9D,0x04,0xEB,0x3A,0x6E,0xE2,0xF9,0xED,0xFB};

  ExperimentStatusChangeEvent(const ExperimentStatusChangeEvent&);
  ExperimentStatusChangeEvent& operator=(const ExperimentStatusChangeEvent&);
  ExperimentStatusChangeEvent() : state(( ::apache::airavata::model::status::ExperimentState::type)0), experimentId(), gatewayId() {
  }

  virtual ~ExperimentStatusChangeEvent() throw();
   ::apache::airavata::model::status::ExperimentState::type state;
  std::string experimentId;
  std::string gatewayId;

  void __set_state(const  ::apache::airavata::model::status::ExperimentState::type val);

  void __set_experimentId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  bool operator == (const ExperimentStatusChangeEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    return true;
  }
  bool operator != (const ExperimentStatusChangeEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ExperimentStatusChangeEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ExperimentStatusChangeEvent& obj);
};

void swap(ExperimentStatusChangeEvent &a, ExperimentStatusChangeEvent &b);


class ProcessIdentifier {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  ProcessIdentifier(const ProcessIdentifier&);
  ProcessIdentifier& operator=(const ProcessIdentifier&);
  ProcessIdentifier() : processId(), experimentId(), gatewayId() {
  }

  virtual ~ProcessIdentifier() throw();
  std::string processId;
  std::string experimentId;
  std::string gatewayId;

  void __set_processId(const std::string& val);

  void __set_experimentId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  bool operator == (const ProcessIdentifier & rhs) const
  {
    if (!(processId == rhs.processId))
      return false;
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    return true;
  }
  bool operator != (const ProcessIdentifier &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProcessIdentifier & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ProcessIdentifier& obj);
};

void swap(ProcessIdentifier &a, ProcessIdentifier &b);


class TaskIdentifier {
 public:

  static const char* ascii_fingerprint; // = "C93D890311F28844166CF6E571EB3AC2";
  static const uint8_t binary_fingerprint[16]; // = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

  TaskIdentifier(const TaskIdentifier&);
  TaskIdentifier& operator=(const TaskIdentifier&);
  TaskIdentifier() : taskId(), processId(), experimentId(), gatewayId() {
  }

  virtual ~TaskIdentifier() throw();
  std::string taskId;
  std::string processId;
  std::string experimentId;
  std::string gatewayId;

  void __set_taskId(const std::string& val);

  void __set_processId(const std::string& val);

  void __set_experimentId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  bool operator == (const TaskIdentifier & rhs) const
  {
    if (!(taskId == rhs.taskId))
      return false;
    if (!(processId == rhs.processId))
      return false;
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    return true;
  }
  bool operator != (const TaskIdentifier &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TaskIdentifier & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TaskIdentifier& obj);
};

void swap(TaskIdentifier &a, TaskIdentifier &b);


class TaskStatusChangeEvent {
 public:

  static const char* ascii_fingerprint; // = "8D18A3CD1822DBC67D7BD8CB98E7B4F1";
  static const uint8_t binary_fingerprint[16]; // = {0x8D,0x18,0xA3,0xCD,0x18,0x22,0xDB,0xC6,0x7D,0x7B,0xD8,0xCB,0x98,0xE7,0xB4,0xF1};

  TaskStatusChangeEvent(const TaskStatusChangeEvent&);
  TaskStatusChangeEvent& operator=(const TaskStatusChangeEvent&);
  TaskStatusChangeEvent() : state(( ::apache::airavata::model::status::TaskState::type)0) {
  }

  virtual ~TaskStatusChangeEvent() throw();
   ::apache::airavata::model::status::TaskState::type state;
  TaskIdentifier taskIdentity;

  void __set_state(const  ::apache::airavata::model::status::TaskState::type val);

  void __set_taskIdentity(const TaskIdentifier& val);

  bool operator == (const TaskStatusChangeEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(taskIdentity == rhs.taskIdentity))
      return false;
    return true;
  }
  bool operator != (const TaskStatusChangeEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TaskStatusChangeEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TaskStatusChangeEvent& obj);
};

void swap(TaskStatusChangeEvent &a, TaskStatusChangeEvent &b);


class TaskStatusChangeRequestEvent {
 public:

  static const char* ascii_fingerprint; // = "8D18A3CD1822DBC67D7BD8CB98E7B4F1";
  static const uint8_t binary_fingerprint[16]; // = {0x8D,0x18,0xA3,0xCD,0x18,0x22,0xDB,0xC6,0x7D,0x7B,0xD8,0xCB,0x98,0xE7,0xB4,0xF1};

  TaskStatusChangeRequestEvent(const TaskStatusChangeRequestEvent&);
  TaskStatusChangeRequestEvent& operator=(const TaskStatusChangeRequestEvent&);
  TaskStatusChangeRequestEvent() : state(( ::apache::airavata::model::status::TaskState::type)0) {
  }

  virtual ~TaskStatusChangeRequestEvent() throw();
   ::apache::airavata::model::status::TaskState::type state;
  TaskIdentifier taskIdentity;

  void __set_state(const  ::apache::airavata::model::status::TaskState::type val);

  void __set_taskIdentity(const TaskIdentifier& val);

  bool operator == (const TaskStatusChangeRequestEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(taskIdentity == rhs.taskIdentity))
      return false;
    return true;
  }
  bool operator != (const TaskStatusChangeRequestEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TaskStatusChangeRequestEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TaskStatusChangeRequestEvent& obj);
};

void swap(TaskStatusChangeRequestEvent &a, TaskStatusChangeRequestEvent &b);


class ProcessStatusChangeEvent {
 public:

  static const char* ascii_fingerprint; // = "9686679C94D43D75F2B35A0BED2E4003";
  static const uint8_t binary_fingerprint[16]; // = {0x96,0x86,0x67,0x9C,0x94,0xD4,0x3D,0x75,0xF2,0xB3,0x5A,0x0B,0xED,0x2E,0x40,0x03};

  ProcessStatusChangeEvent(const ProcessStatusChangeEvent&);
  ProcessStatusChangeEvent& operator=(const ProcessStatusChangeEvent&);
  ProcessStatusChangeEvent() : state(( ::apache::airavata::model::status::ProcessState::type)0) {
  }

  virtual ~ProcessStatusChangeEvent() throw();
   ::apache::airavata::model::status::ProcessState::type state;
  ProcessIdentifier processIdentity;

  void __set_state(const  ::apache::airavata::model::status::ProcessState::type val);

  void __set_processIdentity(const ProcessIdentifier& val);

  bool operator == (const ProcessStatusChangeEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(processIdentity == rhs.processIdentity))
      return false;
    return true;
  }
  bool operator != (const ProcessStatusChangeEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProcessStatusChangeEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ProcessStatusChangeEvent& obj);
};

void swap(ProcessStatusChangeEvent &a, ProcessStatusChangeEvent &b);


class ProcessStatusChangeRequestEvent {
 public:

  static const char* ascii_fingerprint; // = "9686679C94D43D75F2B35A0BED2E4003";
  static const uint8_t binary_fingerprint[16]; // = {0x96,0x86,0x67,0x9C,0x94,0xD4,0x3D,0x75,0xF2,0xB3,0x5A,0x0B,0xED,0x2E,0x40,0x03};

  ProcessStatusChangeRequestEvent(const ProcessStatusChangeRequestEvent&);
  ProcessStatusChangeRequestEvent& operator=(const ProcessStatusChangeRequestEvent&);
  ProcessStatusChangeRequestEvent() : state(( ::apache::airavata::model::status::ProcessState::type)0) {
  }

  virtual ~ProcessStatusChangeRequestEvent() throw();
   ::apache::airavata::model::status::ProcessState::type state;
  ProcessIdentifier processIdentity;

  void __set_state(const  ::apache::airavata::model::status::ProcessState::type val);

  void __set_processIdentity(const ProcessIdentifier& val);

  bool operator == (const ProcessStatusChangeRequestEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(processIdentity == rhs.processIdentity))
      return false;
    return true;
  }
  bool operator != (const ProcessStatusChangeRequestEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProcessStatusChangeRequestEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ProcessStatusChangeRequestEvent& obj);
};

void swap(ProcessStatusChangeRequestEvent &a, ProcessStatusChangeRequestEvent &b);


class TaskOutputChangeEvent {
 public:

  static const char* ascii_fingerprint; // = "C7C71D05D69F7D8C4A11C9E432FF5A51";
  static const uint8_t binary_fingerprint[16]; // = {0xC7,0xC7,0x1D,0x05,0xD6,0x9F,0x7D,0x8C,0x4A,0x11,0xC9,0xE4,0x32,0xFF,0x5A,0x51};

  TaskOutputChangeEvent(const TaskOutputChangeEvent&);
  TaskOutputChangeEvent& operator=(const TaskOutputChangeEvent&);
  TaskOutputChangeEvent() {
  }

  virtual ~TaskOutputChangeEvent() throw();
  std::vector< ::apache::airavata::model::application::io::OutputDataObjectType>  output;
  TaskIdentifier taskIdentity;

  void __set_output(const std::vector< ::apache::airavata::model::application::io::OutputDataObjectType> & val);

  void __set_taskIdentity(const TaskIdentifier& val);

  bool operator == (const TaskOutputChangeEvent & rhs) const
  {
    if (!(output == rhs.output))
      return false;
    if (!(taskIdentity == rhs.taskIdentity))
      return false;
    return true;
  }
  bool operator != (const TaskOutputChangeEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TaskOutputChangeEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TaskOutputChangeEvent& obj);
};

void swap(TaskOutputChangeEvent &a, TaskOutputChangeEvent &b);


class JobIdentifier {
 public:

  static const char* ascii_fingerprint; // = "BFF0E21728CB005F9AA5774A41542B8D";
  static const uint8_t binary_fingerprint[16]; // = {0xBF,0xF0,0xE2,0x17,0x28,0xCB,0x00,0x5F,0x9A,0xA5,0x77,0x4A,0x41,0x54,0x2B,0x8D};

  JobIdentifier(const JobIdentifier&);
  JobIdentifier& operator=(const JobIdentifier&);
  JobIdentifier() : jobId(), taskId(), processId(), experimentId(), gatewayId() {
  }

  virtual ~JobIdentifier() throw();
  std::string jobId;
  std::string taskId;
  std::string processId;
  std::string experimentId;
  std::string gatewayId;

  void __set_jobId(const std::string& val);

  void __set_taskId(const std::string& val);

  void __set_processId(const std::string& val);

  void __set_experimentId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  bool operator == (const JobIdentifier & rhs) const
  {
    if (!(jobId == rhs.jobId))
      return false;
    if (!(taskId == rhs.taskId))
      return false;
    if (!(processId == rhs.processId))
      return false;
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    return true;
  }
  bool operator != (const JobIdentifier &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const JobIdentifier & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const JobIdentifier& obj);
};

void swap(JobIdentifier &a, JobIdentifier &b);


class ProcessSubmitEvent {
 public:

  static const char* ascii_fingerprint; // = "C93D890311F28844166CF6E571EB3AC2";
  static const uint8_t binary_fingerprint[16]; // = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

  ProcessSubmitEvent(const ProcessSubmitEvent&);
  ProcessSubmitEvent& operator=(const ProcessSubmitEvent&);
  ProcessSubmitEvent() : processId(), gatewayId(), experimentId(), tokenId() {
  }

  virtual ~ProcessSubmitEvent() throw();
  std::string processId;
  std::string gatewayId;
  std::string experimentId;
  std::string tokenId;

  void __set_processId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_experimentId(const std::string& val);

  void __set_tokenId(const std::string& val);

  bool operator == (const ProcessSubmitEvent & rhs) const
  {
    if (!(processId == rhs.processId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    if (!(experimentId == rhs.experimentId))
      return false;
    if (!(tokenId == rhs.tokenId))
      return false;
    return true;
  }
  bool operator != (const ProcessSubmitEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProcessSubmitEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ProcessSubmitEvent& obj);
};

void swap(ProcessSubmitEvent &a, ProcessSubmitEvent &b);


class ProcessTerminateEvent {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  ProcessTerminateEvent(const ProcessTerminateEvent&);
  ProcessTerminateEvent& operator=(const ProcessTerminateEvent&);
  ProcessTerminateEvent() : processId(), gatewayId(), tokenId() {
  }

  virtual ~ProcessTerminateEvent() throw();
  std::string processId;
  std::string gatewayId;
  std::string tokenId;

  void __set_processId(const std::string& val);

  void __set_gatewayId(const std::string& val);

  void __set_tokenId(const std::string& val);

  bool operator == (const ProcessTerminateEvent & rhs) const
  {
    if (!(processId == rhs.processId))
      return false;
    if (!(gatewayId == rhs.gatewayId))
      return false;
    if (!(tokenId == rhs.tokenId))
      return false;
    return true;
  }
  bool operator != (const ProcessTerminateEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProcessTerminateEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ProcessTerminateEvent& obj);
};

void swap(ProcessTerminateEvent &a, ProcessTerminateEvent &b);


class JobStatusChangeEvent {
 public:

  static const char* ascii_fingerprint; // = "062775D589B60D1687103FD465B0F5E8";
  static const uint8_t binary_fingerprint[16]; // = {0x06,0x27,0x75,0xD5,0x89,0xB6,0x0D,0x16,0x87,0x10,0x3F,0xD4,0x65,0xB0,0xF5,0xE8};

  JobStatusChangeEvent(const JobStatusChangeEvent&);
  JobStatusChangeEvent& operator=(const JobStatusChangeEvent&);
  JobStatusChangeEvent() : state(( ::apache::airavata::model::status::JobState::type)0) {
  }

  virtual ~JobStatusChangeEvent() throw();
   ::apache::airavata::model::status::JobState::type state;
  JobIdentifier jobIdentity;

  void __set_state(const  ::apache::airavata::model::status::JobState::type val);

  void __set_jobIdentity(const JobIdentifier& val);

  bool operator == (const JobStatusChangeEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(jobIdentity == rhs.jobIdentity))
      return false;
    return true;
  }
  bool operator != (const JobStatusChangeEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const JobStatusChangeEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const JobStatusChangeEvent& obj);
};

void swap(JobStatusChangeEvent &a, JobStatusChangeEvent &b);


class JobStatusChangeRequestEvent {
 public:

  static const char* ascii_fingerprint; // = "062775D589B60D1687103FD465B0F5E8";
  static const uint8_t binary_fingerprint[16]; // = {0x06,0x27,0x75,0xD5,0x89,0xB6,0x0D,0x16,0x87,0x10,0x3F,0xD4,0x65,0xB0,0xF5,0xE8};

  JobStatusChangeRequestEvent(const JobStatusChangeRequestEvent&);
  JobStatusChangeRequestEvent& operator=(const JobStatusChangeRequestEvent&);
  JobStatusChangeRequestEvent() : state(( ::apache::airavata::model::status::JobState::type)0) {
  }

  virtual ~JobStatusChangeRequestEvent() throw();
   ::apache::airavata::model::status::JobState::type state;
  JobIdentifier jobIdentity;

  void __set_state(const  ::apache::airavata::model::status::JobState::type val);

  void __set_jobIdentity(const JobIdentifier& val);

  bool operator == (const JobStatusChangeRequestEvent & rhs) const
  {
    if (!(state == rhs.state))
      return false;
    if (!(jobIdentity == rhs.jobIdentity))
      return false;
    return true;
  }
  bool operator != (const JobStatusChangeRequestEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const JobStatusChangeRequestEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const JobStatusChangeRequestEvent& obj);
};

void swap(JobStatusChangeRequestEvent &a, JobStatusChangeRequestEvent &b);

typedef struct _Message__isset {
  _Message__isset() : updatedTime(false), messageLevel(false) {}
  bool updatedTime :1;
  bool messageLevel :1;
} _Message__isset;

class Message {
 public:

  static const char* ascii_fingerprint; // = "6904C391426E568AF9DEAF69860C076A";
  static const uint8_t binary_fingerprint[16]; // = {0x69,0x04,0xC3,0x91,0x42,0x6E,0x56,0x8A,0xF9,0xDE,0xAF,0x69,0x86,0x0C,0x07,0x6A};

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : event(), messageId("DO_NOT_SET_AT_CLIENTS"), messageType((MessageType::type)0), updatedTime(0), messageLevel((MessageLevel::type)0) {
  }

  virtual ~Message() throw();
  std::string event;
  std::string messageId;
  MessageType::type messageType;
  int64_t updatedTime;
  MessageLevel::type messageLevel;

  _Message__isset __isset;

  void __set_event(const std::string& val);

  void __set_messageId(const std::string& val);

  void __set_messageType(const MessageType::type val);

  void __set_updatedTime(const int64_t val);

  void __set_messageLevel(const MessageLevel::type val);

  bool operator == (const Message & rhs) const
  {
    if (!(event == rhs.event))
      return false;
    if (!(messageId == rhs.messageId))
      return false;
    if (!(messageType == rhs.messageType))
      return false;
    if (__isset.updatedTime != rhs.__isset.updatedTime)
      return false;
    else if (__isset.updatedTime && !(updatedTime == rhs.updatedTime))
      return false;
    if (__isset.messageLevel != rhs.__isset.messageLevel)
      return false;
    else if (__isset.messageLevel && !(messageLevel == rhs.messageLevel))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Message& obj);
};

void swap(Message &a, Message &b);

}}}}} // namespace

#endif
