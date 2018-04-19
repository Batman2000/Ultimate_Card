//
// Created by parallels on 4/19/18.
//

#ifndef ULTIMATE_CARD_APPLICATION_USUAL_PERSON_H
#define ULTIMATE_CARD_APPLICATION_USUAL_PERSON_H
#include "Application.h"

/**
 * \brief Same Application, but specially made for people, who don't work in/with government
 */
class Application_usual_person: public Application{
    Smart_Card *source = new Smart_Card;
public:
    /**
     * \brief A function with general info about person like name, birth date and gender, also information if this person ever worked on government
     * @return Returns all general info
     */
    std::string get_general_information() override
    {
        source = new General_Info_Decorator(source);
        std::string ans = source->get_general_information();
        delete source;
        //gets by id name did person ever work
        ans += std::string("\nDid ever work on government: No\n"); //stub
        return ans;

    }
};
#endif //ULTIMATE_CARD_APPLICATION_USUAL_PERSON_H
