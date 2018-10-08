// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#include "ThePrivateImplOfTheClass.h"

#include <iostream>

void
TheClass::ThePrivateImpl::publicMethod() {
    std::cout << "ThePrivateImpl::publicMethod" << std::endl;
}

void
TheClass::ThePrivateImpl::anotherMethod() {
    std::cout << "ThePrivateImpl::anotherMethod" << std::endl;
}
