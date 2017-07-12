//============================================================================
// Name        : workeri.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "treeWorker.h"
#include "Operations.h"

int main() {

 Operations op;

 treeWorker *tree1 = new treeWorker ("ivan","455","addresss",34,23);
 treeWorker *tree2 = new treeWorker ("ivan","5454","addressgfs",36,23);
 grassworker *grass1 = new grassworker("ivann","534454","addressgfs",36,23);

 op.addWorker(*tree1);
 op.addWorker(*tree2);
 op.addWorker(*grass1);
 op.printAllSal();

	return 0;
}
