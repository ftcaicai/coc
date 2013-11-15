// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RevengeBattle.proto

#ifndef PROTOBUF_RevengeBattle_2eproto__INCLUDED
#define PROTOBUF_RevengeBattle_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RevengeBattle_2eproto();
void protobuf_AssignDesc_RevengeBattle_2eproto();
void protobuf_ShutdownFile_RevengeBattle_2eproto();

class RevengeBattleRequest;
class RevengeBattleResponse;

// ===================================================================

class RevengeBattleRequest : public ::google::protobuf::MessageLite {
 public:
  RevengeBattleRequest();
  virtual ~RevengeBattleRequest();
  
  RevengeBattleRequest(const RevengeBattleRequest& from);
  
  inline RevengeBattleRequest& operator=(const RevengeBattleRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const RevengeBattleRequest& default_instance();
  
  void Swap(RevengeBattleRequest* other);
  
  // implements Message ----------------------------------------------
  
  RevengeBattleRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RevengeBattleRequest& from);
  void MergeFrom(const RevengeBattleRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string mailAddress = 1;
  inline bool has_mailaddress() const;
  inline void clear_mailaddress();
  static const int kMailAddressFieldNumber = 1;
  inline const ::std::string& mailaddress() const;
  inline void set_mailaddress(const ::std::string& value);
  inline void set_mailaddress(const char* value);
  inline void set_mailaddress(const char* value, size_t size);
  inline ::std::string* mutable_mailaddress();
  inline ::std::string* release_mailaddress();
  
  // optional string defenceMailAddress = 2;
  inline bool has_defencemailaddress() const;
  inline void clear_defencemailaddress();
  static const int kDefenceMailAddressFieldNumber = 2;
  inline const ::std::string& defencemailaddress() const;
  inline void set_defencemailaddress(const ::std::string& value);
  inline void set_defencemailaddress(const char* value);
  inline void set_defencemailaddress(const char* value, size_t size);
  inline ::std::string* mutable_defencemailaddress();
  inline ::std::string* release_defencemailaddress();
  
  // @@protoc_insertion_point(class_scope:message.RevengeBattleRequest)
 private:
  inline void set_has_mailaddress();
  inline void clear_has_mailaddress();
  inline void set_has_defencemailaddress();
  inline void clear_has_defencemailaddress();
  
  ::std::string* mailaddress_;
  ::std::string* defencemailaddress_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_RevengeBattle_2eproto();
  friend void protobuf_AssignDesc_RevengeBattle_2eproto();
  friend void protobuf_ShutdownFile_RevengeBattle_2eproto();
  
  void InitAsDefaultInstance();
  static RevengeBattleRequest* default_instance_;
};
// -------------------------------------------------------------------

class RevengeBattleResponse : public ::google::protobuf::MessageLite {
 public:
  RevengeBattleResponse();
  virtual ~RevengeBattleResponse();
  
  RevengeBattleResponse(const RevengeBattleResponse& from);
  
  inline RevengeBattleResponse& operator=(const RevengeBattleResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const RevengeBattleResponse& default_instance();
  
  void Swap(RevengeBattleResponse* other);
  
  // implements Message ----------------------------------------------
  
  RevengeBattleResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RevengeBattleResponse& from);
  void MergeFrom(const RevengeBattleResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional sint32 result = 1 [default = 0];
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);
  
  // optional string info = 2;
  inline bool has_info() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 2;
  inline const ::std::string& info() const;
  inline void set_info(const ::std::string& value);
  inline void set_info(const char* value);
  inline void set_info(const char* value, size_t size);
  inline ::std::string* mutable_info();
  inline ::std::string* release_info();
  
  // @@protoc_insertion_point(class_scope:message.RevengeBattleResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_info();
  inline void clear_has_info();
  
  ::std::string* info_;
  ::google::protobuf::int32 result_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_RevengeBattle_2eproto();
  friend void protobuf_AssignDesc_RevengeBattle_2eproto();
  friend void protobuf_ShutdownFile_RevengeBattle_2eproto();
  
  void InitAsDefaultInstance();
  static RevengeBattleResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// RevengeBattleRequest

// required string mailAddress = 1;
inline bool RevengeBattleRequest::has_mailaddress() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RevengeBattleRequest::set_has_mailaddress() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RevengeBattleRequest::clear_has_mailaddress() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RevengeBattleRequest::clear_mailaddress() {
  if (mailaddress_ != &::google::protobuf::internal::kEmptyString) {
    mailaddress_->clear();
  }
  clear_has_mailaddress();
}
inline const ::std::string& RevengeBattleRequest::mailaddress() const {
  return *mailaddress_;
}
inline void RevengeBattleRequest::set_mailaddress(const ::std::string& value) {
  set_has_mailaddress();
  if (mailaddress_ == &::google::protobuf::internal::kEmptyString) {
    mailaddress_ = new ::std::string;
  }
  mailaddress_->assign(value);
}
inline void RevengeBattleRequest::set_mailaddress(const char* value) {
  set_has_mailaddress();
  if (mailaddress_ == &::google::protobuf::internal::kEmptyString) {
    mailaddress_ = new ::std::string;
  }
  mailaddress_->assign(value);
}
inline void RevengeBattleRequest::set_mailaddress(const char* value, size_t size) {
  set_has_mailaddress();
  if (mailaddress_ == &::google::protobuf::internal::kEmptyString) {
    mailaddress_ = new ::std::string;
  }
  mailaddress_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RevengeBattleRequest::mutable_mailaddress() {
  set_has_mailaddress();
  if (mailaddress_ == &::google::protobuf::internal::kEmptyString) {
    mailaddress_ = new ::std::string;
  }
  return mailaddress_;
}
inline ::std::string* RevengeBattleRequest::release_mailaddress() {
  clear_has_mailaddress();
  if (mailaddress_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mailaddress_;
    mailaddress_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string defenceMailAddress = 2;
inline bool RevengeBattleRequest::has_defencemailaddress() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RevengeBattleRequest::set_has_defencemailaddress() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RevengeBattleRequest::clear_has_defencemailaddress() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RevengeBattleRequest::clear_defencemailaddress() {
  if (defencemailaddress_ != &::google::protobuf::internal::kEmptyString) {
    defencemailaddress_->clear();
  }
  clear_has_defencemailaddress();
}
inline const ::std::string& RevengeBattleRequest::defencemailaddress() const {
  return *defencemailaddress_;
}
inline void RevengeBattleRequest::set_defencemailaddress(const ::std::string& value) {
  set_has_defencemailaddress();
  if (defencemailaddress_ == &::google::protobuf::internal::kEmptyString) {
    defencemailaddress_ = new ::std::string;
  }
  defencemailaddress_->assign(value);
}
inline void RevengeBattleRequest::set_defencemailaddress(const char* value) {
  set_has_defencemailaddress();
  if (defencemailaddress_ == &::google::protobuf::internal::kEmptyString) {
    defencemailaddress_ = new ::std::string;
  }
  defencemailaddress_->assign(value);
}
inline void RevengeBattleRequest::set_defencemailaddress(const char* value, size_t size) {
  set_has_defencemailaddress();
  if (defencemailaddress_ == &::google::protobuf::internal::kEmptyString) {
    defencemailaddress_ = new ::std::string;
  }
  defencemailaddress_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RevengeBattleRequest::mutable_defencemailaddress() {
  set_has_defencemailaddress();
  if (defencemailaddress_ == &::google::protobuf::internal::kEmptyString) {
    defencemailaddress_ = new ::std::string;
  }
  return defencemailaddress_;
}
inline ::std::string* RevengeBattleRequest::release_defencemailaddress() {
  clear_has_defencemailaddress();
  if (defencemailaddress_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = defencemailaddress_;
    defencemailaddress_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RevengeBattleResponse

// optional sint32 result = 1 [default = 0];
inline bool RevengeBattleResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RevengeBattleResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RevengeBattleResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RevengeBattleResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 RevengeBattleResponse::result() const {
  return result_;
}
inline void RevengeBattleResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// optional string info = 2;
inline bool RevengeBattleResponse::has_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RevengeBattleResponse::set_has_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RevengeBattleResponse::clear_has_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RevengeBattleResponse::clear_info() {
  if (info_ != &::google::protobuf::internal::kEmptyString) {
    info_->clear();
  }
  clear_has_info();
}
inline const ::std::string& RevengeBattleResponse::info() const {
  return *info_;
}
inline void RevengeBattleResponse::set_info(const ::std::string& value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(value);
}
inline void RevengeBattleResponse::set_info(const char* value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(value);
}
inline void RevengeBattleResponse::set_info(const char* value, size_t size) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  info_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RevengeBattleResponse::mutable_info() {
  set_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    info_ = new ::std::string;
  }
  return info_;
}
inline ::std::string* RevengeBattleResponse::release_info() {
  clear_has_info();
  if (info_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = info_;
    info_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_RevengeBattle_2eproto__INCLUDED