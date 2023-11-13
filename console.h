#include "types.h"
//New constants used in console.c for history command

#define UP_ARROW 226
#define DOWN_ARROW 227
#define MAX_HISTORY 16
#define INPUT_BUF 128

/*
  this method erases the current line from screen
*/
void
eraseCurrentLineOnScreen(void);


/*
  this method erases all the content of the current command on the inputbuf
*/
void
eraseContentOnInputBuffer();

/*
  this method will print the given buf on the screen
*/
void
copyBufferToScreen(char * bufToPrintOnScreen, uint length);

/*
  this method will copy the given buf to input.buf                                                               
*/
void
copyBufferToInputBuffer(char * bufToSaveInInput, uint length);

/*
  this method copies the current command in the input.buf to the saved history 
  @param length - length of command to be saved                                                                                
*/
void
saveCommandInHistory();

/*
  this is the function that gets called by the sys_history and writes the requested command history in the buffer
*/
int history(char *buffer, int historyId);
