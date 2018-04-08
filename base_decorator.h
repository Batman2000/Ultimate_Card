//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_BASE_DECORATOR_H
#define ULTIMATE_CARD_BASE_DECORATOR_H

#include "Smart_Card.h"
/**
 * \brief Just simple decorator
 */
class Base_Card_Decorator : public Smart_Card{
public:
    Smart_Card *wrappee;
    Base_Card_Decorator() = default;
    ~Base_Card_Decorator() = default;
    Base_Card_Decorator(Smart_Card *s)
    {
        wrappee = s;
    }
    virtual std::string get_general_information() override{return wrappee->get_general_information();};
    virtual std::string get_medical_information() override{return wrappee->get_medical_information();};
    virtual std::string get_bank_information() override {return wrappee->get_bank_information();};
};


#endif //ULTIMATE_CARD_BASE_DECORATOR_H
