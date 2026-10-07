*This project has been created as part of the 42 curriculum*

# CPP Module 03

## Description

The fourth module of the 42 C++ series. It is about **inheritance**: building a family of robot classes from a common base, and then dealing with the classic **diamond problem** using **virtual inheritance**. Along the way, it shows how constructors and destructors are chained between a base class and its derived classes.

All code is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Instructions

Each exercise has its own folder and its own `Makefile`:

```bash
cd ex00        # or ex01, ex02, ex03
make           # builds the executable
make clean     # removes object files
make fclean    # removes object files and the executable
make re        # rebuilds everything
```

### Requirements

- A C++ compiler (`c++`, `g++`, or `clang++`) with C++98 support
- `make`

## Exercises

### ex00: Aaaaand... OPEN!

Creates the base class **`ClapTrap`**, a small robot with a name and three attributes:

| Attribute | Default value |
|---|---|
| Hit points | 10 |
| Energy points | 10 |
| Attack damage | 0 |

It has three actions, each printing what happens:

- `attack(target)` makes it attack another robot (costs 1 energy point).
- `takeDamage(amount)` makes it lose hit points.
- `beRepaired(amount)` makes it regain hit points (costs 1 energy point).

A `ClapTrap` with no hit points or no energy points can't act.

**Focus:** class design in the Orthodox Canonical Form, and clear output for every action.

### ex01: Serena, my love!

Adds a first derived class, **`ScavTrap`**, which inherits from `ClapTrap` with its own values (100 hit points, 50 energy points, 20 attack damage), its own `attack()` message, and a special ability, `guardGate()`.

The constructor and destructor messages show the **chaining order**: the base class is constructed first and destroyed last.

**Focus:** simple inheritance, and the order of construction and destruction.

### ex02: Repetitive work

Adds a second derived class, **`FragTrap`**, which also inherits from `ClapTrap` (100 hit points, 100 energy points, 30 attack damage) and has its own special ability, `highFivesGuys()`.

**Focus:** reusing a base class across several derived classes.

### ex03: Now it's weird!

Creates **`DiamondTrap`**, which inherits from both `FragTrap` and `ScavTrap`, which themselves inherit from `ClapTrap`. This creates the **diamond problem**, solved here with **virtual inheritance**, so that only one `ClapTrap` exists in each `DiamondTrap`.

- It has its own private `name`, and its `ClapTrap` part is named with the suffix `_clap_name`.
- It takes its hit points and attack damage from `FragTrap`, its energy points from `ScavTrap`, and uses `ScavTrap`'s `attack()`.
- `whoAmI()` prints both its own name and its `ClapTrap` name.

**Focus:** multiple inheritance, the diamond problem, and virtual inheritance.

## Project structure

```
.
├── ex00/   # ClapTrap
├── ex01/   # ScavTrap
├── ex02/   # FragTrap
└── ex03/   # DiamondTrap
```

Each folder contains its own `Makefile`, class headers (`.hpp`), sources (`.cpp`), and a `main.cpp` with tests.

## Resources

- [cppreference: derived classes](https://en.cppreference.com/w/cpp/language/derived_class)
- [Virtual inheritance and the diamond problem](https://isocpp.org/wiki/faq/multiple-inheritance)
- The 42 CPP Module 03 subject PDF
