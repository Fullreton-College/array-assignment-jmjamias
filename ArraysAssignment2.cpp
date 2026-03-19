#include <iostream>

using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main() {
    int scores[20];
    int count = 0;
    int input;

    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n";

    while (count < 20)
    {
        cout << "Enter score " << (count + 1) << ": ";
        cin >> input;

        if (input == -1)
            break;

        if (input < 0 || input > 100)
        {
            cout << "Invalid score. Please enter a value between 0 and 100.\n";
            continue;
        }
        scores[count] = input;
        count++;
    }

  int perfectOnes = countPerfect(scores, count);
    
    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size) {
    int totalPerfect = 0;

    for (int i = 0; i < size; i++)
    {
        if (scores[i] == 100)
            totalPerfect++;
    }

    return totalPerfect;
}
