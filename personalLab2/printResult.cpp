//
// Created by Garrett on 10/27/2022.
//

#include <sstream>
#include <string>
#include <iostream>
#include "printResult.h"
#include "Quiz.h"


void printResult(int questions, int correct, int wrong) {
    std::stringstream ss;
    ss << "Number of questions: " << questions << "\n" << "Number correct answers: " << correct << "\n" << "Number wrong answers: " << wrong << "\n" << "Final score: " << Quiz::score << "\n";
    std::string format = ss.str();
    std::cout << format << std::endl;
}
