#include <iostream>
#include <vector>
#include <string>
#include "Cards.h"
using namespace std;

Card::Card(Suit su,Rank ra){
    s=su;
    r=ra;
}
Card::Card(){
    suit = 0;
    rank = 0;
}
string Card::to_string() const{
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    if (rank == 0){
        return "None";
    }
    
    return rank_strings[rank] + " of " + suit_strings[suit];
}
