#pragma once

#include <iosfwd>
#include <string>

#include <some-package-name/export.hxx>

namespace some_package_name
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  SOME_PACKAGE_NAME_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
