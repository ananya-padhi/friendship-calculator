#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
 
int main() {
    
    system("Color 47");
	int i,j,k=0,count=0,c[1000]={0};char s1[1000],s2[1000];
	cout<<"-----------------------------WELCOME TO FRIENDSHIP CALCULATOR-----------------------------"<<endl;
    
    cout<<"ENTER THE YOUR NAME :-"<<endl;
    cin>>s1;
    
    cout<<"ENTER YOUR FRIEND'S NAME :-"<<endl;
    cin>>s2;
    
    int l1=strlen(s1);
    int l2=strlen(s2);
    for(i=0; i < strlen(s1); i++)
    {
        for(j = 0; j < strlen(s2); j++) 
        {
            if(s1[i] == s2[j]) 
            {
                c[k]++;
                count++;
                k++;
                s2[j] = '*';
                break;
            }
        }
    }
    for(i=0;i<(l1+l2-count);i++)
    {
        c[k]++;
        k++;
    }
    for(i=0;i<k/2;i++)
    {
        for(j=0;j<k;j++)
        {
            if(j==(k-j-1))
            {
                c[j]=c[j];
                break;
            }
            else
            {
                c[j]=c[j]+c[k-j-1];
            }
        }
        k=j+1;
    }
    cout<<"---------------------RESULTS----------------------"<<endl;
    cout<<"YOUR FRIENDSHIP CALCULATOR SAYS YOU ARE "<<10*c[0]+c[1]<<"%"<<" CLOSE"<<endl;
    
}

