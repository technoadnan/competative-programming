#include <iostream>
using namespace std;

int main()
{
    std::string my_string = "hello world";
    std::string new_value = std::move(my_string);

    // std::cout << "new_value: " << new_value << std::endl; // prints "hello world"
    // std::cout << "my_string: " << my_string << std::endl; // likely empty!
    // cout << my_string.size() << endl;

    string my_str = "hello";
    string new_val = std::move(my_str);
    string new_val = static_cast<string&&>(my_str);
    cout << new_val << endl;
    cout << my_str << endl;
}