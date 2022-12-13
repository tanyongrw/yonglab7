#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main()
{
    string e , f , g , h ;
	cout << "Input text: " ;
	cin >> e ;
	f = func3(e) ;
    cout << "Reversed text: " ;
	g = func1(e) ;
	h = func1(f) ;
	cout << g << "\n" ;
    cout << "Palindrome: " ;
	if(f==h)
	{
		cout << "Yes" << "\n" ;
	}
	else
	{
		cout << "No" << "\n" ;
	}
    return 0;
}