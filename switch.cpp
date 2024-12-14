#include<iostream>
using namespace std;
int main()
{
int a1,a2;
cin>>a1>>a2;
switch(a1)
{
	case 1:switch(a2)
	{
		case 1:cout<<"abc";
		break;
	    case 2:cout<<"def";
	    break;
	}
	break;
	case 2:switch(a2)
	{
		case 1:cout<<"hij";
		break;
		case 2:cout<<"lmn";
		break;
	}
	break;
} 
return 0;
}



