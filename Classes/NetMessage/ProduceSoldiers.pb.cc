// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProduceSoldiers.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_ProduceSoldiers_2eproto() {
  delete ProduceSoldiersRequest::default_instance_;
  delete ProduceSoldiersRequest_ProduceSoldiers::default_instance_;
  delete ProduceSoldiersResponse::default_instance_;
}

void protobuf_AddDesc_ProduceSoldiers_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ProduceSoldiersRequest::default_instance_ = new ProduceSoldiersRequest();
  ProduceSoldiersRequest_ProduceSoldiers::default_instance_ = new ProduceSoldiersRequest_ProduceSoldiers();
  ProduceSoldiersResponse::default_instance_ = new ProduceSoldiersResponse();
  ProduceSoldiersRequest::default_instance_->InitAsDefaultInstance();
  ProduceSoldiersRequest_ProduceSoldiers::default_instance_->InitAsDefaultInstance();
  ProduceSoldiersResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProduceSoldiers_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProduceSoldiers_2eproto {
  StaticDescriptorInitializer_ProduceSoldiers_2eproto() {
    protobuf_AddDesc_ProduceSoldiers_2eproto();
  }
} static_descriptor_initializer_ProduceSoldiers_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ProduceSoldiersRequest_ProduceSoldiers::kCharacterIdFieldNumber;
const int ProduceSoldiersRequest_ProduceSoldiers::kCharacterLevelFieldNumber;
const int ProduceSoldiersRequest_ProduceSoldiers::kProduceCountFieldNumber;
const int ProduceSoldiersRequest_ProduceSoldiers::kIndexFieldNumber;
const int ProduceSoldiersRequest_ProduceSoldiers::kUuidFieldNumber;
#endif  // !_MSC_VER

ProduceSoldiersRequest_ProduceSoldiers::ProduceSoldiersRequest_ProduceSoldiers()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ProduceSoldiersRequest_ProduceSoldiers::InitAsDefaultInstance() {
}

ProduceSoldiersRequest_ProduceSoldiers::ProduceSoldiersRequest_ProduceSoldiers(const ProduceSoldiersRequest_ProduceSoldiers& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ProduceSoldiersRequest_ProduceSoldiers::SharedCtor() {
  _cached_size_ = 0;
  character_id_ = 0;
  character_level_ = 0;
  produce_count_ = 0;
  index_ = 0;
  uuid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProduceSoldiersRequest_ProduceSoldiers::~ProduceSoldiersRequest_ProduceSoldiers() {
  SharedDtor();
}

void ProduceSoldiersRequest_ProduceSoldiers::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProduceSoldiersRequest_ProduceSoldiers::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ProduceSoldiersRequest_ProduceSoldiers& ProduceSoldiersRequest_ProduceSoldiers::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProduceSoldiers_2eproto();  return *default_instance_;
}

ProduceSoldiersRequest_ProduceSoldiers* ProduceSoldiersRequest_ProduceSoldiers::default_instance_ = NULL;

ProduceSoldiersRequest_ProduceSoldiers* ProduceSoldiersRequest_ProduceSoldiers::New() const {
  return new ProduceSoldiersRequest_ProduceSoldiers;
}

void ProduceSoldiersRequest_ProduceSoldiers::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    character_id_ = 0;
    character_level_ = 0;
    produce_count_ = 0;
    index_ = 0;
    uuid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ProduceSoldiersRequest_ProduceSoldiers::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 character_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &character_id_)));
          set_has_character_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_character_level;
        break;
      }
      
      // optional int32 character_level = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_character_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &character_level_)));
          set_has_character_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_produce_count;
        break;
      }
      
      // optional int32 produce_count = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_produce_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &produce_count_)));
          set_has_produce_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_index;
        break;
      }
      
      // optional int32 index = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_uuid;
        break;
      }
      
      // optional int32 uuid = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uuid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &uuid_)));
          set_has_uuid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ProduceSoldiersRequest_ProduceSoldiers::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 character_id = 1;
  if (has_character_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->character_id(), output);
  }
  
  // optional int32 character_level = 2;
  if (has_character_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->character_level(), output);
  }
  
  // optional int32 produce_count = 3;
  if (has_produce_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->produce_count(), output);
  }
  
  // optional int32 index = 4;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->index(), output);
  }
  
  // optional int32 uuid = 5;
  if (has_uuid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->uuid(), output);
  }
  
}

int ProduceSoldiersRequest_ProduceSoldiers::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 character_id = 1;
    if (has_character_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->character_id());
    }
    
    // optional int32 character_level = 2;
    if (has_character_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->character_level());
    }
    
    // optional int32 produce_count = 3;
    if (has_produce_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->produce_count());
    }
    
    // optional int32 index = 4;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->index());
    }
    
    // optional int32 uuid = 5;
    if (has_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->uuid());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProduceSoldiersRequest_ProduceSoldiers::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ProduceSoldiersRequest_ProduceSoldiers*>(&from));
}

void ProduceSoldiersRequest_ProduceSoldiers::MergeFrom(const ProduceSoldiersRequest_ProduceSoldiers& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_character_id()) {
      set_character_id(from.character_id());
    }
    if (from.has_character_level()) {
      set_character_level(from.character_level());
    }
    if (from.has_produce_count()) {
      set_produce_count(from.produce_count());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_uuid()) {
      set_uuid(from.uuid());
    }
  }
}

void ProduceSoldiersRequest_ProduceSoldiers::CopyFrom(const ProduceSoldiersRequest_ProduceSoldiers& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProduceSoldiersRequest_ProduceSoldiers::IsInitialized() const {
  
  return true;
}

void ProduceSoldiersRequest_ProduceSoldiers::Swap(ProduceSoldiersRequest_ProduceSoldiers* other) {
  if (other != this) {
    std::swap(character_id_, other->character_id_);
    std::swap(character_level_, other->character_level_);
    std::swap(produce_count_, other->produce_count_);
    std::swap(index_, other->index_);
    std::swap(uuid_, other->uuid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ProduceSoldiersRequest_ProduceSoldiers::GetTypeName() const {
  return "message.ProduceSoldiersRequest.ProduceSoldiers";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int ProduceSoldiersRequest::kMailAddressFieldNumber;
const int ProduceSoldiersRequest::kSoldiersListFieldNumber;
const int ProduceSoldiersRequest::kCreateStateFieldNumber;
#endif  // !_MSC_VER

ProduceSoldiersRequest::ProduceSoldiersRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ProduceSoldiersRequest::InitAsDefaultInstance() {
}

ProduceSoldiersRequest::ProduceSoldiersRequest(const ProduceSoldiersRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ProduceSoldiersRequest::SharedCtor() {
  _cached_size_ = 0;
  mailaddress_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  create_state_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProduceSoldiersRequest::~ProduceSoldiersRequest() {
  SharedDtor();
}

void ProduceSoldiersRequest::SharedDtor() {
  if (mailaddress_ != &::google::protobuf::internal::kEmptyString) {
    delete mailaddress_;
  }
  if (this != default_instance_) {
  }
}

void ProduceSoldiersRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ProduceSoldiersRequest& ProduceSoldiersRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProduceSoldiers_2eproto();  return *default_instance_;
}

ProduceSoldiersRequest* ProduceSoldiersRequest::default_instance_ = NULL;

ProduceSoldiersRequest* ProduceSoldiersRequest::New() const {
  return new ProduceSoldiersRequest;
}

void ProduceSoldiersRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_mailaddress()) {
      if (mailaddress_ != &::google::protobuf::internal::kEmptyString) {
        mailaddress_->clear();
      }
    }
    create_state_ = 0;
  }
  soldierslist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ProduceSoldiersRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string mailAddress = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mailaddress()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_soldiersList;
        break;
      }
      
      // repeated .message.ProduceSoldiersRequest.ProduceSoldiers soldiersList = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_soldiersList:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_soldierslist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_soldiersList;
        if (input->ExpectTag(24)) goto parse_create_state;
        break;
      }
      
      // optional int32 create_state = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_create_state:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &create_state_)));
          set_has_create_state();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ProduceSoldiersRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string mailAddress = 1;
  if (has_mailaddress()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->mailaddress(), output);
  }
  
  // repeated .message.ProduceSoldiersRequest.ProduceSoldiers soldiersList = 2;
  for (int i = 0; i < this->soldierslist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->soldierslist(i), output);
  }
  
  // optional int32 create_state = 3;
  if (has_create_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->create_state(), output);
  }
  
}

int ProduceSoldiersRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string mailAddress = 1;
    if (has_mailaddress()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->mailaddress());
    }
    
    // optional int32 create_state = 3;
    if (has_create_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->create_state());
    }
    
  }
  // repeated .message.ProduceSoldiersRequest.ProduceSoldiers soldiersList = 2;
  total_size += 1 * this->soldierslist_size();
  for (int i = 0; i < this->soldierslist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->soldierslist(i));
  }
  
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProduceSoldiersRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ProduceSoldiersRequest*>(&from));
}

void ProduceSoldiersRequest::MergeFrom(const ProduceSoldiersRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  soldierslist_.MergeFrom(from.soldierslist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_mailaddress()) {
      set_mailaddress(from.mailaddress());
    }
    if (from.has_create_state()) {
      set_create_state(from.create_state());
    }
  }
}

void ProduceSoldiersRequest::CopyFrom(const ProduceSoldiersRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProduceSoldiersRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void ProduceSoldiersRequest::Swap(ProduceSoldiersRequest* other) {
  if (other != this) {
    std::swap(mailaddress_, other->mailaddress_);
    soldierslist_.Swap(&other->soldierslist_);
    std::swap(create_state_, other->create_state_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ProduceSoldiersRequest::GetTypeName() const {
  return "message.ProduceSoldiersRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int ProduceSoldiersResponse::kResultFieldNumber;
const int ProduceSoldiersResponse::kInfoFieldNumber;
#endif  // !_MSC_VER

ProduceSoldiersResponse::ProduceSoldiersResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ProduceSoldiersResponse::InitAsDefaultInstance() {
}

ProduceSoldiersResponse::ProduceSoldiersResponse(const ProduceSoldiersResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ProduceSoldiersResponse::SharedCtor() {
  _cached_size_ = 0;
  result_ = 0;
  info_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProduceSoldiersResponse::~ProduceSoldiersResponse() {
  SharedDtor();
}

void ProduceSoldiersResponse::SharedDtor() {
  if (info_ != &::google::protobuf::internal::kEmptyString) {
    delete info_;
  }
  if (this != default_instance_) {
  }
}

void ProduceSoldiersResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ProduceSoldiersResponse& ProduceSoldiersResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProduceSoldiers_2eproto();  return *default_instance_;
}

ProduceSoldiersResponse* ProduceSoldiersResponse::default_instance_ = NULL;

ProduceSoldiersResponse* ProduceSoldiersResponse::New() const {
  return new ProduceSoldiersResponse;
}

void ProduceSoldiersResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = 0;
    if (has_info()) {
      if (info_ != &::google::protobuf::internal::kEmptyString) {
        info_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ProduceSoldiersResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint32 result = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_info;
        break;
      }
      
      // optional string info = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ProduceSoldiersResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint32 result = 1;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->result(), output);
  }
  
  // optional string info = 2;
  if (has_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->info(), output);
  }
  
}

int ProduceSoldiersResponse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint32 result = 1;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->result());
    }
    
    // optional string info = 2;
    if (has_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->info());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProduceSoldiersResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ProduceSoldiersResponse*>(&from));
}

void ProduceSoldiersResponse::MergeFrom(const ProduceSoldiersResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_info()) {
      set_info(from.info());
    }
  }
}

void ProduceSoldiersResponse::CopyFrom(const ProduceSoldiersResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProduceSoldiersResponse::IsInitialized() const {
  
  return true;
}

void ProduceSoldiersResponse::Swap(ProduceSoldiersResponse* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(info_, other->info_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ProduceSoldiersResponse::GetTypeName() const {
  return "message.ProduceSoldiersResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
