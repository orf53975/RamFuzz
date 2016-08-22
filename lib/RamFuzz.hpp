#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "clang/Tooling/Tooling.h"

/// Returns RamFuzz tests for code.  On failure, returns "fail".
std::string ramfuzz(const std::string &code);

/// Runs RamFuzz tool action, capturing output in out.  Returns the
/// result of tool.run().
///
/// @param sources Names of source files that tool will process.
int ramfuzz(clang::tooling::ClangTool &tool,
            const std::vector<std::string> &sources,
            std::ostream &out = std::cout);
