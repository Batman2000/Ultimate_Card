//
// Created by parallels on 4/19/18.
//

#ifndef ULTIMATE_CARD_APPLICATION_GOS_WORKERS_H
#define ULTIMATE_CARD_APPLICATION_GOS_WORKERS_H

#include "Application.h"
/**
 * \brief Same Application, but specially made for people, who work in/with government
 */
class Application_gos_workers: public Application{
    Smart_Card *source = new Smart_Card;
public:
    /**
     * \brief A function with general info about person like name, birth date and gender, also place of work
     * @return Returns all general info
     */
    std::string get_general_information() override
    {
        source = new General_Info_Decorator(source);
        std::string ans = source->get_general_information();
        delete source;
        //gets by id name where worker works
        ans += std::string("\nplace of work:government\n"); //stub
        return ans;

    }
};
#endif //ULTIMATE_CARD_APPLICATION_GOS_WORKERS_H
