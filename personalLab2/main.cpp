#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>

#include "Quiz.h"
#include "printResult.h"

void eraseSubStr(std::string &mainStr, const std::string &toErase) {

    // searching for substring in string
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos) {

        // if substring is found then erase from string
        mainStr.erase(pos, toErase.length());
    }
}

// returns the total # of questions
int getQuestions(std::ifstream &inFile) {
    std::string line;
    int total = 0;

    if (inFile.is_open()) {
        while(getline(inFile, line)) {
            total +=1;
        }
    }

    return total / 2;
}


int Quiz::score = 0;
int main(int argc, char*argv[]) {
    std::string inputDB;
    std::string line;
    std::string myAnswer;
    int totalQuestions = 0;
    int numCorrect = 0;
    int numWrong = 0;
    bool doneWithQuiz = false;
    std::vector <Quiz *>  quizVector;

    // too many args
    if (argc > 2) {
        std::cout << "(Error) Your input file has too many argument(s). Ending .." << std::endl;
        return 0;
    }

    // too few args
    else if (argc == 1) {
        std::cout << "(Error) You must specify a database (.txt) file. Ending..." << std::endl;
        return 0;
    }

    inputDB = argv[1];
    std::ifstream file(inputDB);
    Quiz *qz;

    if (file.is_open()) {
        int size = getQuestions(file);

        file.clear();
        file.seekg(0, std::ifstream::beg);
        for (int x = 0; x < size; x++) {
            std::string question;
            std::string answer;

            // obtaining data from file
            getline(file, question);
            getline(file, answer);

            eraseSubStr(answer, "A: ");

            qz = new Quiz(question, answer);

            // push onto vector
            quizVector.push_back(qz);
            totalQuestions += 1;
        }


        // Shuffling the Quiz Question(s)
        srand(unsigned(time(0)));
        shuffle(quizVector.begin(), quizVector.end(), std::mt19937(std::random_device()()));

        // Question Verification Section
        while (!doneWithQuiz) {
            for (int i = 0; i < totalQuestions; i++) {
                std::cout << quizVector[i]->getQuestion() << std::endl;
                std::cout << "Type in your answer:" << std::endl;
                std::cin.clear();
                std::cin >> myAnswer;


                int x = myAnswer.compare(quizVector[i]->getAnswer());
                if (x == 0) {
                    std::cout << "Correct!" << std::endl;
                    numCorrect += 1;
                    Quiz::updateScore(1);
                    std::cout << "Current score: " << Quiz::getScore() << std::endl << std::endl;
                }
                else {
                    numWrong += 1;
                    Quiz::updateScore(-1);
                    std::cout << "Wrong! Correct answer: " << quizVector[i]->getAnswer() << std::endl;
                    std::cout << "Current score: " << Quiz::getScore() << std::endl << std::endl;

                }

            }

            printResult(totalQuestions, numCorrect, numWrong);
            doneWithQuiz = true;
        }



    }

    else {
        std::cout << "Error occurred trying to open file. Check your command arguments.. Ending ..." << std::endl;
        return 0;
    }

    quizVector.clear(); // give back memory to Vector
    file.close(); // close input file

    return 0;
}
