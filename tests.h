//
// Created by parallels on 4/8/18.
//

#ifndef ULTIMATE_CARD_TESTS_H
#define ULTIMATE_CARD_TESTS_H
#pragma once
#include <gtest/gtest.h>
#include "Application.h"

TEST(Medical_and_General, testik)
{
    Application *a = new Application;
    EXPECT_EQ("insurance number: 2; blood type: AB", a->get_medical_information());
    EXPECT_EQ("Vasya Ivanov 1.1.2000", a->get_general_information());
delete a;
}

TEST(Medical_and_Bank, testik)
{
    Application *a = new Application;
    EXPECT_EQ("insurance number: 2; blood type: AB", a->get_medical_information());
    EXPECT_EQ("4242", a->get_bank_information());
    delete a;
}

TEST(General_and_Bank, testik)
{
    Application *a = new Application;
    EXPECT_EQ("Vasya Ivanov 1.1.2000", a->get_general_information());
    EXPECT_EQ("4242", a->get_bank_information());
    delete a;
}

TEST(General_and_Bank_and_Medical, testik)
{
    Application *a = new Application;
    EXPECT_EQ("Vasya Ivanov 1.1.2000", a->get_general_information());
    EXPECT_EQ("4242", a->get_bank_information());
    EXPECT_EQ("insurance number: 2; blood type: AB", a->get_medical_information());
    delete a;
}


#endif //ULTIMATE_CARD_TESTS_H
