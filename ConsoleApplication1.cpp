#include <math.h>
#include <iostream>

/*
Zadania:
* Napisz funkcjê, która dla kolekcji danych liczbowych obliczy œredni¹ arytmetyczn¹.
* Napisz funkcjê, która dla kolekcji danych liczbowych policzy ile jest liczb wiêkszych od œredniej arytmetycznej.
* Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejnoœci.
* Napisz funkcje, która dla kolekcji danych liczbowych obliczy czêstotliwoœæ wystêpowania danej liczby.
* Napisz funkcjê, która dla kolekcji danych liczbowych znajdzie najd³u¿szy rosn¹cy podci¹g.
* Napisz funkcjê, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.
*
*/


// srednia arytmetyczna
double average(int* array, int size) {
    if (size == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return static_cast<double>(sum) / size;
}

int countGreaterThanAverage(int* array, int size) {
    double averageValue = average(array, size);
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > averageValue) {
            counter++;
        }
    }

    return counter;
}

void reverseOrder(int* array, int size, int* reversedArray) {
    for (int i = 0; i < size; i++) {
        reversedArray[i] = array[size - 1 - i];
    }
}

void frequencyOfOccurrences(const int* array, int size) {
    if (size == 0) {
        return;
    }

    std::cout << "Frequency of occurrences:";
    std::unordered_map<int, int> frequency;
    for (int i = 0; i < size; i++) {
        frequency[array[i]]++;
    }

    for (const auto& pair : frequency) {
        std::cout << " " << pair.first << ": " << pair.second;
    }
    std::cout << std::endl;
}

int* longestIncreasingSubsequence(const int* array, int size, int& subsequenceSize) {
    if (size == 0) {
        subsequenceSize = 0;
        return nullptr;
    }

    int* currentSubsequence = new int[size];
    int* longestSubsequence = new int[size];
    int currentLength = 1;
    int longestLength = 1;
    currentSubsequence[0] = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > array[i - 1]) {
            currentSubsequence[currentLength] = array[i];
            currentLength++;
        }
        else {
            if (currentLength > longestLength) {
                longestLength = currentLength;
                delete[] longestSubsequence;
                longestSubsequence = new int[currentLength];
                for (int j = 0; j < currentLength; j++) {
                    longestSubsequence[j] = currentSubsequence[j];
                }
            }
            currentLength = 1;
            currentSubsequence[0] = array[i];
        }
    }

    if (currentLength > longestLength) {
        longestLength = currentLength;
        delete[] longestSubsequence;
        longestSubsequence = new int[currentLength];
        for (int j = 0; j < currentLength; j++) {
            longestSubsequence[j] = currentSubsequence[j];
        }
    }

    subsequenceSize = longestLength;
    delete[] currentSubsequence;
    return longestSubsequence;
}

void separateEvenAndOdd(const int* array, int size, int*& even, int& evenSize, int*& odd, int& oddSize) {
    evenSize = 0;
    oddSize = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenSize++;
        }
        else {
            oddSize++;
        }
    }

    even = new int[evenSize];
    odd = new int[oddSize];

    int evenIndex = 0;
    int oddIndex = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even[evenIndex] = array[i];
            evenIndex++;
        }
        else {
            odd[oddIndex] = array[i];
            oddIndex++;
        }
    }
}

int main() {
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(data) / sizeof(data[0]);

    frequencyOfOccurrences(data, size);

    int subsequenceSize;
    int* subsequence = longestIncreasingSubsequence(data, size, subsequenceSize);
    std::cout << "Longest increasing subsequence:";
    for (int i = 0; i < subsequenceSize; i++) {
        std::cout << " " << subsequence[i];
    }
    std::cout << std::endl;
    delete[] subsequence;

    int* evenNumbers;
    int evenSize;
    int* oddNumbers;
    int oddSize;
    separateEvenAndOdd(data, size, evenNumbers, evenSize, oddNumbers, oddSize);
    std::cout << "Even numbers:";
    for (int i = 0; i < evenSize; i++) {
        std::cout << " " << evenNumbers[i];
    }
    std::cout << std::endl;
    std::cout << "Odd numbers:";
    for (int i = 0; i < oddSize; i++) {
        std::cout << " " << oddNumbers[i];
    }
    std::cout << std::endl;

    delete[] evenNumbers;
    delete[] oddNumbers;

    return 0;
}