// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#include <gtest/gtest.h>

#include "TheClass.h"

class ClassTests : public ::testing::Test {};

TEST_F(ClassTests, base_test) {
    TheClass cls;
    EXPECT_NO_THROW(cls.publicMethodOfClass());
}
