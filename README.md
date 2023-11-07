# Logic Simulator

## Project Description

The Logic Simulator is a software tool designed to simulate and analyze logic circuits. It allows users to define logic gates, connect them to create circuits, and then simulate these circuits to determine their output based on the given inputs. The project is structured around three primary classes: `Node`, `Gate`, and `Simulator`.

## Node Class

### Specifications

- Default and non-default constructors.
- Getters and setters for name and value.
- Overloaded `<<` operator to print node information.
- Methods for logical operations: `AND`, `OR`, `XOR`, and more.
- Additional functions as required.

The `Node` class represents individual nodes in the logic circuits, such as nodes A, B, etc.

## Gate Class

### Specifications

- Default and non-default constructors.
- Getters and setters for input and output nodes.
- Supports various gate types: AND, OR, NAND, NOR, XOR, XNOR, NOT.
- `simulateGate` function to calculate the logic value based on gate type.

The `Gate` class represents logic gates with two input nodes and one output node.

## Simulator Class

### Specifications

- Contains arrays of pointers to Gate and Node objects.
- `postGate` method to insert a gate into the array.
- `postNode` method to insert a node into the array.
- `FindNode` method to search for a node by its name.
- `startSimulate` method to initiate circuit simulation.
- Only one object of this class can be created.

The `Simulator` class manages the simulation of logic circuits.

## GateGenerator Class

### Specifications

- `parseInput` function to read and parse input commands.
- `createNode` function to create a node and return its address.
- `createGate` function to create various types of gates.
- Proper error handling and validation.

The `GateGenerator` class generates nodes and gates based on user input.

## Input Format

- Input commands specify gate type, inputs, and outputs.
- Commands include "SET" to define input values and "SIM" to start simulation.
- "OUT" commands show the output of specific nodes or "OUT ALL" to display all nodes' values.

## Constraints

- No C type casting.
- No void pointers.
- No public variables.
- Careful selection of public, private, or protected functions and data members.
- Code should be warning-free.

## Output Format

- The program prints the values of nodes as node symbol: node value.

## Sample Input and Output

Sample input and output examples are provided to demonstrate the functionality of the Logic Simulator.

