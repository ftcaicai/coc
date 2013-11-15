// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IoFile.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_IoFile_2eproto() {
  delete IoFileRequest::default_instance_;
  delete IoFileResponse::default_instance_;
  delete IoFileResponse_IoData::default_instance_;
}

void protobuf_AddDesc_IoFile_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  IoFileRequest::default_instance_ = new IoFileRequest();
  IoFileResponse::default_instance_ = new IoFileResponse();
  IoFileResponse_IoData::default_instance_ = new IoFileResponse_IoData();
  IoFileRequest::default_instance_->InitAsDefaultInstance();
  IoFileResponse::default_instance_->InitAsDefaultInstance();
  IoFileResponse_IoData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IoFile_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IoFile_2eproto {
  StaticDescriptorInitializer_IoFile_2eproto() {
    protobuf_AddDesc_IoFile_2eproto();
  }
} static_descriptor_initializer_IoFile_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int IoFileRequest::kVerifyCodeFieldNumber;
const int IoFileRequest::kRequiredFileFieldNumber;
const int IoFileRequest::kIndexFieldNumber;
#endif  // !_MSC_VER

IoFileRequest::IoFileRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void IoFileRequest::InitAsDefaultInstance() {
}

IoFileRequest::IoFileRequest(const IoFileRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void IoFileRequest::SharedCtor() {
  _cached_size_ = 0;
  verifycode_ = GOOGLE_ULONGLONG(0);
  requiredfile_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  index_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IoFileRequest::~IoFileRequest() {
  SharedDtor();
}

void IoFileRequest::SharedDtor() {
  if (requiredfile_ != &::google::protobuf::internal::kEmptyString) {
    delete requiredfile_;
  }
  if (this != default_instance_) {
  }
}

void IoFileRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IoFileRequest& IoFileRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IoFile_2eproto();  return *default_instance_;
}

IoFileRequest* IoFileRequest::default_instance_ = NULL;

IoFileRequest* IoFileRequest::New() const {
  return new IoFileRequest;
}

void IoFileRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verifycode_ = GOOGLE_ULONGLONG(0);
    if (has_requiredfile()) {
      if (requiredfile_ != &::google::protobuf::internal::kEmptyString) {
        requiredfile_->clear();
      }
    }
    index_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool IoFileRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 verifyCode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &verifycode_)));
          set_has_verifycode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_requiredFile;
        break;
      }
      
      // required string requiredFile = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_requiredFile:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_requiredfile()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_index;
        break;
      }
      
      // required uint32 index = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
          set_has_index();
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

void IoFileRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 verifyCode = 1;
  if (has_verifycode()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->verifycode(), output);
  }
  
  // required string requiredFile = 2;
  if (has_requiredfile()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->requiredfile(), output);
  }
  
  // required uint32 index = 3;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->index(), output);
  }
  
}

int IoFileRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 verifyCode = 1;
    if (has_verifycode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->verifycode());
    }
    
    // required string requiredFile = 2;
    if (has_requiredfile()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->requiredfile());
    }
    
    // required uint32 index = 3;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IoFileRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IoFileRequest*>(&from));
}

void IoFileRequest::MergeFrom(const IoFileRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verifycode()) {
      set_verifycode(from.verifycode());
    }
    if (from.has_requiredfile()) {
      set_requiredfile(from.requiredfile());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
  }
}

void IoFileRequest::CopyFrom(const IoFileRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IoFileRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  
  return true;
}

void IoFileRequest::Swap(IoFileRequest* other) {
  if (other != this) {
    std::swap(verifycode_, other->verifycode_);
    std::swap(requiredfile_, other->requiredfile_);
    std::swap(index_, other->index_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IoFileRequest::GetTypeName() const {
  return "message.IoFileRequest";
}


// ===================================================================

#ifndef _MSC_VER
const int IoFileResponse_IoData::kDataFieldNumber;
#endif  // !_MSC_VER

IoFileResponse_IoData::IoFileResponse_IoData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void IoFileResponse_IoData::InitAsDefaultInstance() {
}

IoFileResponse_IoData::IoFileResponse_IoData(const IoFileResponse_IoData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void IoFileResponse_IoData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IoFileResponse_IoData::~IoFileResponse_IoData() {
  SharedDtor();
}

void IoFileResponse_IoData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void IoFileResponse_IoData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IoFileResponse_IoData& IoFileResponse_IoData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IoFile_2eproto();  return *default_instance_;
}

IoFileResponse_IoData* IoFileResponse_IoData::default_instance_ = NULL;

IoFileResponse_IoData* IoFileResponse_IoData::New() const {
  return new IoFileResponse_IoData;
}

void IoFileResponse_IoData::Clear() {
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool IoFileResponse_IoData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_data;
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

void IoFileResponse_IoData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated bytes data = 1;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->data(i), output);
  }
  
}

int IoFileResponse_IoData::ByteSize() const {
  int total_size = 0;
  
  // repeated bytes data = 1;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->data(i));
  }
  
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IoFileResponse_IoData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IoFileResponse_IoData*>(&from));
}

void IoFileResponse_IoData::MergeFrom(const IoFileResponse_IoData& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
}

void IoFileResponse_IoData::CopyFrom(const IoFileResponse_IoData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IoFileResponse_IoData::IsInitialized() const {
  
  return true;
}

void IoFileResponse_IoData::Swap(IoFileResponse_IoData* other) {
  if (other != this) {
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IoFileResponse_IoData::GetTypeName() const {
  return "message.IoFileResponse.IoData";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int IoFileResponse::kResultFieldNumber;
const int IoFileResponse::kInfoFieldNumber;
const int IoFileResponse::kMaxPackageFieldNumber;
const int IoFileResponse::kIndexFieldNumber;
const int IoFileResponse::kIoDataFieldNumber;
#endif  // !_MSC_VER

IoFileResponse::IoFileResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void IoFileResponse::InitAsDefaultInstance() {
  iodata_ = const_cast< ::message::IoFileResponse_IoData*>(&::message::IoFileResponse_IoData::default_instance());
}

IoFileResponse::IoFileResponse(const IoFileResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void IoFileResponse::SharedCtor() {
  _cached_size_ = 0;
  result_ = 0;
  info_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  maxpackage_ = 0u;
  index_ = 0u;
  iodata_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IoFileResponse::~IoFileResponse() {
  SharedDtor();
}

void IoFileResponse::SharedDtor() {
  if (info_ != &::google::protobuf::internal::kEmptyString) {
    delete info_;
  }
  if (this != default_instance_) {
    delete iodata_;
  }
}

void IoFileResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IoFileResponse& IoFileResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_IoFile_2eproto();  return *default_instance_;
}

IoFileResponse* IoFileResponse::default_instance_ = NULL;

IoFileResponse* IoFileResponse::New() const {
  return new IoFileResponse;
}

void IoFileResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    result_ = 0;
    if (has_info()) {
      if (info_ != &::google::protobuf::internal::kEmptyString) {
        info_->clear();
      }
    }
    maxpackage_ = 0u;
    index_ = 0u;
    if (has_iodata()) {
      if (iodata_ != NULL) iodata_->::message::IoFileResponse_IoData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool IoFileResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint32 result = 1 [default = 0];
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
        if (input->ExpectTag(24)) goto parse_maxPackage;
        break;
      }
      
      // optional uint32 maxPackage = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxPackage:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxpackage_)));
          set_has_maxpackage();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_index;
        break;
      }
      
      // optional uint32 index = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_ioData;
        break;
      }
      
      // optional .message.IoFileResponse.IoData ioData = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ioData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_iodata()));
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

void IoFileResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional sint32 result = 1 [default = 0];
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(1, this->result(), output);
  }
  
  // optional string info = 2;
  if (has_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->info(), output);
  }
  
  // optional uint32 maxPackage = 3;
  if (has_maxpackage()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->maxpackage(), output);
  }
  
  // optional uint32 index = 4;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->index(), output);
  }
  
  // optional .message.IoFileResponse.IoData ioData = 5;
  if (has_iodata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->iodata(), output);
  }
  
}

int IoFileResponse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional sint32 result = 1 [default = 0];
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
    
    // optional uint32 maxPackage = 3;
    if (has_maxpackage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->maxpackage());
    }
    
    // optional uint32 index = 4;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->index());
    }
    
    // optional .message.IoFileResponse.IoData ioData = 5;
    if (has_iodata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->iodata());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IoFileResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IoFileResponse*>(&from));
}

void IoFileResponse::MergeFrom(const IoFileResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_result()) {
      set_result(from.result());
    }
    if (from.has_info()) {
      set_info(from.info());
    }
    if (from.has_maxpackage()) {
      set_maxpackage(from.maxpackage());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_iodata()) {
      mutable_iodata()->::message::IoFileResponse_IoData::MergeFrom(from.iodata());
    }
  }
}

void IoFileResponse::CopyFrom(const IoFileResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IoFileResponse::IsInitialized() const {
  
  return true;
}

void IoFileResponse::Swap(IoFileResponse* other) {
  if (other != this) {
    std::swap(result_, other->result_);
    std::swap(info_, other->info_);
    std::swap(maxpackage_, other->maxpackage_);
    std::swap(index_, other->index_);
    std::swap(iodata_, other->iodata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IoFileResponse::GetTypeName() const {
  return "message.IoFileResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)
