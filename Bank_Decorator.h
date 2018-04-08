//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_BANK_DECORATOR_H
#define ULTIMATE_CARD_BANK_DECORATOR_H

#include "base_decorator.h"
#include <iostream>
/**
 * \brief All bank information about person
 */
class Bank_Decorator : public Base_Card_Decorator{
public:
    /**
     * \brief Bank information like card number and itn
     * @return Returns card number and individual taxes number
     */
    std::string get_bank_information() override
    {
       return wrappee->get_bank_card_number();
    }
    Bank_Decorator(Smart_Card *s)
    {
        wrappee = s;
    }
};

#endif //ULTIMATE_CARD_BANK_DECORATOR_H
