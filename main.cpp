#include <iostream>
#include "Application.h"
#include "Application_usual_person.h"
#include "Application_gos_workers.h"
int main() {
    Application_gos_workers a;

    std::cout << a.get_bank_information() << std::endl;
    std::cout << a.get_medical_information() << std::endl;
    std::cout << a.get_general_information();
    Application_usual_person b;
    std::cout << b.get_bank_information() << std::endl;
    std::cout << b.get_medical_information() << std::endl;
    std::cout << b.get_general_information();
    return 0;
}