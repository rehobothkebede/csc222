#ifndef CARDS_H
#define CARDS_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;



enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

struct Card{
    Suit suit;
    Rank rank;

    string to_string() const;
    
    Card();
    Card(Suit, Rank);

    bool operator == (const Card& other) const;
    bool operator != (const Card& other) const;
    bool operator < (const Card& other) const;
    bool operator > (const Card& other) const;
    bool operator <= (const Card& other) const;
    bool operator >= (const Card& other) const;
};


struct Deck{ 
    vector<Card> card();

    Deck();
    Deck(int);    
};
#endif
