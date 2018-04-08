#include <iostream>
#include "Application.h"
int main() {
    Application a;
    std::cout << a.get_bank_information() << std::endl;
    std::cout << a.get_medical_information() << std::endl;
    std::cout << a.get_general_information();
    return 0;
}
