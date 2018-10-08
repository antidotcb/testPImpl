// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#include <gtest/gtest.h>

#include "TheInherited.h"

class InheritedTests : public ::testing::Test {};

TEST_F(InheritedTests, base_test) {
    TheInherited cls;
    EXPECT_NO_THROW(cls.publicMethodOfInherited());
}
