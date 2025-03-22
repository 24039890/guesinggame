#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cassert>
using namespace std;
//this is the game
int main(){
 int guessnnumber[6],machineGnumbr[6];

 srand(time(0));//this means that it will take zero seconds for the numbers to be generated

 bool tryagain=true;

 while(tryagain==true){//this continue the program to run if the guessed number are not the same as the generated number
    for(int i=6;i>0;i--){
        if(machineGnumbr[0]==0){
            machineGnumbr[i]=rand() % 37;//generate the number from index 6 down to 1
        }

      machineGnumbr[i]=rand() % 37;//generate the number from index 6 down to 1
    }

    cout<<"enter the numbers your want to guess from 1-36:\n";//this notifly the user to enter the numbers she/he s guesing

    bool check;//this variables is for checking if the numbers matches
    for(int i=1;i<7;i++){

      cin>>guessnnumber[i];
      check=(machineGnumbr[i]==guessnnumber[i]);//checking if the condition is satisfied
      assert(guessnnumber[i]>0 && guessnnumber[i]<37);
   }

    if(check==true){//this condition check if the player won or not

      cout<<" your won\n";
      cout<<"the number : ";
        for(int i=1 ;i<7;i++){
         cout<< machineGnumbr[i];//displays  the machine generated numbers
        }
      tryagain=false;//if the person won then tryagain is assaigned false to break out of the while loop

    }else{

      tryagain=true;//allows the user to try again
      cout<<"wanna  try  your lucky numbers again\n";
      cout<<"the numbers are : ";
      for(int i=1;i<7;i++){
       cout<< machineGnumbr[i]<<"  ";
      }
       cout<<"\n";
     }


   //the part for comparing each elements
   int correctnumberguessed=0;
   for(int i=0;i<6;i++){
          for(int j=0;j<6;j++){
            if(machineGnumbr[j]==guessnnumber[i]){
                correctnumberguessed+=1;
           }
    }

 //for numbers guessed right

   switch(correctnumberguessed){

   case 1:
       if(i==1){
          cout<<"your got 1 number correct\n ";
        }
          break;
   case 2:

       if(i==1){
         cout<<"your 2 number correct\n";
            }
          break;
   case 3:
        if(i==1){
         cout<<"your 3 number correct\n";
        }
          break;
   case 4:
        if(i==1){
         cout<<"your 4 number correct\n";
        }
          break;
   case 5:
        if(i==1){
         cout<<"your 5 number correct\n";
        }
          break;
    }
 }}


return 0;

}

