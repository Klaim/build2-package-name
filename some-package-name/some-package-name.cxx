#include <some-package-name/some-package-name.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace some_package_name
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
