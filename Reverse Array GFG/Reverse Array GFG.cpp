#include"stdafx.h"
#include<string>
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T-- > 0)
	{
		string str = "";
		int N;
		cin >> N;
		int *arr = new int[N];
		for (int i = 0;i < N;i++)
		{
			cin >> arr[i];
			str = to_string(arr[i]) + " " + str;
		}
		cout << str << endl;
		//T--;
	}
	
	//code
	return 0;
}