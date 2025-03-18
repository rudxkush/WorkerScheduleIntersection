# Worker Schedule Intersection

A C++ implementation that efficiently finds days when workers' schedules overlap using bit manipulation.

## Overview

This program calculates the intersection of days when different workers are present in a month. 
It uses bit manipulation to efficiently represent the days and compute overlaps, making it both time and space efficient.

## Features

- Represents worker schedules as bitmasks for efficient storage and computation
- Compares consecutive worker schedules and first-to-last to find common days
- Uses bitwise operations for fast intersection calculation
- Leverages `__builtin_popcount` for optimized bit counting

## How It Works

1. Each worker's schedule is converted to a bitmask where each bit represents a day of the month
2. Bitwise AND is used to find common days between two workers
3. `__builtin_popcount` counts the number of set bits in the result, representing the number of common days
4. The program compares adjacent worker schedules and also the first and last workers

## Implementation Details

The code demonstrates:
- Efficient bit manipulation with left shift and OR operations to set bits
- Use of bitwise AND to find intersections
- Built-in functions for population count to efficiently count set bits
- A practical application of bitmasks for set operations

## Example

For the provided schedules:
- Worker 1: Days 2, 3, 5, 6, 8
- Worker 2: Days 2, 4, 5, 8
- Worker 3: Days 1, 2, 10, 12, 14, 16

The program computes:
- Intersection between Workers 1 & 2
- Intersection between Workers 2 & 3
- Intersection between Workers 1 & 3
- Returns the maximum number of overlapping days

## Compilation

```bash
g++ -std=c++11 worker_schedule_intersection.cpp -o worker_schedule_intersection
./worker_schedule_intersection
```

## License

[MIT](https://github.com/rudxkush/WorkerScheduleIntersection/blob/main/LICENSE)
