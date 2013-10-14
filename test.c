
#include <stdbool.h>
#include <assert.h>
#include "src/str-ends-with.h"

int main(int argc, char **argv) {
  assert(false == str_ends_with("hello", "hello world"));
  assert(false == str_ends_with("hello", "hell"));
  assert(false == str_ends_with("hello", "hel"));
  assert(false == str_ends_with("hello", "he"));
  assert(false == str_ends_with("hello", "h"));
  assert(true == str_ends_with("hello", "o"));
  assert(true == str_ends_with("hello", "lo"));
  assert(true == str_ends_with("hello", "llo"));
  assert(true == str_ends_with("hello", "ello"));
  assert(true == str_ends_with("hello", "hello"));
  return 0;
}
