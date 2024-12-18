#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Deck;

enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

struct Card{
    Suit suit;
    Rank rank;

    string to_string() const;
    
    Card();
    Card(Suit, Rank);
};
