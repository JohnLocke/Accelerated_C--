// 1-3
// Is the following program valid? If so, what does it do? If not, why not?
#include <iostream>
#include <string>

int main()
{ 
    { const std::string s = "a string";
      std::cout << s << std::endl; } 

    { const std::string s = "another string";
      std::cout << s << std::endl; }
    return 0;
}

// Solustion: Yes.
// Each block constitute its own scope – all local variables and statements within each scope are independent to each other. 
// The const std::string variable s in block 1 is not the same as the const std::string variable s in block 2.
