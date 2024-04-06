#include <iostream>
#include <string>

using namespace std;

// Function to check if the user's answer is correct
bool isCorrect(string userAnswer, string correctAnswer) {
    // Convert both answers to lowercase for case-insensitive comparison
    for (char &c : userAnswer)
        c = tolower(c);
    for (char &c : correctAnswer)
        c = tolower(c);

    // Check if the user's answer matches the correct answer
    return userAnswer == correctAnswer;
}

int main() {
    // Questions and corresponding answers
    string questions[] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "Who painted the Mona Lisa?"
    };
    string answers[] = {
        "paris",
        "4",
        "leonardo da vinci"
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    cout << "Welcome to the Simple Question Game!\n";

    // Iterate through each question
    for (int i = 0; i < numQuestions; ++i) {
        cout << "\nQuestion " << i + 1 << ": " << questions[i] << endl;
        cout << "Your answer: ";

        string userAnswer;
        getline(cin, userAnswer);

        // Check if the answer is correct
        if (isCorrect(userAnswer, answers[i])) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Incorrect! The correct answer is: " << answers[i] << "\n";
        }
    }

    // Display final score
    cout << "\nYour final score is: " << score << " out of " << numQuestions << endl;

    return 0;
}
