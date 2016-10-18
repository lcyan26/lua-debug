#pragma once

#include <filesystem>

namespace fs = std::tr2::sys;

namespace vscode
{
	fs::path path_normalize(const fs::path& p);
	fs::path path_uncomplete(const fs::path& p, const fs::path& base, std::error_code& ec);
}