# Calculate Point Distances

## Summary

Develop a simple console application that calculates the minimum and maximum distance of a set of 3D points. After the process it prints the calculated distances and the related 3D points to standard output.

## Application flow
 * Ask the user how many points he/she wants to use for the calculation.
 * Alloc memory dynamically for the points.
 * Generate 3D points, populate the allocated memory.
 * Calculate distances between points. Find and store minimum and maximum distance and related points.
 * Print the results to standard output.
 * Free allocated memory.

## Requirements
### Structure of a 3D point
Define this structure in a separated header file.

```
struct Point3D {
    float x;
    float y;
    float z;
}
```

### Documentation
Add inline documentation to the code. Struct, methods. Use Java syntax for documentation.
