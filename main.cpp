#include <iostream>
#include <string>


#define MAX_SIZE 8

/*
TODO: isSame only forms correctly for strings of the same size 
        
*/
std::string permWord(std::string editWord, bool isSame){



    return editWord;
}
    
    




int main(){
    char sourceWord[MAX_SIZE];
    char targetWord[MAX_SIZE];
    char permWord[MAX_SIZE];
    bool isSame[MAX_SIZE]; 

    std::cout << "Enter Source Word: ";
    std::cin >> sourceWord;

    std::cout << '\n' << "Enter Target Word: ";
    std:: cin >> targetWord;

    for(int i = 0; i < MAX_SIZE; i++){
        isSame[i] = false;
    }

    for(int i = 0; i < MAX_SIZE; i++){

        if(sourceWord[i] == targetWord[i]){
            isSame[i] = true;
        }
        else
            isSame[i] = false;
    }

    for(int i = 0; i < MAX_SIZE; i++){
        std::cout << '\n' << isSame[i] << std::endl;
    }

    return 0;
}
