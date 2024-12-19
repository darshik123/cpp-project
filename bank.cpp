#include <iostream>
#include<stdio.h>
using namespace std;

struct Account {
    int pin ;         
    string name ; 
    int balance ;   
};

class Bank {
  private:
  int pin;

  public:
  int userchoose;
  int wedroamt;
  int depositamt;

void userpin(){
     cout<<"Enter your pin:";
     cin>>pin;
  }

int userpinreturn(){
     return pin;
}


void usermenual(){
     cout<<"Press 1 widro case"<<endl;
     cout<<"Press 2 deposit case"<<endl;
     cout<<"Press 3 Check Baleance"<<endl;
     cout<<"Press 4 exit"<<endl;
};

void userchoosef(){
     cout<<"Enter your Choose:";
     cin>>userchoose;
};
int ueserchhosereturn(){
     return userchoose;
}

void widro(){
    cout<<"Enter amout to widro:";
    cin>>wedroamt;
} 
int widroreturn(){
  return wedroamt;
}

void deposit(){
cout<<"Enter deposit amout:";
cin>>depositamt;
}
int depositreturn(){
return depositamt;
}

};

int main() {
  class Bank b1;
    Account user[6]={
      {12,"luv",6000},
      {34,"naresh",5000},
      {56,"ravi",7000},
      {78,"payal",8000},
      {90,"nidhi",6500},
      {10,"dartshik",7500},
 };
   

   
   b1.userpin();
   int pin = b1.userpinreturn();
   
   for(int i = 0;i<6;i++){
      if(user[i].pin == pin){

        while(1){
            cout<<"Name:"<<user[i].name<<endl;
            cout<<"Balnce:"<<user[i].balance<<endl;
            b1.usermenual();
            b1.userchoosef();
        int userchoose = b1.ueserchhosereturn();

      if(userchoose == 4){
            break;
}else{
      switch (userchoose)
      {
      case 1:
        b1.widro();
                  if(user[i].balance > b1.widroreturn()){
            user[i].balance -=b1.widroreturn();
} 
                  else{
             cout<<"your balance is "<<user[i].balance<<endl;
}
             cout<<"widrow amout is:"<<b1.widroreturn()<<endl<<endl;
      break;
      case 2:
             b1.deposit();
             user[i].balance+=b1.depositreturn();
             cout<<"deposit amout is:"<<b1.depositreturn()<<endl<<endl;
      break;
      case 3:
             cout<<"Your balence is:"<<user[i].balance<<endl<<endl;
       
      break;
      default:
             cout<<"Enter valid input:"<<endl;
      break;
           }
        }
      };
    } 
  }
   return 0;
}