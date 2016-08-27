//
//  main.c
//  gameboi
//
//  Created by Ryan Terry on 8/25/16.
//  Copyright © 2016 Byteandahalf. All rights reserved.
//

#include <stdio.h>

#include "system.h"

int main(int argc, const char * argv[]) {
    
    if(!gb_system_boot())
    {
        printf("Failed to boot! Aborting...\n");
        return 1;
    }
    
    while(!gb_system_stopped)
    {
        gb_system_loop();
    }
    
    gb_system_shutdown();
    
    return 0;
}
