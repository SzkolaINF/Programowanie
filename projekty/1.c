
#include <stdio.h>
#include <time.h>
#include <unistd.h>
char znaki[10] = {0b00111111, 0b00000011, 0b01101101, 0b01100111, 0b01010011, 0b01110110, 0b00100011, 0b01111111, 0b01110111}; 
//char cyfry[10] = {1,2,3,4,5,6,7,8,9,0};

char osiem = 127; //0x3f
char zero = 63; //0x3f
char jeden = 3; //0x3
char dwa = 0b01101101;//
char trzy = 0b01100110;

void main(void) {
    int i = 0;
    
    for (;;) {
        
        //printf("cyfra - %d\n", cyfry[i%10]);
        printf("cyfra - %02d, %d, %d \n",
                i%60,  
                znaki[( (i%60)/10)], 
                znaki[( (i%60) % 10)]
        );
        //for(j=0;++j;j<10000){};
        sleep(1);
        ++i;
    }
}
