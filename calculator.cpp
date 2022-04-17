#include <iostream>
using namespace std;

int main()
{
	float a, b;
	int selection;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	
	cout<<"Choose a math operation"<<endl<<
	    "1-Addition"<<endl<<
	    "2-Subtraction"<<endl;
	    
	cin>>selection;
	
	switch(selection)
	{
	case 1:
		cout << a+b << endl;
		break;
	case 2:
		cout << a-b << endl;
		break;
	default:
		cout<<"Error! There is no such operation!"<<endl;
		break;
	}
	
}
