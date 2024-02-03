// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/source_context.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fsource_5fcontext_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fsource_5fcontext_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fsource_5fcontext_2eproto PROTOBUF_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern PROTOBUF_EXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto;
PROTOBUF_NAMESPACE_OPEN
class SourceContext;
class SourceContextDefaultTypeInternal;
PROTOBUF_EXPORT extern SourceContextDefaultTypeInternal _SourceContext_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::SourceContext* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::SourceContext>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class PROTOBUF_EXPORT SourceContext PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.SourceContext) */ {
 public:
  inline SourceContext() : SourceContext(nullptr) {};
  virtual ~SourceContext();

  SourceContext(const SourceContext& from);
  SourceContext(SourceContext&& from) noexcept
    : SourceContext() {
    *this = ::std::move(from);
  }

  inline SourceContext& operator=(const SourceContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline SourceContext& operator=(SourceContext&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SourceContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SourceContext* internal_default_instance() {
    return reinterpret_cast<const SourceContext*>(
               &_SourceContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SourceContext& a, SourceContext& b) {
    a.Swap(&b);
  }
  inline void Swap(SourceContext* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SourceContext* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SourceContext* New() const final {
    return CreateMaybeMessage<SourceContext>(nullptr);
  }

  SourceContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SourceContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SourceContext& from);
  void MergeFrom(const SourceContext& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SourceContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.SourceContext";
  }
  protected:
  explicit SourceContext(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto);
    return ::descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFileNameFieldNumber = 1,
  };
  // string file_name = 1;
  void clear_file_name();
  const std::string& file_name() const;
  void set_file_name(const std::string& value);
  void set_file_name(std::string&& value);
  void set_file_name(const char* value);
  void set_file_name(const char* value, size_t size);
  std::string* mutable_file_name();
  std::string* release_file_name();
  void set_allocated_file_name(std::string* file_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_file_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_file_name(
      std::string* file_name);
  private:
  const std::string& _internal_file_name() const;
  void _internal_set_file_name(const std::string& value);
  std::string* _internal_mutable_file_name();
  public:

  // @@protoc_insertion_point(class_scope:google.protobuf.SourceContext)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2fsource_5fcontext_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SourceContext

// string file_name = 1;
inline void SourceContext::clear_file_name() {
  file_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SourceContext::file_name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.SourceContext.file_name)
  return _internal_file_name();
}
inline void SourceContext::set_file_name(const std::string& value) {
  _internal_set_file_name(value);
  // @@protoc_insertion_point(field_set:google.protobuf.SourceContext.file_name)
}
inline std::string* SourceContext::mutable_file_name() {
  // @@protoc_insertion_point(field_mutable:google.protobuf.SourceContext.file_name)
  return _internal_mutable_file_name();
}
inline const std::string& SourceContext::_internal_file_name() const {
  return file_name_.Get();
}
inline void SourceContext::_internal_set_file_name(const std::string& value) {
  
  file_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SourceContext::set_file_name(std::string&& value) {
  
  file_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.SourceContext.file_name)
}
inline void SourceContext::set_file_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  file_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.protobuf.SourceContext.file_name)
}
inline void SourceContext::set_file_name(const char* value,
    size_t size) {
  
  file_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.SourceContext.file_name)
}
inline std::string* SourceContext::_internal_mutable_file_name() {
  
  return file_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SourceContext::release_file_name() {
  // @@protoc_insertion_point(field_release:google.protobuf.SourceContext.file_name)
  return file_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SourceContext::set_allocated_file_name(std::string* file_name) {
  if (file_name != nullptr) {
    
  } else {
    
  }
  file_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), file_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.SourceContext.file_name)
}
inline std::string* SourceContext::unsafe_arena_release_file_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.SourceContext.file_name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return file_name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SourceContext::unsafe_arena_set_allocated_file_name(
    std::string* file_name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (file_name != nullptr) {
    
  } else {
    
  }
  file_name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      file_name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.SourceContext.file_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fsource_5fcontext_2eproto
