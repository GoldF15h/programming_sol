#include <iostream>
#include <conio.h>

using namespace std;
void decToBinary(int n);


int card[3] = {0b000011,0b000011,0b000011};
int card_number = 3;
bool card_pok = false;
bool card_three_of_a_kind = false;
bool card_straight = false;
bool card_royal = false;

int dealer_card[3] = {0};
int dealer_card_number = 0;
bool dealer_card_pok = false;
bool dealer_card_three_of_a_kind = false;
bool dealer_card_straight = false;
bool dealer_card_royal = false;

bool card_score_check (){
    cout<<"PLAYER CHECK\n";
    int tmp_score = 0;
    if ( card_number > 0 ){

        for( int i = 0 ; i < card_number ; i++ ){ // COUNT THE SCORE
            tmp_score += (0b001111&card[i]);
        }

        if ( card_number == 2 ){  // IF IT'S TWO CARD
            if( (card[0]&0b110000) == (card[1]&0b110000) ){
                card_pok = true;
            }else
                card_pok = false;

        }else if ( card_number == 3 ){ // IF TI'S THREE CARD

            for ( int i = 0 ; i < 3 ; i ++ ){ // SORT WITH BUBBLE SORT
                for (int j = i ; j < 3 ; j ++){
                    if ( card[i] > card[j]  ){
                        int tmp = card[i];
                        card[i] = card[j];
                        card[j] = tmp;
                    }
                }
            }

            if ( (card[0]&0b001111) == (card[1]&0b001111) && (card[1]&0b001111) == (card[2]&0b001111) ){ // FIND THE THREE OF A KIND
                card_three_of_a_kind = true;
            }else
                card_three_of_a_kind = false;

            if ( ( card[0] + 1 == card[1] && card[1] + 1 == card[2] ) ){ // FIND THE STRIGHT
                card_straight = true;
            }else
                card_straight = false;

            if ( ( (card[0]&0b001111) > 10 ) && ( (card[1]&0b001111) > 10) && ((card[2]&0b001111) > 10 ) ){ // FIND THE ROYAL
                card_royal = true;
            }else
                card_royal = false;

            if ( ( (card[0]&0b110000) == (card[1]&0b110000) ) && ( (card[1]&0b110000) == (card[2]&0b110000) ) ){ // FIND POK
                card_pok = true;
            }else
                card_pok = false;

        }
    }
    printf("CARD \n");for(int i = 0 ; i < 3 ; i++ )decToBinary(card[i]);
    cout<<"SCORE -> "<<tmp_score<<endl<<"POK -> "<<card_pok<<endl<<"THREE OF A KIND -> "<<card_three_of_a_kind<<endl<<"STRIGHT -> "<<card_straight<<endl<<"ROYAL -> "<<card_royal<<endl;

}

bool dealer_card_score_check (){
    cout<<"\n\nDEALER CHECK \n";
    int tmp_score = 0;
    if ( dealer_card_number > 0 ){

        for( int i = 0 ; i < dealer_card_number ; i++ ){ // COUNT THE SCORE
            tmp_score += (0b001111&dealer_card[i]);
        }

        if ( dealer_card_number == 2 ){  // IF IT'S TWO DEALER_CARD
            if( (dealer_card[0]&0b110000) == (dealer_card[1]&0b110000) ){
                dealer_card_pok = true;
            }else
                dealer_card_pok = false;

        }else if ( dealer_card_number == 3 ){ // IF TI'S THREE DEALER_CARD

            for ( int i = 0 ; i < 3 ; i ++ ){ // SORT WITH BUBBLE SORT
                for (int j = i ; j < 3 ; j ++){
                    if ( dealer_card[i] > dealer_card[j]  ){
                        int tmp = dealer_card[i];
                        dealer_card[i] = dealer_card[j];
                        dealer_card[j] = tmp;
                    }
                }
            }

            if ( (dealer_card[0]&0b001111) == (dealer_card[1]&0b001111) && (dealer_card[1]&0b001111) == (dealer_card[2]&0b001111) ){ // FIND THE THREE OF A KIND
                dealer_card_three_of_a_kind = true;
            }else
                dealer_card_three_of_a_kind = false;

            if ( ( dealer_card[0] + 1 == dealer_card[1] && dealer_card[1] + 1 == dealer_card[2] ) ){ // FIND THE STRIGHT
                dealer_card_straight = true;
            }else
                dealer_card_straight = false;

            if ( ( (dealer_card[0]&0b001111) > 10 ) && ( (dealer_card[1]&0b001111) > 10) && ((dealer_card[2]&0b001111) > 10 ) ){ // FIND THE ROYAL
                dealer_card_royal = true;
            }else
                dealer_card_royal = false;

            if ( ( (dealer_card[0]&0b110000) == (dealer_card[1]&0b110000) ) && ( (dealer_card[1]&0b110000) == (dealer_card[2]&0b110000) ) ){ // FIND POK
                dealer_card_pok = true;
            }else
                dealer_card_pok = false;

        }
    }
    printf("DEALER_CARD \n");for(int i = 0 ; i < 3 ; i++ )decToBinary(dealer_card[i]);
    cout<<"SCORE -> "<<tmp_score<<endl<<"POK -> "<<dealer_card_pok<<endl<<"THREE OF A KIND -> "<<dealer_card_three_of_a_kind<<endl<<"STRIGHT -> "<<dealer_card_straight<<endl<<"ROYAL -> "<<dealer_card_royal<<endl;

}


void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32]={};

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = 5; j >= 0; j--)
        cout << binaryNum[j];
    cout<<endl;
}

int main(){
    card_score_check();
    dealer_card_score_check();
    return 0;
}
