#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0; // To track the score
    char answer;

    // Welcome Message
    cout << "--------------------------------------\n";
    cout << "Welcome to the Simple Quiz Game!\n";
    cout << "--------------------------------------\n";
    cout << "Answer the questions by typing a, b, c, or d.\nEach correct answer gives you 1 point.\n";
    cout << "--------------------------------------\n";

    // Question 1
    cout << "Question 1: What is 5 + 3?\n";
    cout << "a) 6\nb) 8\nc) 9\nd) 10\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is b) 8.\n";
    }
    cout << "--------------------------------------\n";

    // Question 2
    cout << "Question 2: What is the capital of France?\n";
    cout << "a) Paris\nb) London\nc) Berlin\nd) Madrid\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is a) Paris.\n";
    }
    cout << "--------------------------------------\n";

    // Question 3
    cout << "Question 3: Who invented the light bulb?\n";
    cout << "a) Thomas Edison\nb) Nikola Tesla\nc) Alexander Graham Bell\nd) Albert Einstein\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is a) Thomas Edison.\n";
    }
    cout << "--------------------------------------\n";

    // Final Score
    cout << "Quiz Over! Your final score is: " << score << "/3\n";

    if (score == 3) {
        cout << "Excellent! You got a perfect score!\n";
    } else if (score == 2) {
        cout << "Good job! You missed just one.\n";
    } else {
        cout << "Better luck next time!\n";
    }
    cout << "--------------------------------------\n";

    return 0;
}
