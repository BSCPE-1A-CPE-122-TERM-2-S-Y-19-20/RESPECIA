#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Logic{
	private:
		int pick, repeat;
	public:
			void input();
			void conjunction();
			void disjunction();
			void negation();
			void conditional();
			void biconditional();
			void again();
};
int main(int argc, char** argv) 
{
	Logic logic;
	logic.input();
	
	return 0;
}
void Logic::input(){
	cout<<"\t\t\t\t\t~Logic Statements~\n\nPick a Logic:\n(1) Conjunction\t(2) Disjunction\t(3) Negation\t(4) Conditional\t(5) Biconditional"<<endl;
	cout<<"I pick:";
	cin>>pick;
	switch(pick){
		case 1:
			conjunction();
			break;
		case 2:
			disjunction();
			break;
		case 3:
			negation();
			break;
		case 4:
			conditional();
			break;
		case 5:
			biconditional();
			break;
		default:
			cout<<"Pick again!";
	}
	again();
}
void Logic::conjunction(){
	cout<<"_____________________"<<endl;
	cout<<"|  P | Q |    P^Q    |"<<endl;
	cout<<"|____|___|___________|"<<endl;
	cout<<"|__T_|_T_|_____T_____|"<<endl;
	cout<<"|__T_|_F_|_____F_____|"<<endl;
	cout<<"|__F_|_T_|_____F_____|"<<endl;
	cout<<"|__F_|_F_|_____F_____|"<<endl;
}
void Logic::disjunction(){
	cout<<"_____________________"<<endl;
	cout<<"|  P | Q |    PvQ    |"<<endl;
	cout<<"|____|___|___________|"<<endl;
	cout<<"|__T_|_T_|_____T_____|"<<endl;
	cout<<"|__T_|_F_|_____T_____|"<<endl;
	cout<<"|__F_|_T_|_____T_____|"<<endl;
	cout<<"|__F_|_F_|_____F_____|"<<endl;
}
void Logic::negation(){
	cout<<"_____________________"<<endl;
	cout<<"|  P | Q | ~P  | ~Q  |"<<endl;
	cout<<"|____|___|_____|_____|"<<endl;
	cout<<"|__T_|_T_|__F__|__F__|"<<endl;
	cout<<"|__T_|_F_|__F__|__T__|"<<endl;
	cout<<"|__F_|_T_|__T__|__F__|"<<endl;
	cout<<"|__F_|_F_|__T__|__T__|"<<endl;
}
void Logic::conditional(){
	cout<<"_____________________"<<endl;
	cout<<"|  P | Q |    P->Q   |"<<endl;
	cout<<"|____|___|___________|"<<endl;
	cout<<"|__T_|_T_|_____T_____|"<<endl;
	cout<<"|__T_|_F_|_____F_____|"<<endl;
	cout<<"|__F_|_T_|_____T_____|"<<endl;
	cout<<"|__F_|_F_|_____T_____|"<<endl;
}
void Logic::biconditional(){
	cout<<"_____________________"<<endl;
	cout<<"|  P | Q |   P<->Q   |"<<endl;
	cout<<"|____|___|___________|"<<endl;
	cout<<"|__T_|_T_|_____T_____|"<<endl;
	cout<<"|__T_|_F_|_____F_____|"<<endl;
	cout<<"|__F_|_T_|_____F_____|"<<endl;
	cout<<"|__F_|_F_|_____T_____|"<<endl;
}
void Logic::again(){
	cout<<"\n\nTry Again?\n(1)Yes\n(2)No\n\nYour Choice:";
	cin>>repeat;
	if(repeat==1)
	{
		cout<<"\n\n";
		input();
	}
}
