// 1-5
// Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.
// #include <iostream>
// #include <string>
 
// int main()
// {
//     {
//         std::string s = "a string";
//         {
//             std::string x = s + ", really";
//             std::cout << s << std::endl;
//         }
//         std::cout << x << std::endl;
//     }
//     return 0;
// }

// Solution: No.
// From inside scope perspective, the variable x is not declared.

// Rewrite version
#include <iostream>
#include <string>

int main()
{
    {
        std::string s = "a string";
        std::string x = s + ", really";
        std::cout << s << std::endl;
        std::cout << x << std::endl;
    }
    return 0;
}