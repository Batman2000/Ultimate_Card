//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_GENERAL_INFO_DECORATOR_H
#define ULTIMATE_CARD_GENERAL_INFO_DECORATOR_H
#include "base_decorator.h"
#include <iostream>
/**
 * \brief Decorator of Info
 */
class General_Info_Decorator : public Base_Card_Decorator{
public:
    /**
     * gives u general information
     * @return Returns a string from name and date of birth
     */
    std::string get_general_information() override
    {
        return wrappee->get_name() + ' ' + wrappee->get_date_of_birth();
    }
    General_Info_Decorator(Smart_Card *s)
    {
        wrappee = s;
    }
};

#endif //ULTIMATE_CARD_GENERAL_INFO_DECORATOR_H
