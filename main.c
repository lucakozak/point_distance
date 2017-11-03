//  Created by Kozak Luca on 2017. 11. 03..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
/*# Calculate Point Distances

## Summary

Develop a simple console application that calculates the minimum and maximum distance of a set of 3D points. After the process it prints the calculated distances and the related 3D points to standard output.

## Application flow
* Ask the user how many points he/she wants to use for the calculation.
* Alloc memory dynamically for the points.
* Generate 3D points, populate the allocated memory.
* Calculate distances between points. Find and store minimum and maximum distance and related points.
* Print the results to standard output.
* Free allocated memory.*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int a=0;
    float x1, x2, z1, z2, y1, y2, AB, AC, BC;
    
   printf("How many points would you like to use?(2 or 3)\n");
    scanf("%d",&a);
    while (a<2 || a>3) {
        printf("Error.You have to choose 2 or 3.Try again\n");
        scanf("%d",&a);
    }
    
    if (a==3) {
        printf("Input the coordinates of point A: \n");
        scanf("%f %f", &x1, &x2);
        
        printf("Input the coordinates of point B: \n");
        scanf("%f %f", &z1, &z2);
        
        printf("Input the coordinates of point C: \n");
        scanf("%f %f", &y1, &y2);
        
        AB= sqrtf((x1-x2)*(x1-x2)+(z1-z2)*(z1-z2));
        AC= sqrtf((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        BC= sqrtf((z1-z2)*(z1-z2)+(y1-y2)*(y1-y2));
        
        printf("AB distance=%f\n AC distance=%f\n BC distance=%f\n", AB, AC, BC);
        
        if (AB>AC && AB>BC) {
            printf("AB is the longest distance.");
        }
        if (AC>AB && AC>BC) {
            printf("AC is the longest distance.");
        }
        if (BC>AC && BC>AB) {
            printf("BC is the longest distance.\n");
    } else {
        printf("Input the coordinates of point A: \n");
        scanf("%f %f", &x1, &x2);
        
        printf("Input the coordinates of point B: \n");
        scanf("%f %f", &z1, &z2);
        
        AB= sqrtf((x1-x2)*(x1-x2)+(z1-z2)*(z1-z2));
        printf("AB distance=%f\n", AB);
    }}
    
        return 0;
}
