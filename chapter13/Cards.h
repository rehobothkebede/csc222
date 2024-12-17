#include <iostream>
#include <vector>
#include <string>

using namespace std;


enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING, ACE};

struct Card{
    Rank rank;
    Suit suit;

    string to_string() const;
    
    Card(Suit, Rank);
    Card();
};
