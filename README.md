# Higher Order Procedures in C++

- [Introduction](#introduction)
- [Lambda Functions](#Lambda Functions)
  - [Lambda in C++](#Lambda in C++)
  - [Lambda Example 1](#Lambda Example 1)
  - [Lambda Example 2](#Lambda Example 2)
- [Map](#Map)
  - [`std::transform` in C++](#std::transform in C++)
  - [Transform Example 1](#Transform Example 1)
  - [Transform Example 2](#Transform Example 2)
- [Filter](#Filter)
  - [`std::remove_if` in C++](#std::remove_if in C++)
  - [Remove If Example 1](#Remove If Example 1)
  - [Remove If Example 2](#Remove if Example 2)
- [Fold](#fold)
  - [`std::accumulate` in C++](#std::accumulate in C++)
  - [Accumulate Example 1](#Accumulate Example 1)
  - [Accumulate Example 2](#Accumulate Example 2)
- [Conclusion](#conclusion)
- [References](#references)

## Introduction

### What are Higher Order Procedures, why bother?

Higher Order Procedures (HOPs) are procedures that take other functions as arguments or return a function as a result. HOPs enable a programmer to reuse and abstract code to improve code readability and modularity. HOPs are at the core of the functional programming paradigm which is based on using functions to build and maintain code. HOPs also create an opportunity for the programmer to abstract away from the fine-grained implementation of a function and focus on a high-level approach to solving a problem. Some examples of common HOPs are - Lambda functions, Map, Filter, and Fold. 

### What is so special about C++?

C++ is a very powerful multi-paradigm programming language that supports Object Oriented Programming, Generic Programming, and Functional Programming styles. While C++ does not have built-in support for HOPs, it provides programmers with features like lambda functions and function pointers which can be used for their implementation. The C++ Standard Library also provides developers with functions that are equivalent to a HOP as discussed below. C++ enables developers to directly control hardware resources which might be useful in applications where functional programming languages are used, especially if those applications are memory-intensive or time-sensitive.

Let us explore the functional programming paradigm using C++ below.

## Lambda Functions

The term Lambda Function stems from Lambda Expressions used in Lambda Calculus. Lambda Functions are a way to create anonymous or name-less procedures. They are often used to improve code readability; save time, space, and effort for the developer when a small function is to be used and doesn't require a separate definition. They also provide a minimalistic way to create closures which are an extremely powerful tool in functional programming.

### Lambda in C++

In C++, Lambda Functions are defined as follows:

``` c++
auto multiply = [](int a, int b) -> int {return a*b;};
```

The `[] ` is used to denote the beginning of the lambda function. The `(int a, int b)` is a parameter list for a lambda function and `-> int` specifies the return type of the lambda function. The body of the lambda function is enclosed in the curly braces, in this case `{return a*b;}` and the `auto` keyword is used to automatically deduce the type of the lambda function.

Let us look at some examples that use lambda functions in C++.

### Lambda Example 1

```C++
// Program to add two numbers using a lambda function
#include <iostream>

int main()
{
    int x = 10;
    int y = 12;

    auto add = [](int a, int b) -> int {
        return a + b;
    };
    
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
    return 0;
}
```



### Lambda Example 2

```C++
#include <iostream>
#include <vector>

// Program to print a vector using a lambda function
int main()
{
    std::vector<int> my_vector = {1, 2, 3, 4, 5};

    auto print = [](const std::vector<int>& vec)
    {
        for(const auto& number : vec){
            std::cout << number << std::endl;
        }
    };

    print(my_vector);
    return 0;
}
```



## Map

### `std::transform` in C++



### Transform Example 1



### Transform Example 2



## Filter

### `std::remove_if` in C++



### Remove If Example 1



### Remove If Example 2



## Fold

### `std::accumulate` in C++



### Accumulate Example 1



### Accumulate Example 2



## Conclusion



## References











