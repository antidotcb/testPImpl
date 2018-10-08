// Copyright 2018 (с) The Creep Brothers. All rights reserved.
// Created by dbilyk on 10/8/2018.

#pragma once

#include <memory>

class TheClass {
    friend class ThePrivateImplTests;

 public:
    TheClass();
    void publicMethodOfClass();

 protected:
    void methodOfClassToAccessMethodOfPrivateImpl();

 private:
    class ThePrivateImpl;
    ThePrivateImpl& pImpl() const;

 private:
    std::shared_ptr<ThePrivateImpl> m_pImpl;
};
