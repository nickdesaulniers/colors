#Colors
A C++ library for inserting ANSI color code escape sequences in a string to
be printed to a terminal.

##Build
Colors is meant to be built as a static library.
```
mkdir build
cd build
cmake ..
make
```

##Usage
```c++
#include "colors.h"
std::string first = colors::fg::red("Nick");
std::string last = colors::bg::blue("Desaulniers");
std::cout << colors::style::bold(first + last) << std::endl;
```

See `include/colors.h` for all colors/functions.

