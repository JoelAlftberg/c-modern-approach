#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include "../headers/line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;
static bool space_bias_start_of_line = true;

void clear_line(void)
{
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  if (num_words > 0) {
    line[line_len] = ' ';
    line[line_len+1] = '\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  double extra_spaces;
  int i, j, spaces_to_insert;

  extra_spaces = MAX_LINE_LEN - line_len;

  for (i = 0; i < line_len; i++) {
    if (line[i] != ' ')
      putchar(line[i]);
    else {
      if (space_bias_start_of_line == true){
        spaces_to_insert = (int) ceil((extra_spaces / (num_words - 1)));
      }
      else{
        spaces_to_insert = (int) floor((extra_spaces / (num_words - 1)));
      }
      for (j = 1; j <= spaces_to_insert + 1; j++)
        putchar(' ');
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
    
  }
  space_bias_start_of_line = !space_bias_start_of_line;
  putchar('\n');
  
}

void flush_line(void)
{
  if (line_len > 0)
    puts(line);
}