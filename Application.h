//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_APPLICATION_H
#define ULTIMATE_CARD_APPLICATION_H
#pragma once
#include "Smart_Card.h"
#include "General_Info_Decorator.h"
#include "Medical_Decorator.h"
#include "Bank_Decorator.h"
/**
 * \brief The main class you use to contact with system
 */
class Application{
    Smart_Card *source = new Smart_Card;
public:
    /**
     * \brief A function with general info about person like name, birth date and gender
     * @return Returns all general info
     */
    virtual std::string get_general_information()
    {

    }
    /**
     * \brief A func about medical information like insurance number and blood_type
     * @return Gives u insurance number and blood type
     */
    std::string get_medical_information()
    {
        source = new Medical_Decorator(source);
        std::string ans = source->get_medical_information();
        delete source;
        return ans;
    }
    /**
     * \brief All info about banks
     * @return Returns u card_number and individual taxes number
     */
    std::string get_bank_information()
    {
        source = new Bank_Decorator(source);
        std::string ans = source->get_bank_information();
        delete source;
        return ans;
    }
};

#endif //ULTIMATE_CARD_APPLICATION_H
