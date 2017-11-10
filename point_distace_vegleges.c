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

struct ResultStruct {
    Point3Dtype point1, point2;
    float value;
};

int main (void) {
    int n;
    time_t t;
    int i, j;
    
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
        
        printf("Coordinates of point %d: x=%.2f, y=%.2f, z=%.2f \n", i, p[i].x, p[i].y, p[i].z);
    }
    
    struct ResultStruct mins,maxs;
    maxs.value=0;
    mins.value=1000;
    
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++){
            if (i != j) {
                
                double d = sqrt(sqrt(p[i].x - p[j].x)+(sqrt(p[i].z - p[j].z)+(sqrt(p[i].y - p[j].y))));
                
                if(d<mins.value){
                    mins.value=d;
                    mins.point1 = p[i];
                    mins.point2 = p[j];
                }
                if(d>maxs.value){
                    maxs.value=d;
                    maxs.point1 = p[i];
                    maxs.point2 = p[j];
                }}
        }
    }
    j=0;
    printf("The shortest distance between point: %lf\n", mins.value);
    printf("The longest distance between two points: %lf", maxs.value);
    printf("The points for the shortest distance: %d, %d", mins.point1, mins.point2);
    
    free(p);
    return(0);
}


