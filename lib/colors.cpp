#include <string>
#include "colors.h"
std::string colors::fg::red (const std::string& str) {
  return "\u001b[31m" + str + "\u001b[39m";
}
std::string colors::fg::green (const std::string& str) {
  return "\u001b[32m" + str + "\u001b[39m";
}
std::string colors::fg::blue (const std::string& str) {
  return "\u001b[34m" + str + "\u001b[39m";
}
std::string colors::fg::black (const std::string& str) {
  return "\u001b[30m" + str + "\u001b[39m";
}
std::string colors::fg::yellow (const std::string& str) {
  return "\u001b[33m" + str + "\u001b[39m";
}
std::string colors::fg::magenta (const std::string& str) {
  return "\u001b[35m" + str + "\u001b[39m";
}
std::string colors::fg::cyan (const std::string& str) {
  return "\u001b[36m" + str + "\u001b[39m";
}
std::string colors::fg::white (const std::string& str) {
  return "\u001b[37m" + str + "\u001b[39m";
}
std::string colors::fg::gray (const std::string& str) {
  return "\u001b[90m" + str + "\u001b[39m";
}
std::string colors::fg::grey (const std::string& str) {
  return gray(str);
}
std::string colors::bg::black (const std::string& str) {
  return "\u001b[40m" + str + "\u001b[49m";
}
std::string colors::bg::red (const std::string& str) {
  return "\u001b[41m" + str + "\u001b[49m";
}
std::string colors::bg::green (const std::string& str) {
  return "\u001b[42m" + str + "\u001b[49m";
}
std::string colors::bg::yellow (const std::string& str) {
  return "\u001b[43m" + str + "\u001b[49m";
}
std::string colors::bg::blue (const std::string& str) {
  return "\u001b[44m" + str + "\u001b[49m";
}
std::string colors::bg::magenta (const std::string& str) {
  return "\u001b[45m" + str + "\u001b[49m";
}
std::string colors::bg::cyan (const std::string& str) {
  return "\u001b[46m" + str + "\u001b[49m";
}
std::string colors::bg::white (const std::string& str) {
  return "\u001b[47m" + str + "\u001b[49m";
}
std::string colors::style::bold (const std::string& str) {
  return "\u001b[1m" + str + "\u001b[22m";
}
std::string colors::style::dim (const std::string& str) {
  return "\u001b[2m" + str + "\u001b[22m";
}
std::string colors::style::italic (const std::string& str) {
  return "\u001b[3m" + str + "\u001b[23m";
}
std::string colors::style::underline (const std::string& str) {
  return "\u001b[4m" + str + "\u001b[24m";
}
std::string colors::style::inverse (const std::string& str) {
  return "\u001b[7m" + str + "\u001b[27m";
}
std::string colors::style::hidden (const std::string& str) {
  return "\u001b[8m" + str + "\u001b[28m";
}
std::string colors::style::strikethrough (const std::string& str) {
  return "\u001b[9m" + str + "\u001b[29m";
}

