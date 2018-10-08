// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#include "TheClass.h"

#include <cassert>

#include "ThePrivateImplOfTheClass.h"
TheClass::TheClass()
    : m_pImpl{std::make_shared<ThePrivateImpl>()} {}

TheClass::ThePrivateImpl&
TheClass::pImpl() const {
    assert(m_pImpl);
    return *m_pImpl;
}

void
TheClass::publicMethodOfClass() {
    pImpl().publicMethod();
}

void
TheClass::methodOfClassToAccessMethodOfPrivateImpl() {
    pImpl().anotherMethod();
}
