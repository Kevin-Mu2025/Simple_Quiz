#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
struct Question
{
	string ques;
	string a, b, c, d, correct;
	char ans;
	//Set basic information  
	void set(const string &Ques, const string &A, const string &B, const string &C, const string &D, const char &Ans)
	{
		ques = Ques;
		a = A;b = B;
		c = C;d = D; 
		ans = tolower(Ans);
		if(ans=='a') correct = a;
		else if(ans=='b') correct = b;
		else if(ans=='c') correct = c;
		else correct = d;
	}
	//Ask question and check answer 
	bool ask(const int cnt)
	{
		printf("Question %d: %s\n",cnt,ques.c_str());
 		cout << "a) " << a << "\nb) " << b << "\nc) " << c << "\nd) " << d << "\n";
 	    cout << "Your answer: ";
    	char answer;
    	bool f;
		cin >> answer;
		if(tolower(answer)==ans)
		{
			cout << "Correct!\n";
			f = 1;
		}
		else
		{
			printf("Wrong! The correct answer is %c) %s.\n",ans,correct.c_str());
			f = 0;
		}
		cout << "--------------------------------------\n";
		return f;
	}
};
vector<Question> Questions;
int main() {
    int score = 0; // To track the score

    // Welcome Message
    cout << "--------------------------------------\n";
    cout << "Welcome to the Simple Quiz Game!\n";
    cout << "--------------------------------------\n";
    cout << "Answer the questions by typing a, b, c, or d.\nEach correct answer gives you 1 point.\n";
    cout << "--------------------------------------\n";
	
	// Preprocess the questions
	Question ques;
    ques.set("What is 5 + 3?","6","8","9","10",'b');
    Questions.push_back(ques);
    ques.set("What is the capital of France?","Paris","London","Berlin","Madrid",'a');
    Questions.push_back(ques);
    ques.set("Who invented the light bulb?","Thomas Edison","Nikola Tesla","Alexander Graham Bel","Albert Einstein",'a');
    Questions.push_back(ques);
    
    // Run quiz 
    int sz = Questions.size();
	for(int i=0;i<sz;i++)
	{
		if(Questions[i].ask(i+1))
			score++;
	}
    
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
