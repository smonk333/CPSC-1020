// here are the required function signatures
// Gradescope will not work without them all included

bool isOdd(int n) {
    if (n % 2 == 1) {
        return true;
    }
    else {
        return false;
    }
}

int len3nplus1(int value) {
    //make a counter for the number of times that the loop has iterated
    int i = 0;

    while (value != 1){
        if (isOdd(value)){
            value = value * 3;
            value = value + 1;
            i++;
        }

        else if (!isOdd(value)){
            value = value / 2;
            i++;
        }
    }
    return i + 1;
}

int sumSeq3nPlus1(int value) {
    //make a variable to hold the total of the numbers in the sequence
    int runningTotal = value;

    while (value != 1){
        if (isOdd(value)){
            value = value * 3;
            value = value + 1;
            runningTotal += value;
        }
        else if (!isOdd(value)){
            value = value / 2;
            runningTotal += value;
        }
    }
    return runningTotal;
}

int longestSequence(int max) {
    //make an int to hold the current longest sequence number
    int currentLongest = 0;

    for (int i = 1; i <= max; i++){
        if (len3nplus1(i) > currentLongest){
            currentLongest = i;
        }
    }
    return currentLongest;
}
