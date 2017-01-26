#include <iostream>

using namespace std;

extern int count5;

void write_extern(void) {
    std::cout << "Count is: " << count5 << std::endl;
}