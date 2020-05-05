#include<iostream>
#include<cstring>
using namespace std ;
int main(){
 char palabra[100];
 char alfabeto[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 cout<<"por favor digite la palabra a cifrar "<<endl; gets(palabra);

 int j;
    for(int i=0;i<strlen(palabra);i++){
    j=0;

    while(j<52){
    if(palabra[i]==alfabeto[j] && (j<23||(j>=26 &&j<49))){
    palabra[i]=alfabeto[j+3]; j=52;
      }

    if(palabra[i]==alfabeto[j] && (j>=23 && j<26)){
    if(palabra[i]=='x'){palabra[i]='a';}
    if(palabra[i]=='y'){palabra[i]='b';}
    if(palabra[i]=='z'){palabra[i]='c';}
    j=52;}

    if(palabra[i]==alfabeto[j] && (j>=49 && j<52)){
    if(palabra[i]=='X'){palabra[i]='A';}
    if(palabra[i]=='Y'){palabra[i]='B';}
    if(palabra[i]=='Z'){palabra[i]='C';}
    j=52;}
    j++;
    }}

    cout<<palabra;
    return 0;
    }
