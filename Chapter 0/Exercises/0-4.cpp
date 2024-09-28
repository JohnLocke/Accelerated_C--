// 0-4
// Write a program that, when run, writes the Hello, world! program as its output.

#include <iostream>

int main()
{
    std::cout << "// a small C++ program" << std::endl;
    std::cout << "#include <iostream>\n\r"<< std::endl;
    std::cout << "int main()" << std::endl;
    std::cout << "{" << std::endl;
    std::cout << "    std::cout << \"Hello, world!\" << std::endl;" << std::endl;
    std::cout << "    return 0;" << std::endl;
    std::cout << "}" << std::endl;
    return 0;
}

// Solution: Use \n\r instead of \n.