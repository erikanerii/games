#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
void madlibs();
void choose();
void psych();
void loveLife();
void schoolLife();
void financeLife();
void find();
void guessingGame();
int main()
{
 
 int inputGame;
 do
 {
 cout <<"Hello!"<< endl;
 cout <<"You have the option to play two games today:" << endl;
 cout <<"1: Choose Your Own Adventure" << endl;
 cout <<"2: Madlibs" << endl;
 cout << "3: Psychic Reading" << endl;
 cout << "4: Find the Treasure"<< endl;
 cout << "5: Guessing game" << endl;
 cout << "6: Exit" << endl;
 //breif intro
 cout <<"Which of the following would you like to play?"<< endl;
 cin >> inputGame;
 cout << "\n\n";
 //inputGame being a different string
 //to not interupt the other codes
 
 switch (inputGame)
 {
 case 1:
 choose();
 
 break;
 case 2: ;
 madlibs();
 
 break;
 case 3:;
 psych();
 
 break;
 case 4:;
 find();
 
 break;
 case 5:;
 guessingGame();
 
 break;
 }
 } while (inputGame!=6);
 }
void choose ()
{
 //1 being positive
 //2 being negative
 int input;
 cout<<"\t------------------------------\n";
 cout<<"Welcome to my adventure game! Choose your choices wisely\n";
 cout<<"I will determine if you will survive\n";
 cout<<"\t------------------------------\n";
 //intro to game
 //i do not want users to feel like they will
 //not survive so easy questions
 
 cout<<"You and three other friends are offered $50,000 to spend the night in a haunted house. You say,\n";
 cout<<"1: No!!! "<<endl<<"2: Yes"<<endl;
 cout<<"1 or 2: ";
 cin >> input;
 if (input == 1)
 cout << "ok\n\n";
 else
 cout << "no\n\n";
 
 //changing input for diff answer
 
 
 int inputTwo;
 cout<<"If you hear someone bang on your door at 3AM you\n";
 cout<<"1: Run"<<endl<<"2: Look outside"<<endl;
 cout<<"1 or 2:";
 cin >> inputTwo;
 if (inputTwo == 1)
 cout << "ook\n\n";
 else
 cout << "noo\n\n";
 //input3 for refreshing answer
 
 
 int inputThree;
 cout<<"You wake up and hear people running your way what do you do\n";
 cout<<"1: Run"<<endl<<"2: Stay"<<endl;
 cout<<"1 or 2: ";
 cin >> inputThree;
 if (inputThree == 1)
 cout << "okokok\n\n";
 else
 cout << "nononnnono\n\n";
 
 //ending
 int inputFour = input + inputTwo + inputThree;
 cout<<"Based off your answers I believe... \n\n";
 cout<<"You will survive (hopefully)\n\n";
 cout << "Points: \n\n"<<inputFour;
 
 //end of game!
}
void madlibs ()
{
 string color, noun, song, season, name;
 cout << "What is you name? ";
 cin >> name;
 cout << "Enter color: ";
 cin >> color;
 cout << "Enter noun: ";
 cin >> noun;
 cout << "Enter song: ";
 cin >> song;
 cout << "Enter season: ";
 cin >> season;
 cout << "My name is " << name << endl;
 // name is a very important thing and respect so always ask
 cout << "My favorite color is "<< color << endl;
 // i feel like a favorite color can say
 // a lot about a person
 cout << "My favorite place to be is "<< noun << endl;
 // same with favorite place
 cout << "My favorite song is " << song << endl;
 // stream doughnut by twice or
 // aprin in paris by count basie :D
 cout << "it's best to listen to"<< song << " in the " << season << endl;
}
void psych()
{
 srand((int)time(0));
 int luckyNum;
 char readingChoice;
 char readingTwo;
 
 cout << "What is your lucky number? " << endl;
 cin >> luckyNum;
 
 do
 {
 cout << "Which future do you want your reading in " << endl;
 cout << "Love life: L " << endl;
 cout << "School Life: S" <<endl;
 cout << "Finance: F" << endl;
 cout << "Choice: " <<endl;
 cin >> readingChoice;
 
 switch (toupper(readingChoice))
 {
 case 'L':
 loveLife();
 break;
 case 'S':
 schoolLife();
 break;
 case 'F':
 financeLife();
 break;
 default:
 cout << "Retype";
 break;
 
 
 }
 cout << "Would you like another reading ?" << endl;
 cout << "Y: yes" << endl;
 cout << "N: no" << endl;
 cin >> readingTwo;
 //while (tolower(readingTwo) == 'y');
 }while (tolower(readingTwo) == 'y');
 
}
void loveLife()
{
 int loveFortune = rand() % 4 + 1;
 switch (loveFortune)
 {
 case 1:
 cout << "You will be single";
 break;
 case 2:
 cout << "You will find your soulmate";
 break;
 case 3:
 cout << "You will get cheated on";
 break;
 case 4:
 cout << "You will be happy";
 break;
 }
}
void schoolLife()
{
 int schoolFortune = rand () % 4 + 1;
 switch (schoolFortune)
 {
 case 1:
 cout << "You will pass !";
 break;
 case 2:
 cout << "You will fail";
 break;
 case 3:
 cout << "You will have a perfect gpa";
 break;
 case 4:
 cout << "Your gpa will drop";
 break;
 }
}
void financeLife()
{
 int financeFortune = rand () % 4 + 1;
 switch (financeFortune)
 {
 case 1:
 cout << "You will get a well paid job";
 break;
 case 2:
 cout << "You will get fired";
 break;
 case 3:
 cout << "You will start a business";
 break;
 case 4:
 cout << "You will get injured in your job";
 break;
 }
}
double radius ( double x, double x1, double y, double y1)
{
 return sqrt(static_cast<double>((x-x1)*(x-x1)+(y-y1)*(y-y1))); // formula
}
double circumference (double ra)
{
 return 2 * 3.14 * ra;
}
double area (double ar)
{
 return 3.14 * pow(ar, 2 );
}
void find()
{
 double x1,y1,x2,y2;
 cout<< "Enter 4 numbers corresponding to the coordinates of two points";
 cin>>x1>>y1>>x2>>y2;
 
 double r;
 r = radius(x1,y1,x2,y2);
 cout<<"The radius is: "<<r;
 cout << r;
 double c;
 c = circumference(r);
 cout << c;
 
 double a;
 a = area (r);
 cout << a;
}
void guessingGame()
{
 cout << "Welcome to the Guessing Game !"<< endl;
 int i = 0;
 int correctNum = rand()% 10 + 1;
 int guess;
 bool correctGuess = false;
 do
 {
 cout << "\n What is your guess? (1-10)"<<endl;
 cin >> guess;
 if (guess == correctNum)
 correctGuess = true;
 else
 cout << "Try again"<< endl;
 i++;
 }while (guess != correctNum && i < 4);
 if (correctGuess)
 cout << "\n Congratulations! You guessed correctly" << endl;
 else
 cout << "\nSorry you lost. " <<endl;
}
}
