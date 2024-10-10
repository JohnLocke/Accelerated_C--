// 1-4
// What about this one? What if we change }} to };} in the third line from the end?
#include <iostream>
#include <string>

int main()
{
    { const std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}
    return 0;
}

// Solution: Yes.
// Each pair of curly braces {} form a scope. 
// It is okay to have scopes nested within a scope.
// All local variables inside scope are hidden from view of outside scope.

// The additional semi-colon essentially creates a null-statement within the outside scope. i.e. it has no effect to the code. 
// Submitting the program with this semi-colon would yield the same output.