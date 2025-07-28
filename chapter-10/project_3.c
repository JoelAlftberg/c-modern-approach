/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* poker.c (Chapter 10, page 233) */
/* Classifies a poker hand */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1


/* external variables */

bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
// modified prototypes to take arrays as parameters
void read_cards(int hand[NUM_CARDS][2]); 
void analyze_hand(int hand[NUM_CARDS][2]); 
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  int player_hand[NUM_CARDS][2];

  for (;;) {
    read_cards(player_hand);
    analyze_hand(player_hand);
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards from the two parameters
 *  num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards  *
 **********************************************************/
void read_cards(int hand[NUM_CARDS][2])
{
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card, duplicate_card = false;
  int cards_read = 0;

  // Clears hand
  for (int card = 0; card < NUM_CARDS; card++) {
    for (int rank_and_suit = 0; rank_and_suit < 2; rank_and_suit++)
      hand[card][rank_and_suit] = 0;
  }

  while (cards_read < NUM_CARDS) {
    bad_card = false;
    duplicate_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    for(int card = 0; card <= cards_read; card++){
        if (card != cards_read){
          if (hand[card][0] == rank && hand[card][1] == suit){
            duplicate_card = true;
            break;
          }
        }
      }
  
    
    if (bad_card)
      printf("Bad card; ignored.\n");
    else if (duplicate_card){
      printf("duplicate_card card; ignored.\n");
    }    
    else {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }

}


/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(int hand[NUM_CARDS][2])
{

  straight = false;
  flush = true; // changed to start as true
  four = false;
  three = false;
  pairs = 0;
  
  int base_suit = hand[0][1]; // suit of first card
  for (int card = 0; card < NUM_CARDS; card++){
    if (hand[card][1] != base_suit){
      flush = false;
      break; // no need to check more cards
    }
  }

  /* 
    check for straight 2.0 
    take difference between highest card and lowest
    if != 4 it's not a flush
  */
  int highest_card = hand[0][0], lowest_card = hand[0][0];
  for (int card = 0; card < NUM_CARDS; card++){
    if (hand[card][0] >= highest_card){
      highest_card = hand[card][0];
    }
    else if (hand[card][0] <= lowest_card){
      lowest_card = hand[card][0];
    }
  }
  if (highest_card - lowest_card == 4){
    straight = true;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs 2.0 */
  
  for (int card = 0; card < NUM_CARDS; card++) {

    int x_of_a_kind = 0;

    for(int next_card = card + 1; next_card < NUM_CARDS; next_card++){
      if(hand[next_card][0] == hand[card][0]){ 
        x_of_a_kind++;
      }
    }

    if (x_of_a_kind == 1){
      pairs++;
    }
    if (x_of_a_kind == 2){
      three = true;
    }
    if (x_of_a_kind == 3){
      four = true;
    }
    
  }

}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}