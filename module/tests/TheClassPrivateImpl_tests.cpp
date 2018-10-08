// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#include <gtest/gtest.h>

#include "../src/ThePrivateImplOfTheClass.h"

class ThePrivateImplTests : public ::testing::Test {
 protected:
    TheClass::ThePrivateImpl getPImpl() const {
        return {};
    }
};

TEST_F(ThePrivateImplTests, base_test) {
    auto pImpl = getPImpl();
    EXPECT_NO_THROW(pImpl.publicMethod());
}
