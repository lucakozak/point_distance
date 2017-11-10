//
//  main.c
//  duh
//
//  Created by Kozak, Luca on 2017. 11. 03..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

struct Point3Dstruct {
    float x;
    float y;
    float z;  };

typedef struct Point3Dstruct Point3Dtype;



int main (void) {
    int n;
    time_t t;
    int i;
    double min, max;

    srand((unsigned) time(&t));
    
    printf("Number of the points: ");
    scanf("%d", &n);
    
    
    Point3Dtype *p;
    
    p = (Point3Dtype *) malloc (sizeof(Point3Dtype)*n);
    
    //Point3Dtype p[n];
    
    for(i=1; i<=n; i++)
    {
        p[i].x = rand()%100;
        p[i].y = rand()%100;
        p[i].z = rand()%100;

        printf("Coordinates of point %d: x=%.2f, y=%.2f, z=%.2f \n", i, p[i].x, p[i].y, p[i].z) ;
    }

    min=1000;
    max;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++){
            if (i != j) {
               
                double d = sqrt(sqrt(p[i].x - p[j].x)+(sqrt(p[i].z - p[j].z)+(sqrt(p[i].y - p[j].y))));
        
                if(d<min)
                    min=d;
                if(d>max)
                    max=d;
                
            }
        }
    }
    printf("The shortest distance between two points: %lf\n", min);
    printf("The longest distance between two points: %lf", min);
 
    free(p);
    return(0);
}


