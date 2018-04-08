//
// Created by parallels on 4/6/18.
//

#ifndef ULTIMATE_CARD_SMART_CARD_H
#define ULTIMATE_CARD_SMART_CARD_H

#include <string>
class Smart_Card
{
private:
    std::string first_name, second_name;
    int day_of_birth, month_of_birth, year_of_birth, individual_taxes_number, insurance_number, driving_licence_number, bank_card_number, id;
public:
    Smart_Card(int _id = 0)
    {
        id = _id;
    }
    const std::string get_name()
    {
        //here we get name from base by id
        first_name = "Vasya"; //stub
        second_name = "Ivanov"; //stub
        return first_name + ' ' + second_name;
    }
    const std::string get_date_of_birth()
    {
        //here we get date of birth from base by id
        day_of_birth = 1; //stub
        month_of_birth = 1; //stub
        year_of_birth = 2000; //stub
        return std::to_string(day_of_birth) + '.' + std::to_string(month_of_birth) + '.' + std::to_string(year_of_birth);
    }
    const std::string get_taxes_number()
    {
        //here we get individual_taxes_number from base by id
        individual_taxes_number = 1; //stub;
        return std::to_string(individual_taxes_number);
    }
    const std::string get_insurance()
    {
        //here we get insurance_number from base by id
        insurance_number = 2; //stub
        return std::to_string(insurance_number);
    }
    const std::string get_bank_card_number()
    {
        //here we get bank_card_number from base by id
        bank_card_number = 4242; //stub
        return std::to_string(bank_card_number);
    }
    const std::string get_driving_licence()
    {
        //here we get driving_licence from base by id
        driving_licence_number = 3; //stub
        return  std::to_string(driving_licence_number);
    }
    virtual std::string get_general_information(){}
    virtual std::string  get_medical_information(){}
    virtual std::string get_bank_information(){}
};

#endif //ULTIMATE_CARD_SMART_CARD_H
