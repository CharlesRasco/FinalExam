#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

void myChecker(char answer, char correct,char correct2){
HANDLE col;
col= GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(col,6);	
	if(answer == correct || answer == correct2){
		SetConsoleTextAttribute(col,2);	
		cout<<"Correct Answer!";
		
	}else{
		SetConsoleTextAttribute(col,4);	
		cout<<"Wrong Answer!";
		SetConsoleTextAttribute(col,2);	
		
}
	
}

void myChecker2(string answer2, string correct3,string correct4){
	HANDLE col;
col= GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(col,6);	
	if(answer2 == correct3||answer2 == correct4){
		SetConsoleTextAttribute(col,2);	
		cout<<"Correct Answer!";
		
	}else{
		SetConsoleTextAttribute(col,4);	
		cout<<"Wrong Answer!";
		SetConsoleTextAttribute(col,2);
		
		}
	
}


int main(){

int choice,score;
char q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,again;
string q16,q17,q18,q19,q20,q21,q22,q23,q24,q25,name;

HANDLE col;
col= GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(col,6);
cout<<"\nDirection:";
SetConsoleTextAttribute(col,7);
cout<<"Please type your Name below before you proceed to the Quiz.";
SetConsoleTextAttribute(col,2);
cout<<"\n";
cout<<"\nEnter your Name: ";
SetConsoleTextAttribute(col,7);
getline(cin,name);


do{

SetConsoleTextAttribute(col,6);
cout<<"<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>";	
cout<<"\n<<                                   >>";
cout<<"\n<<<";
SetConsoleTextAttribute(col,7);
cout<<"           CHOOSE QUIZ           ";
SetConsoleTextAttribute(col,6);
cout<<">>>";
cout<<"\n<<                                   >>";
cout<<"\n<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>";
cout<<"\n<                                     >";
cout<<"\n<<";
SetConsoleTextAttribute(col,7);
cout<<"      TEST I. Multiple Choice      ";
SetConsoleTextAttribute(col,6);
cout<<">>";
cout<<"\n<                                     >";
cout<<"\n<<";
SetConsoleTextAttribute(col,7);
cout<<"      Enter '1' for Science        ";
SetConsoleTextAttribute(col,6);
cout<<">>";
cout<<"\n<<<<";
SetConsoleTextAttribute(col,7);
cout<<"    Enter '2' for Math         ";
SetConsoleTextAttribute(col,6);
cout<<">>>>";
cout<<"\n<<<<";
SetConsoleTextAttribute(col,7);
cout<<"    Enter '3' for Arts         ";
SetConsoleTextAttribute(col,6);
cout<<">>>>";
SetConsoleTextAttribute(col,6);
cout<<"\n<<                                   >>";
cout<<"\n<";
SetConsoleTextAttribute(col,7);
cout<<"      TEST II. Fill in the Blanks    ";
SetConsoleTextAttribute(col,6);
cout<<">";
cout<<"\n<                                     >";
cout<<"\n<<";
SetConsoleTextAttribute(col,7);
cout<<"      Enter '4' for Programming    ";
SetConsoleTextAttribute(col,6);
cout<<">>";
cout<<"\n<                                     >";
cout<<"\n<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>";
cout<<"\n";

SetConsoleTextAttribute(col,2);	
cout << "\nEnter your Choice:";
SetConsoleTextAttribute(col,7);
cin >> choice;

SetConsoleTextAttribute(col,7);
cout<<"\nPlease wait";
for(int x=0; x < 6; x++){
cout<<".";
this_thread::sleep_for(chrono::milliseconds(50));}
	
system("cls");
     
switch (choice)	{
case 1:
SetConsoleTextAttribute(col,6);	
cout<<"\nWelcome to Quiz Bee!!";
cout<<"\n";
SetConsoleTextAttribute(col,2);	
cout<<"\nTEST I";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nDirection:";
SetConsoleTextAttribute(col,7);	
cout<<"Multiple Choice. Type the correct Answer below.";
cout<<"\n";
cout<<"\nSCIENCE";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n1.";
SetConsoleTextAttribute(col,7);
cout<<"How many bone are in the adult human body?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. 206";
cout<<"\nB. 300";
cout<<"\nC. 157";
cout<<"\nD. 306";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>>q1;
myChecker(q1, 'a','A');

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n2.";
SetConsoleTextAttribute(col,7);
cout<<"What is the solar system's biggest star?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Pluto";
cout<<"\nB. Mercury";
cout<<"\nC. Moon";
cout<<"\nD. Sun";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q2;
myChecker(q2, 'd', 'D');



cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n3.";
SetConsoleTextAttribute(col,7);
cout<<"What is the rarest human blood type?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. A+";
cout<<"\nB. 0-";
cout<<"\nC. AB+";
cout<<"\nD. AB-";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q3;
myChecker(q3, 'd', 'D');


cout<<"\n";	
SetConsoleTextAttribute(col,6);
cout<<"\n4.";
SetConsoleTextAttribute(col,7);
cout<<"Which planet is known as the Red Planet?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Mars";
cout<<"\nB. Venus";
cout<<"\nC. Jupiter";
cout<<"\nD. Saturn";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin >> q4;
myChecker(q4, 'a', 'A');
		

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n5.";
SetConsoleTextAttribute(col,7);
cout<<"What forces maintain the planets orbiting the sun?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Moon";
cout<<"\nB. Gravity";
cout<<"\nC. Atom";
cout<<"\nD. Movement";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin >> q5;
myChecker(q5, 'b', 'B');

break;
case 2:
cout<<"\n";
SetConsoleTextAttribute(col,7);
cout<<"MATH ";
SetConsoleTextAttribute(col,6);
cout<<"(Famous Mathematicians)";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n1.";
SetConsoleTextAttribute(col,7);
cout<<"Which mathematician is known for the Pythagorean Theorem, which relates the sides of a right triangle?";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nA. Euclid";
cout<<"\nB. Pythagoras";
cout<<"\nC. Isaac Newton";
cout<<"\nD. David Hilbert";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q6;
myChecker(q6, 'b', 'B');

cout<<"\n";	
SetConsoleTextAttribute(col,6);
cout<<"\n2.";
SetConsoleTextAttribute(col,7);
cout<<"Who is famous for making significant contributions to number theory, statistics, and developing the Gaussian distribution?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Leonhard Euler";
cout<<"\nB. Carl Friedrich Gauss";
cout<<"\nC. Pierre-Simon Laplace";
cout<<"\nD. Grigori Perelman";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q7;
myChecker(q1, 'b', 'B');

cout<<"\n";		
SetConsoleTextAttribute(col,6);
cout<<"\n3.";	
SetConsoleTextAttribute(col,7);
cout<<"Which mathematician pioneered graph theory, introduced the notation for trigonometric functions, and made advances in number theory?";
SetConsoleTextAttribute(col,7);	
cout<<"\n";
cout<<"\nA. Pythagoras";
cout<<"\nB. Isaac Newton";
cout<<"\nC. Carl Friedrich Gauss";
cout<<"\nD. Leonhard Euler";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q8;
myChecker(q8, 'd', 'D');

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n4.";
SetConsoleTextAttribute(col,7);
cout<<"Who is known for his incompleteness theorems, which had a profound impact on the foundations of mathematics?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Kurt Godel";
cout<<"\nB. Alan Turing";
cout<<"\nC. Andre Weil";
cout<<"\nD. John von Neumann";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q9;
myChecker(q9, 'a', 'A');

cout<<"\n";	
SetConsoleTextAttribute(col,6);
cout<<"\n5.";
SetConsoleTextAttribute(col,7);	
cout<<"Which mathematician is famous for pioneering the fields of computer science and artificial intelligence and played a crucial role in breaking the Enigma code during World War II?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Isaac Newton";
cout<<"\nB. Alan Turing";
cout<<"\nC. Pythagoras";
cout<<"\nD. Archimedes";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q10;
myChecker(q9, 'b', 'B');

break;
case 3:

SetConsoleTextAttribute(col,7);	
cout<<"\nARTS ";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n1.";
SetConsoleTextAttribute(col,7);	
cout<<"He is known for his greatest artwork called the portrait of Lisa Gherardini.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Pablo Picasso";
cout<<"\nB. Leonardo Decarpio";
cout<<"\nC. Leonardo da Vinci";
cout<<"\nD. Michael Angelo";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q11;
myChecker(q11, 'c', 'C');

cout<<"\n";  
SetConsoleTextAttribute(col,6);
cout<<"\n2.";
SetConsoleTextAttribute(col,7);   	
cout<<"Who is the French sculptor responsible for designing and creating the Statue of Liberty, which was later gifted to the United States?";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Leonardo da Vinci";
cout<<"\nB. Frederic Auguste Bartholdi";
cout<<"\nC. Michel Angelo";
cout<<"\nD. Vincent van Gogh";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q12;
myChecker(q12, 'b', 'B');

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n3.";    
SetConsoleTextAttribute(col,7);  
cout<<"\n3.This type of art uses technology in creating multiple outputs. This is commonly used in our current generation for advertisment and information.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Digital Art";
cout<<"\nB. Traditional Art";
cout<<"\nC. Photography";
cout<<"\nD. Digital Printing";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q13;
myChecker(q13, 'a', 'A');

cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\n4.";
SetConsoleTextAttribute(col,7);
cout<<"It is the art, application, and practice of creating images by recording light, either electronically by means of an image sensor, or chemically by means of a light-sensitive material.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Arts";
cout<<"\nB. Photography";
cout<<"\nC. Graphic Design";
cout<<"\nD. Visual Design";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q14;
myChecker(q14, 'b', 'B');

cout<<"\n";      
SetConsoleTextAttribute(col,6);
cout<<"\n5.";
SetConsoleTextAttribute(col,7);	   
cout<<"\n5.A live performance of dramatic actions in order to tell a story or create a spectacle. The word derives from the Greek theatron ('place of seeing'). It is one of the oldest and most important art forms in cultures worldwide.";
SetConsoleTextAttribute(col,7);
cout<<"\n";
cout<<"\nA. Film Studies";
cout<<"\nB. Creative Writing";
cout<<"\nC. Music Theory";
cout<<"\nD. Theatre";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nEnter your Answer:";
SetConsoleTextAttribute(col,7);
cin>> q15;
myChecker(q15, 'd', 'D');

break;
case 4:
 
SetConsoleTextAttribute(col,2);       
cout<<"\nTEST II";
cout<<"\n";
SetConsoleTextAttribute(col,6);
cout<<"\nDirections:";
SetConsoleTextAttribute(col,7);
cout<<"\Fill in the blanks on the following questions. Type your answer below. ";
SetConsoleTextAttribute(col,6);
cout<<"\n";
cout<<"\n1. ";
SetConsoleTextAttribute(col,7);
cout<<"____ was developed by Bjarne Stroustrup, as an extension to the C language.";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q16;
myChecker2(q16, "c++", "C++");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n2. ";
SetConsoleTextAttribute(col,7);
cout<<"in C++ the data type ____ stores whole numbers, without decimals, such as 123 or -123.";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q17;
myChecker2(q17, "int", "Int");

SetConsoleTextAttribute(col,6);	       
cout<<"\n";
cout<<"\n3.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ _____ line comments start with two forward slashes (//).";
cout<<"\n";
SetConsoleTextAttribute(col,6);	
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q18;
myChecker2(q18, "single", "Single");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n4.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ a  ____ variable stores text and contains a collection of characters surrounded by double quotes.";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q19;
myChecker2(q19, "string", "String");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n5.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ ___ stores values with two states: true or false";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q20;
myChecker2(q20, "bool", "Bool");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n6.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ ____ line comments start with /* and ends with */.";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q21;
myChecker2(q21, "multi", "Multi");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n7.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ ___ stores single characters, such as 'a' or 'B'. values are surrounded by single quotes.";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q22;
myChecker2(q22, "char", "Char");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n8.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ The __ object, together with the << operator, is used to output values/print text.";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q23;
myChecker2(q23, "cout", "Cout");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n9.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ the data type ____ stores floating point numbers, with decimals, such as 19.99 or -19.99.";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q24;
myChecker2(q24, "double", "Double");

SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\n10.";
SetConsoleTextAttribute(col,7);
cout<<"in C++ ___  is a predefined variable that reads data from the keyboard with the extraction operator (>>).";
SetConsoleTextAttribute(col,6);	
cout<<"\n";
cout<<"\nType your Answer: ";
SetConsoleTextAttribute(col,7);
cin>>q25;
myChecker2(q25, "cin", "Cin");

break;
default:
cout<<"Ivalid Input!!";
}
          
SetConsoleTextAttribute(col,4);	   
cout<<"\n";    
cout<<"\nProceed to the Next Subject! Type Y for Yes/ N for No:";
cin>>again;
system("cls");



}
while(again == 'Y' || again == 'y');

SetConsoleTextAttribute(col,2);	
cout<<"\nThank you for answering our Quiz! ";
SetConsoleTextAttribute(col,6);	
cout<<name;
SetConsoleTextAttribute(col,2);	
cout<<"\nI hope you enjoy our Quiz ";
SetConsoleTextAttribute(col,6);
cout<<":)";

		return 0;












}
	

		

