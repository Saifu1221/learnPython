#include<iostream>
#include<string>
using namespace std;
int wordFound(string, string);
int main()
{
	string str;
	string word;
	
	cout<<"\nEnter a string:";
	//cin>>str;
	getline(cin, str);
	
	cout<<"\nEnter a word to be search";
	//cin>>word;
	getline(cin, word);
	if(wordFound(str,word))
		cout<<"\nWord found";
	else
		cout<<"\nWord could not found";
	//cout<<"\n"<<str;
	//cout<<"\n"<<word;
	return 0;
}

int wordFound(string str, string word){
	int i,j=0;
		cout<<"\nin function";
		int size=str.size();
		//str.at(i)!='\0'
	for (int i = 0;i<str.size() ; i++){
		//cout << str.at(i);
		if((str.at(i)==word.at(j)) && (word.at(j)!=' ')){
			j++;
			if(j==word.size() && str.at(i)==' ')
			return 1;
			}
			else
			j=0;
	}

	return 0;
}