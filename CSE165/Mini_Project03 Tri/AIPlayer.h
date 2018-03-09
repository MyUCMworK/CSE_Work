#ifndef AIPlayer_h
#define AIPlayer_h
#include <vector>
#include <stdlib.h>
using namespace std;

class AIPlayer{
    int numberPieces;
    vector<int> avePlace;
    
    
public:
    AIPlayer(int numberP = 9){
        this -> numberPieces = numberP;
        avePlace.resize(numberP);
        
        for (int i = 0; i < numberP; i++){
            avePlace[i] = i;
        }
    }
    
    void moveCheck(vector<Board*> dataBoard){
        for (int i = 0; i < dataBoard.size(); i++){
            if (dataBoard[i] -> getC()){
                avePlace[i] = 10;
            }
        }
    }
    
    int moveChoose(vector<Board*>& dataBoard){
        moveCheck(dataBoard);
        
        int moveRandom = rand() % 9;
        for (int i = 0; i < dataBoard.size(); i++){
            if (moveRandom == avePlace[i]) {
                return moveRandom;
            }
        }
        return moveChoose(dataBoard);
    }
};

#endif /* AIPlayer_h */
