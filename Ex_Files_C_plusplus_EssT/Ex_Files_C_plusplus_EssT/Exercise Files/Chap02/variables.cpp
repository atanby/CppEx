
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int i {78};
    cout << format("i is {}\n", i);
}
