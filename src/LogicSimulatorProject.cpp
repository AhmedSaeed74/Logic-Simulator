//============================================================================
// Name        : LogicSimulatorProject.cpp
// Author      : Yasmine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GateGenerator.h"
using namespace std;

int main() {

	GateGenerator gateGenerator;
	gateGenerator.loadFile("test0.txt");

	return 0;
}
