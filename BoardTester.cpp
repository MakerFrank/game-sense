#include "BoardTester.h"

BoardTester::BoardTester() {
	// TODO Auto-generated constructor stub

}

BoardTester::~BoardTester() {
	// TODO Auto-generated destructor stub
}

int main(){
	cout << "Starting..." << endl;

	IOBoard ib = IOBoard();
	ib.procLoop();
    return 0;
}
