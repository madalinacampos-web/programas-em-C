#include <iostream>
using namespace std;


int main(){


  float nota1,nota2,media;


  cout<<"digite sua nota";
  cin>>nota1>>nota2;


  media=(nota1+nota2)/2;


  if (media >= 7){
       cout<<"Aprovado"<<endl;
  }
  else{
       cout<<"reprovado"<<endl;}


  cout<<media<<endl;




   return 0;
