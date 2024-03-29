LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := libprotobuf-lite

LOCAL_SRC_FILES :=\
	src/google/protobuf/any_lite.cc \
	src/google/protobuf/arena.cc \
	src/google/protobuf/extension_set.cc \
	src/google/protobuf/generated_enum_util.cc \
	src/google/protobuf/generated_message_table_driven_lite.cc \
	src/google/protobuf/generated_message_util.cc \
	src/google/protobuf/implicit_weak_message.cc \
	src/google/protobuf/io/coded_stream.cc \
	src/google/protobuf/io/io_win32.cc \
	src/google/protobuf/io/strtod.cc \
	src/google/protobuf/io/zero_copy_stream.cc \
	src/google/protobuf/io/zero_copy_stream_impl.cc \
	src/google/protobuf/io/zero_copy_stream_impl_lite.cc \
	src/google/protobuf/message_lite.cc \
	src/google/protobuf/parse_context.cc \
	src/google/protobuf/repeated_field.cc \
	src/google/protobuf/stubs/bytestream.cc \
	src/google/protobuf/stubs/common.cc \
	src/google/protobuf/stubs/int128.cc \
	src/google/protobuf/stubs/status.cc \
	src/google/protobuf/stubs/statusor.cc \
	src/google/protobuf/stubs/stringpiece.cc \
	src/google/protobuf/stubs/stringprintf.cc \
	src/google/protobuf/stubs/structurally_valid.cc \
	src/google/protobuf/stubs/strutil.cc \
	src/google/protobuf/stubs/time.cc \
	src/google/protobuf/wire_format_lite.cc

#LOCAL_CFLAGS := -D GOOGLE_PROTOBUF_NO_RTTI=1 -D HAVE_PTHREAD=1
LOCAL_CFLAGS := -D HAVE_PTHREAD=1
LOCAL_CPPFLAGS := -std=c++11 -g0
LOCAL_C_INCLUDES = $(LOCAL_PATH)/src

LOCAL_EXPORT_LDLIBS := -lz -llog
LOCAL_EXPORT_CFLAGS := $(LOCAL_CFLAGS)
LOCAL_EXPORT_CPPFLAGS := $(LOCAL_CPPFLAGS)
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

include $(BUILD_STATIC_LIBRARY)
