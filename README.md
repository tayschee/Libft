# Libft
![42](https://img.shields.io/static/v1?label=&labelColor=000000e&logo=42&message=project&color=000000&style=flate)
![Stars](https://img.shields.io/github/stars/tayschee/Libft?style=social)

## Summary
- [About The Project](#about-the-project)
- [Getting Started](#getting-started)
  - [Installation](#installation)
  - [Compile](#compile)
  - [Use Library](#use-library)
  - [Delete](#delete)

## About The Project
[Libft](https://cdn.intra.42.fr/pdf/pdf/50680/fr.subject.pdf) is project of 42Paris to learn C and create our own library \
It consist to reproduce or create useful C function like strlen.

## Getting Started
### Installation
Clone and move into clone directory:
```
git clone https://github.com/tayschee/Libft.git libft
cd libft
```

### Compile
To compile library use :
```
make
```
OR
```
make bonus
```
bonus rules add more functions to the library.

### Use Library

To use libft.a add to your compilation (ex: gcc -c) :
```
-I path/to/libft.h
```
And add to link edition (ex: gcc -o) : 
```
-L path/to/libft.a/directory -l libft.a
```

### Delete
```
make fclean
```

