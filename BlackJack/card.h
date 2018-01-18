#ifndef CARD_H
#define CARD_H


class Card
{
public:
    Card();

    enum suits{
        spades,
        clubs,
        hearts,
        diamonds
    };

    enum values{
        jack,
        queen,
        king
    };

private:
    int value;
    int suit;

};

#endif // CARD_H
