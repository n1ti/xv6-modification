#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) 
{   
    char buffer[128];
    history(buffer, 1); //load 1st command in history to the buffer
    printf(1, "First Command in History: %s", buffer); //print to screen
    exit();
} 