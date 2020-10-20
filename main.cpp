#ifdef build_platform_host

#define CATCH_CONFIG_MAIN
#include "build.h"
#include "test.h"

#else

#include "build.h"
#include "emac.h"
#include "string.h"

struct Frame
{
    unsigned char destination[6];
    unsigned char source[6];
    unsigned short int type;
    unsigned char ver_type;
    unsigned char error;
    unsigned short major;
    unsigned char minor;
    unsigned char command;
    unsigned int tag;
    unsigned char aflags;
    unsigned char error_feature;
    unsigned char sector_count;
    unsigned char cmd;
    unsigned char lba[6];
    unsigned short int reserved = 0;

};

int main()
{
    Frame frame;
    memset(frame.destination, 0xff, 6);
    
    for (int i = 0; i < 6; i++)
    {
        frame.source[i] = i;
    }

    frame.type = 0xa288;
    frame.ver_type = 0x10; // version 1 request
    frame.error = 0;
    frame.major = 0xffff;
    frame.minor = 0xff;
    frame.command = 0;
    frame.tag = 0xefbeadde;
    frame.aflags = 0; // no asynchronous, no error, no write
    frame.error = 0;
    frame.sector_count = 1;
    frame.cmd = 0xec;
    
    for (int i = 0; i < 6; i++) frame.lba[i] = i;

    emac::init();

    while(1)
    {
        emac::send(&frame, sizeof(frame));

        for (int i = 0; i < 10000; i++)
        {
            
        }
        
    }
}

#endif
