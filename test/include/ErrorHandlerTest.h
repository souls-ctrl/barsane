//
// Created by souls on 30/04/2020.
//

#ifndef BARZANE_ERRORHANDLERTEST_H
#define BARZANE_ERRORHANDLERTEST_H

#include "Test.h"
#include "expect.h"
#include "ErrorHandler.h"
#include <Error.h>

class ErrorHandlerTest: public Test {

    public:
        void run();

    private:
        void verifyEmpty_WhenAdd();
        void verifyEmpty_When_Initiate();
};


#endif //BARZANE_ERRORHANDLERTEST_H
