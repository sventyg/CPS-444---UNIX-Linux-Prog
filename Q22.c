#include <string.h>

LENS bigEye[10]; 
bigEye[2].foclen = 500; 
bigEye[2] fstop = 2.0; 
strcpy(bigEye[2].brand, "Remarkatar"); 

typedef struct lens {    /* lens descriptor */
    float foclen;        /* focal length,mm */
    float fstop;         /* aperture        */
    char brand[30];      /* brand name      */
} LENS;
