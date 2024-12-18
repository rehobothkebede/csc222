#include <iostream>
#include <vector>
#include <string>
#include "Cards.h"
using namespace std;

Card::Card(Suit suit,Rank rank){
    this->suit=suit;
    this->rank=rank;
}
Card::Card(){
    this->rank = JOKER;
}
string Card::to_string() const{
    vector<string> suit_strings = {"NONE", "Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
    if(!rank){
        return "Joker"; 
    }

    return rank_strings[rank] + " of " + suit_strings[suit];
}
bool Card::operator == (const Card& other) const {
    return rank == other.rank && suit == other.suit;
}
bool Card::operator != (const Card& other) const {
    return !(*this == other);
}
bool Card::operator < (const Card& other) const {
    if(rank == other.rank){
        return suit < other.suit;
    }
    return rank <  other.rank;
}
bool Card::operator > (const Card& other) const {
    return other < *this;
}
bool Card::operator <= (const Card& other) const {
    return !(other < *this);
}
bool Card::operator >= (const Card& other) const {
    return !(other > *this);
}
