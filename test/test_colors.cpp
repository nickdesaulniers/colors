#include <iostream>
#include "colors.h"
int main () {
  std::cout <<
    colors::fg::black("black ") <<
    colors::fg::red("red ") <<
    colors::fg::green("green ") <<
    colors::fg::yellow("yellow ") <<
    colors::fg::blue("blue ") <<
    colors::fg::magenta("magenta ") <<
    colors::fg::cyan("cyan ") <<
    colors::fg::white("white ") <<
    colors::fg::gray("gray ") <<
    colors::fg::grey("grey ") <<
    std::endl;
  std::cout <<
    colors::bg::black("black ") <<
    colors::bg::red("red ") <<
    colors::bg::green("green ") <<
    colors::bg::yellow("yellow ") <<
    colors::bg::blue("blue ") <<
    colors::bg::magenta("magenta ") <<
    colors::bg::cyan("cyan ") <<
    colors::bg::white("white ") <<
    std::endl;
  std::cout <<
    colors::style::bold("bold ") <<
    colors::style::dim("dim ") <<
    colors::style::italic("italic ") <<
    colors::style::underline("underline ") <<
    colors::style::inverse("inverse ") <<
    colors::style::hidden("hidden ") <<
    colors::style::strikethrough("strikethrough ") <<
    std::endl;
  std::cout << colors::style::strikethrough("strikethrough") << std::endl;
}

