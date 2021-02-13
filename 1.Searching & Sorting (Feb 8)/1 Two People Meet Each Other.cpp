#include<bits/stdc++.h>
using namespace std;

void Meetfunc(int d1, int d2, int v1, int v2)
{
    if(((d1>d2) && (v1>v2)) || ((d2>d1) && (v2>v1)))          
     { 
       cout<<"They will never meet";
     }
	int D = d1 - d2;              //relative distance
	int v = v1 - v2;              //relative speed
	if (D % v == 0)
		cout<<"They will meet";
	else
		cout<<"They did not meet";
}

int main()
{
	int d1, d2, v1, v2;
	cout << "Enter the intial distance of the user 1 ";
	cin >> d1;
	cout << "Enter the velocity of the user 1 ";
	cin >> v1;
	cout << "Enter the intial distance of the user 2 ";
	cin >> d2;
	cout << "Enter the velocity of the user 2 ";
	cin >> v2;
	if (d1 > d2)
		Meetfunc(d1, d2, v1, v2);
	else
		Meetfunc(d2, d1, v2, v1);

	return 0;
}
