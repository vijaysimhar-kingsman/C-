/*First uppercase letter in a string (Iterative and Recursive)*/
#include<iostream>
#include<string>
using namespace std;
//i refers to index as well as s to string
char upper(int i,char s[]){
	if(65<=(int)s[i] && (int)s[i]<=90){
		
		cout << s[i] << " : this is the first caps letter in the string\n";
	}else{
		i++;
		upper(i,s);
	}
}
int main(){
	char str[20];
	printf("\nenter string :");
	scanf("%s",str);
	upper(0,str);
}
