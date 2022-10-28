//
// Created by Garrett on 10/27/2022.
//

#include "Quiz.h"

Quiz::Quiz() {
    question = "";
    answer = "";
    score = 0;
}

Quiz::Quiz(std::string q, std::string a) {
    question = q;
    answer = a;
}

std::string Quiz::getQuestion() {
    return question;
}

std::string Quiz::getAnswer() {
    return answer;
}

int  Quiz::getScore() {
    return score;
}

void  Quiz::updateScore(int val) {
    if (score == 0 && val <= 0){
        score += val;
    }

    if (score + val < 0){
        score = 0;
    }

    else {
        score += val;
    }
}