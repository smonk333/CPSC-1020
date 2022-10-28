//
// Created by Garrett on 10/27/2022.
//

#ifndef PERSONALLAB2_QUIZ_H
#define PERSONALLAB2_QUIZ_H
#include <string>
#include "printResult.h"


class Quiz {
    private:
        std::string question;
        std::string answer;
        int static score;
        friend void printResult(int questions, int correct, int wrong);
    public:
        Quiz();
        Quiz(std::string q, std::string a);
        std::string getQuestion();
        std::string getAnswer();
        int static getScore();
        void static updateScore(int val);
};


#endif //PERSONALLAB2_QUIZ_H
