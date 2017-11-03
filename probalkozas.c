//
//  main.c
//  idk
//
//  Created by Kozak, Luca on 2017. 11. 03..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main () {
    int i, n;
    time_t t;
    n = 5;
    
    srand((unsigned) time(&t));
    
    
    printf("Number of the points: ");
    scanf("%d", &n);
    
        for( i=1; i<=n; i++)
        {
            printf("Coordinate of point %d: %d,%d\n", i, rand() % 100, rand() % 100);
        }
        
        return(0);
    }
