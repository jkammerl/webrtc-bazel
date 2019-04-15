// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// https://developers.google.com/protocol-buffers/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef GOOGLE_PROTOBUF_COMPILER_PHP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_PHP_GENERATOR_H__

#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/descriptor.h>

#include <string>

namespace google {
namespace protobuf_webrtc {
namespace compiler {
namespace php {

class LIBPROTOC_EXPORT Generator
    : public google::protobuf_webrtc::compiler::CodeGenerator {
  virtual bool Generate(
      const FileDescriptor* file,
      const string& parameter,
      GeneratorContext* generator_context,
      string* error) const;
};

// To skip reserved keywords in php, some generated classname are prefixed.
// Other code generators may need following API to figure out the actual
// classname.
LIBPROTOC_EXPORT std::string GeneratedClassName(
    const google::protobuf_webrtc::Descriptor* desc);
LIBPROTOC_EXPORT std::string GeneratedClassName(
    const google::protobuf_webrtc::EnumDescriptor* desc);
LIBPROTOC_EXPORT std::string GeneratedClassName(
    const google::protobuf_webrtc::ServiceDescriptor* desc);

}  // namespace php
}  // namespace compiler
}  // namespace protobuf_webrtc
}  // namespace google

#endif  // GOOGLE_PROTOBUF_COMPILER_PHP_GENERATOR_H__
