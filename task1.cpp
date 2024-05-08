#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int randomNumber = (rand() % 10) + 1;
    cout<<"Guess the number from 1 to 10"<<endl;
    int guess;
    cin>>guess;
  
    while(randomNumber!=guess){
        if(randomNumber>guess){
        cout<<"Guess guess higher"<<endl;
    	}else if(randomNumber<guess){
        cout<<"Guess lower"<<endl;
    	}else{
        	cout<<"you have guessed correctly"<<endl;
    	}
            cin>>guess;

   		}
   
     
     if(randomNumber==guess){
        cout<<"You have guessed correctly";
    }
    
    return 0;
}


