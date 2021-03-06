// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raw_data.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "raw_data.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace test {

namespace {

const ::google::protobuf::Descriptor* RawData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RawData_reflection_ = NULL;
const ::google::protobuf::Descriptor* RawDataArray_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RawDataArray_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_raw_5fdata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_raw_5fdata_2eproto() {
  protobuf_AddDesc_raw_5fdata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raw_data.proto");
  GOOGLE_CHECK(file != NULL);
  RawData_descriptor_ = file->message_type(0);
  static const int RawData_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawData, mystring_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawData, mybytes_),
  };
  RawData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RawData_descriptor_,
      RawData::default_instance_,
      RawData_offsets_,
      -1,
      -1,
      -1,
      sizeof(RawData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawData, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawData, _is_default_instance_));
  RawDataArray_descriptor_ = file->message_type(1);
  static const int RawDataArray_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawDataArray, data_),
  };
  RawDataArray_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RawDataArray_descriptor_,
      RawDataArray::default_instance_,
      RawDataArray_offsets_,
      -1,
      -1,
      -1,
      sizeof(RawDataArray),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawDataArray, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RawDataArray, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_raw_5fdata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RawData_descriptor_, &RawData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RawDataArray_descriptor_, &RawDataArray::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_raw_5fdata_2eproto() {
  delete RawData::default_instance_;
  delete RawData_reflection_;
  delete RawDataArray::default_instance_;
  delete RawDataArray_reflection_;
}

void protobuf_AddDesc_raw_5fdata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_raw_5fdata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016raw_data.proto\022\004test\",\n\007RawData\022\020\n\010myS"
    "tring\030\001 \001(\t\022\017\n\007myBytes\030\002 \001(\014\"+\n\014RawDataA"
    "rray\022\033\n\004data\030\001 \003(\0132\r.test.RawDatab\006proto"
    "3", 121);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raw_data.proto", &protobuf_RegisterTypes);
  RawData::default_instance_ = new RawData();
  RawDataArray::default_instance_ = new RawDataArray();
  RawData::default_instance_->InitAsDefaultInstance();
  RawDataArray::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_raw_5fdata_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_raw_5fdata_2eproto {
  StaticDescriptorInitializer_raw_5fdata_2eproto() {
    protobuf_AddDesc_raw_5fdata_2eproto();
  }
} static_descriptor_initializer_raw_5fdata_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RawData::kMyStringFieldNumber;
const int RawData::kMyBytesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RawData::RawData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:test.RawData)
}

void RawData::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RawData::RawData(const RawData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:test.RawData)
}

void RawData::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  mystring_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mybytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

RawData::~RawData() {
  // @@protoc_insertion_point(destructor:test.RawData)
  SharedDtor();
}

void RawData::SharedDtor() {
  mystring_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mybytes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RawData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RawData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RawData_descriptor_;
}

const RawData& RawData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raw_5fdata_2eproto();
  return *default_instance_;
}

RawData* RawData::default_instance_ = NULL;

RawData* RawData::New(::google::protobuf::Arena* arena) const {
  RawData* n = new RawData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RawData::Clear() {
// @@protoc_insertion_point(message_clear_start:test.RawData)
  mystring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mybytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool RawData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test.RawData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string myString = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mystring()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mystring().data(), this->mystring().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "test.RawData.myString"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_myBytes;
        break;
      }

      // optional bytes myBytes = 2;
      case 2: {
        if (tag == 18) {
         parse_myBytes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_mybytes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test.RawData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test.RawData)
  return false;
#undef DO_
}

void RawData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test.RawData)
  // optional string myString = 1;
  if (this->mystring().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mystring().data(), this->mystring().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "test.RawData.myString");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->mystring(), output);
  }

  // optional bytes myBytes = 2;
  if (this->mybytes().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->mybytes(), output);
  }

  // @@protoc_insertion_point(serialize_end:test.RawData)
}

::google::protobuf::uint8* RawData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.RawData)
  // optional string myString = 1;
  if (this->mystring().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mystring().data(), this->mystring().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "test.RawData.myString");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->mystring(), target);
  }

  // optional bytes myBytes = 2;
  if (this->mybytes().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->mybytes(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:test.RawData)
  return target;
}

int RawData::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:test.RawData)
  int total_size = 0;

  // optional string myString = 1;
  if (this->mystring().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mystring());
  }

  // optional bytes myBytes = 2;
  if (this->mybytes().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->mybytes());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RawData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test.RawData)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RawData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RawData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test.RawData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test.RawData)
    MergeFrom(*source);
  }
}

void RawData::MergeFrom(const RawData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test.RawData)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.mystring().size() > 0) {

    mystring_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mystring_);
  }
  if (from.mybytes().size() > 0) {

    mybytes_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mybytes_);
  }
}

void RawData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test.RawData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RawData::CopyFrom(const RawData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.RawData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RawData::IsInitialized() const {

  return true;
}

void RawData::Swap(RawData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RawData::InternalSwap(RawData* other) {
  mystring_.Swap(&other->mystring_);
  mybytes_.Swap(&other->mybytes_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RawData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RawData_descriptor_;
  metadata.reflection = RawData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RawData

// optional string myString = 1;
void RawData::clear_mystring() {
  mystring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RawData::mystring() const {
  // @@protoc_insertion_point(field_get:test.RawData.myString)
  return mystring_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RawData::set_mystring(const ::std::string& value) {
  
  mystring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test.RawData.myString)
}
 void RawData::set_mystring(const char* value) {
  
  mystring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.RawData.myString)
}
 void RawData::set_mystring(const char* value, size_t size) {
  
  mystring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.RawData.myString)
}
 ::std::string* RawData::mutable_mystring() {
  
  // @@protoc_insertion_point(field_mutable:test.RawData.myString)
  return mystring_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RawData::release_mystring() {
  // @@protoc_insertion_point(field_release:test.RawData.myString)
  
  return mystring_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RawData::set_allocated_mystring(::std::string* mystring) {
  if (mystring != NULL) {
    
  } else {
    
  }
  mystring_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mystring);
  // @@protoc_insertion_point(field_set_allocated:test.RawData.myString)
}

// optional bytes myBytes = 2;
void RawData::clear_mybytes() {
  mybytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RawData::mybytes() const {
  // @@protoc_insertion_point(field_get:test.RawData.myBytes)
  return mybytes_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RawData::set_mybytes(const ::std::string& value) {
  
  mybytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test.RawData.myBytes)
}
 void RawData::set_mybytes(const char* value) {
  
  mybytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.RawData.myBytes)
}
 void RawData::set_mybytes(const void* value, size_t size) {
  
  mybytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.RawData.myBytes)
}
 ::std::string* RawData::mutable_mybytes() {
  
  // @@protoc_insertion_point(field_mutable:test.RawData.myBytes)
  return mybytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RawData::release_mybytes() {
  // @@protoc_insertion_point(field_release:test.RawData.myBytes)
  
  return mybytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RawData::set_allocated_mybytes(::std::string* mybytes) {
  if (mybytes != NULL) {
    
  } else {
    
  }
  mybytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mybytes);
  // @@protoc_insertion_point(field_set_allocated:test.RawData.myBytes)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RawDataArray::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RawDataArray::RawDataArray()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:test.RawDataArray)
}

void RawDataArray::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RawDataArray::RawDataArray(const RawDataArray& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:test.RawDataArray)
}

void RawDataArray::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

RawDataArray::~RawDataArray() {
  // @@protoc_insertion_point(destructor:test.RawDataArray)
  SharedDtor();
}

void RawDataArray::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RawDataArray::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RawDataArray::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RawDataArray_descriptor_;
}

const RawDataArray& RawDataArray::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raw_5fdata_2eproto();
  return *default_instance_;
}

RawDataArray* RawDataArray::default_instance_ = NULL;

RawDataArray* RawDataArray::New(::google::protobuf::Arena* arena) const {
  RawDataArray* n = new RawDataArray;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RawDataArray::Clear() {
// @@protoc_insertion_point(message_clear_start:test.RawDataArray)
  data_.Clear();
}

bool RawDataArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test.RawDataArray)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .test.RawData data = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_data;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test.RawDataArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test.RawDataArray)
  return false;
#undef DO_
}

void RawDataArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test.RawDataArray)
  // repeated .test.RawData data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->data(i), output);
  }

  // @@protoc_insertion_point(serialize_end:test.RawDataArray)
}

::google::protobuf::uint8* RawDataArray::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.RawDataArray)
  // repeated .test.RawData data = 1;
  for (unsigned int i = 0, n = this->data_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->data(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:test.RawDataArray)
  return target;
}

int RawDataArray::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:test.RawDataArray)
  int total_size = 0;

  // repeated .test.RawData data = 1;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->data(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RawDataArray::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test.RawDataArray)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RawDataArray* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RawDataArray>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test.RawDataArray)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test.RawDataArray)
    MergeFrom(*source);
  }
}

void RawDataArray::MergeFrom(const RawDataArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test.RawDataArray)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  data_.MergeFrom(from.data_);
}

void RawDataArray::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test.RawDataArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RawDataArray::CopyFrom(const RawDataArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.RawDataArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RawDataArray::IsInitialized() const {

  return true;
}

void RawDataArray::Swap(RawDataArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RawDataArray::InternalSwap(RawDataArray* other) {
  data_.UnsafeArenaSwap(&other->data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RawDataArray::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RawDataArray_descriptor_;
  metadata.reflection = RawDataArray_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RawDataArray

// repeated .test.RawData data = 1;
int RawDataArray::data_size() const {
  return data_.size();
}
void RawDataArray::clear_data() {
  data_.Clear();
}
const ::test::RawData& RawDataArray::data(int index) const {
  // @@protoc_insertion_point(field_get:test.RawDataArray.data)
  return data_.Get(index);
}
::test::RawData* RawDataArray::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:test.RawDataArray.data)
  return data_.Mutable(index);
}
::test::RawData* RawDataArray::add_data() {
  // @@protoc_insertion_point(field_add:test.RawDataArray.data)
  return data_.Add();
}
::google::protobuf::RepeatedPtrField< ::test::RawData >*
RawDataArray::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:test.RawDataArray.data)
  return &data_;
}
const ::google::protobuf::RepeatedPtrField< ::test::RawData >&
RawDataArray::data() const {
  // @@protoc_insertion_point(field_list:test.RawDataArray.data)
  return data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace test

// @@protoc_insertion_point(global_scope)
