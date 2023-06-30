// ## Challenge-3b
// * Write additional functions to use the code to generate different types of Packets
// * Ex: Request packets, Response packets, Alert packets, Information packets
// * You can create your own formats within **data** section of the packet_t for different packet types


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "packetiser.h"

int main(){
    packet_t temp_packet;
    uint8_t arr[MAX_DATA_LENGTH]={0};
    int j=0;
    char *str=(char *)calloc(MAX_DATA_LENGTH+1, sizeof(char));
    
    printf("Enter the data to transmit\n");
    fgets(str,MAX_DATA_LENGTH+1,stdin);
    
    while(str[j]!='\0')
        arr[j++]=*(str+j);
    
    

    // for(int k=0;k<MAX_DATA_LENGTH;k++)
    //     printf("%x\t",arr[k]);
    // printf("\n");

    

}


