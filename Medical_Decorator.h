//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_MEDICAL_DECORATOR_H
#define ULTIMATE_CARD_MEDICAL_DECORATOR_H
#include "base_decorator.h"
#include <iostream>
/**
 * \brief Medical life
 */
class Medical_Decorator : public Base_Card_Decorator{
    std::string blood_type;
public:
    /**
     * Medical info
     * @return Blood type and insurance
     */
    std::string get_medical_information() override
    {
        get_blood_type();
        return "insurance number: " + wrappee->get_insurance() + "; blood type: " + blood_type;
    }
    /**
     * brief Gets blood type from base
     */
    void get_blood_type()
    {
        //gets blood type from base with id of wrappee
        blood_type = "AB"; //stub
    }
    Medical_Decorator(Smart_Card *s)
    {
        wrappee = s;
    }
};

#endif //ULTIMATE_CARD_MEDICAL_DECORATOR_H
