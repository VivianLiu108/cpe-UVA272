#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	string a;
	while(cin>>a)
	{
		int i = 0;
		for (int j = 0; j < a.length(); j++)
		{
			if(i % 2 == 0)
			{
				if (a[j] == '"')
				{
					a[j] = '`';
					cout << '`';
					i++;
				}
				
			}
			else
			{
				if (a[j] == '"')
				{
					a[j] = '\'';
					cout << '\'';
					i++;
				}
				
			}
			cout << a[j];
		}
		cout << ' ';
	}
}