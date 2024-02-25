#include <iostream>
#include <vector>



int main()
{
    auto isOdd = [](int candidate) {return candidate % 2 != 0;};
    bool is3Odd = isOdd(3);
    bool is4Odd = isOdd(4);
    std::cout << is3Odd << std::endl;
    std::cout << is4Odd << std:: endl;
    return 0;
}