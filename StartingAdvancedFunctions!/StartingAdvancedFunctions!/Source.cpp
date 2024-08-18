#include<iostream>
#include<string>

using namespace std;

string inputChar;
string& inputCharReference = inputChar;
bool check1 = true;
bool& check1Reference = check1;
string nForNoYforYes = "Please type in y/Y for YES and n/N for NO!";

string PositiveQuestionOneAnswer("Nice choice! Cant go wrong with swimming!");
string NegativeQuestionOneAnswer = "Neither do I...";
string SecondQuestionPositiveAnswer = "Very nice indeed! I also watch it and i love it! My favourite club is Atletico Madrid!";
string SecondQuestionNegativeAnswer = "I understand you, not everyone is into sports...";
string LastQuestionPositiveAnswer = "Yayayayayayayyyyyy!!! Thank you for your support, i truly appreciate it!";
string LastQuestionNegativeAnswer = "Damn... Welp, its just a process of trial and error... One day i will be of help i promise!";


char otherQuestionsAnswerLoops()
{

    {
        while (true)
        {
            cin >> inputCharReference;

            if (inputChar.length() == 1 && (inputChar[0] == 'y' || inputChar[0] == 'n' || inputChar[0] == 'Y' || inputChar[0] == 'N'))
            {
                switch (inputChar[0])
                {
                case 'y':
                    cout << endl;
                    cout << "Your answer was YES!" << endl;
                    cout << endl;
                    return inputChar[0];
                    break;

                case 'n':
                    cout << endl;
                    cout << "Your answer was NO!" << endl;
                    cout << endl;
                    return inputChar[0];
                    break;

                case 'Y':
                    cout << endl;
                    cout << "Your answer was YES!" << endl;
                    cout << endl;
                    return inputChar[0];
                    break;

                case 'N':
                    cout << endl;
                    cout << "Your answer was NO!" << endl;
                    cout << endl;
                    return inputChar[0];
                    break;
                }
                break;
            }
            else
            {
                cout << "Invalid input. Please answer with Y or N!" << endl;
                cout << endl;
            }
        }
    }
}

void questions()
{
    cout << endl;
    cout << "Do you love going on sea trips?" << endl;
    cout << nForNoYforYes << endl;
    cout << endl;

    otherQuestionsAnswerLoops();
    if (inputChar[0] == 'y' || inputChar[0] == 'Y')
    {
        cout << PositiveQuestionOneAnswer << endl;
        cout << endl;
    }
    else if (inputChar[0] == 'n' || inputChar[0] == 'N')
    {
        cout << NegativeQuestionOneAnswer << endl;
        cout << endl;
    }

    cout << endl;
    cout << "Next question, shall we?" << endl;
    cout << "Do you watch football / soccer?" << endl;
    cout << endl;

    otherQuestionsAnswerLoops();
    if (inputChar[0] == 'y' || inputChar[0] == 'Y')
    {
        cout << SecondQuestionPositiveAnswer << endl;
        cout << endl;
    }
    else if (inputChar[0] == 'n' || inputChar[0] == 'N')
    {
        cout << SecondQuestionNegativeAnswer << endl;
        cout << endl;
    }
    
    cout << endl;
    cout << "You had some nice choices so far! The last question of this program is: ";
    cout << "Did you like this program? :)";
    cout << endl;

    otherQuestionsAnswerLoops();
    if (inputChar[0] == 'y' || inputChar[0] == 'Y')
    {
        cout << LastQuestionPositiveAnswer << endl;
        cout << endl;
    }
    else if (inputChar[0] == 'n' || inputChar[0] == 'N')
    {
        cout << LastQuestionNegativeAnswer << endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "And thats it for this program! Once again, have a great rest of the day!" << endl;
    cout << ":)" << endl;
    cout << endl;
}

    void firstQuestionsAnswerLoop()
{
    while (true)
    {
        cin >> inputCharReference;

        if  (inputChar.length() == 1 && (inputChar[0] == 'y' || inputChar[0] == 'n' || inputChar[0] == 'Y' || inputChar[0] == 'N'))
        {
            switch (inputChar[0])
            {
            case 'y':
                cout << endl;
                cout << "Thank you for participating in this program!" << endl;
                cout << endl;
                cout << "We shall now begin with the actual first question!" << endl;
                cout << endl;
                questions();
                break;

            case 'Y':
                cout << endl;
                cout << "Thank you for participating in this program!" << endl;
                cout << endl;
                cout << "We shall now begin with the actual first question!" << endl;
                cout << endl;
                questions();
                break;

            case 'N':
                cout << endl;
                cout << "Thats fine! Have a great day!" << endl;
                break;

            case 'n':
                cout << endl;
                cout << "Thats fine! Have a great day!" << endl;
                break;
            }
            break;
        }
        else
        {
            cout << "Invalid input. Please answer with Y or N!" << endl;
            cout << endl;
        }
    }
}

void theProgram()
{
	cout << "Hello fellow user, this is a bit more advance program to the one i have previously coded!" << endl;
	cout << "Please answer a few of mine questions! First of those will be an easy one:" << endl;
	cout << endl;
	cout << "Do you wish to proceed with this program?" << endl;
	cout << nForNoYforYes << endl;
	cout << endl;

    firstQuestionsAnswerLoop();
}

int main()
{
	theProgram();

	system("pause");
}