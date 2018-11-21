/*! \brief IOBoard
 *         The control board controller
 *
 *  The control board will....
 */
#include <iostream>
using namespace std;

#include "IOBoard.h"

//! IOBoard constructor
/*!
  The IOBoard needs to be created in an undefined state.
*/
IOBoard::IOBoard() {
	state = UNKNOWN;
    sender_receiver	sender  =  sender_receiver();
    sender_receiver	receiver  =  sender_receiver();
}

IOBoard::~IOBoard() {
}

t_state IOBoard::getState() {
	return state;
}

t_state IOBoard::setState(t_state setStateVal) {
	this->state = setStateVal;
	return state;
}

void IOBoard::init() {
	state = INITIALIZE;
	// Set or retrieve the boards address

	// Initialize board communication

	// Retrieve sensor array
	for ( int sctr=0; sctr<SENSOR_COUNT; sctr++ ) {

	}
}

void IOBoard::program() {
	state = PROGRAMMING;
}

void IOBoard::procLoop() {
	while(1) {
		switch ( this->state ) {
		case RUNNING:
			cout << "System Running" << endl;
			break;
		case PROGRAMMING:
			cout << "System Programming" << endl;
			break;
		case INITIALIZE:
			cout << "System Initializing" << endl;
			break;
		default :
			cout << "Unknown state" << endl;
			break;
		}
	}
}
