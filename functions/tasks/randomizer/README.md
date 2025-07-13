# Assignment 2: Randomizer

## Objective
The objective of this assignment is to practice with using lambda function.

## Task
Implement a `std::function<int(int)> randomize(std::function<int(int, int)> to_randomize, int seed)`.

Function takes as an argument another function and returns new function that just passes random argument to the `to_randomize` function. For random number generation use `std::mt19937` with `seed` and use `std::uniform_int_distribution<int>` from 1 to 6. [See more details here](https://en.cppreference.com/w/cpp/numeric/random).

Set default value of `seed` argument as 0.

Example:
```cpp
int add(int a, int b) {
    return a + b;
}
...
auto randomized_add = randomize(add,3);
int a = randomized_add(4); // will be equal to random value + 4
int b = randomized_add(3); // will be equal to random value + 3
```

Experiment with your function in `main.cpp` file.

### Guidance:

Wrap function in arguments into lambda function and return it.

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `solution.h` and function in it.
3. Modify file `main.cpp`.
4. Compile and run your program to ensure it works correctly:
```shell
cmake -S . -B build
cmake --build build
./build/main
```

### Running the Tests
To run the tests, follow these steps:

1. Make sure you have CMake installed on your system.
2. Navigate to the directory containing your CMakeLists.txt file and open a terminal.
3. Run the following commands:
```shell
cmake -S . -B build
cmake --build build
./build/solution_test
```
4. The tests should run, and you should see the output indicating whether they passed or failed.

