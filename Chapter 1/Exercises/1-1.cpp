// 1-1
// Are the following definitions valid? Why or why not?
#include <string>
const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";
// Solution: Vaild. 
// Either s or t, but not both, may be a string literal or a value of type char.