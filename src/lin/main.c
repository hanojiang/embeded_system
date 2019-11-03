#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef union
{
    unsigned char frameID_BYTE;
    struct 
    {
        unsigned char bit0: 1;
        unsigned char bit1: 1;
        unsigned char bit2: 1;
        unsigned char bit3: 1;
        unsigned char bit4: 1;
        unsigned char bit5: 1;
        unsigned char bit6: 1;
        unsigned char bit7: 1;
    } frameID_BIT;
} E_frameID;


E_frameID getPID(E_frameID frameID)
{
    E_frameID pid = frameID;

    pid.frameID_BIT.bit6 = frameID.frameID_BIT.bit0 ^ frameID.frameID_BIT.bit1 ^ frameID.frameID_BIT.bit2 ^ frameID.frameID_BIT.bit4;
    pid.frameID_BIT.bit7 = ~(frameID.frameID_BIT.bit1 ^ frameID.frameID_BIT.bit3 ^ frameID.frameID_BIT.bit4 ^ frameID.frameID_BIT.bit5);

    return pid;
}

int main(int argc, const char* argv[])
{
    
    // for (int i = 0; i < 256; i++)
    // {
    //     E_frameID frame, pid;
    //     frame.frameID_BYTE = i;
    //     pid = getPID(frame);
    //     printf("pid of 0x%x is 0x%x\n", i, pid.frameID_BYTE);
    // }
    if(argc!=2)
    {
        printf("error inputs");
    }
    E_frameID frameID;
    frameID.frameID_BYTE = atoi(argv[1]);
    E_frameID pid = getPID(frameID);
    printf("pid of 0x%x is 0x%x\n", frameID.frameID_BYTE, pid.frameID_BYTE);

    return 0;
}