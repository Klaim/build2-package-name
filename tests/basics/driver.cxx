#include <cassert>
#include <sstream>
#include <stdexcept>

#include <some-package-name/version.hxx>
#include <some-package-name/some-package-name.hxx>

int main ()
{
  using namespace std;
  using namespace some_package_name;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
