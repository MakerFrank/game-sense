#ifndef IOBOARD_H_
#define IOBOARD_H_

#include "senderreceiver.h"

//! State enumerator
/*! Each device (asset) needs have a defined state in order for the system to operate. */
enum t_state {
	UNKNOWN,			/*!< The asset is in an UNKNOWN state. */
	ERROR,			/*!< The asset is in an ERROR state. */
	RUNNING,			/*!< The asset is running. */
	PROGRAMMING,		/*!< The asset is in a ready to program state. */
	INITIALIZE		/*!< The asset is initialized */
};

static const unsigned int SENSOR_COUNT=4;

class IOBoard {
	t_state state;
    sender_receiver	sender;
    sender_receiver	receiver;

public:
	IOBoard();
	virtual ~IOBoard();
	t_state getState();
	t_state setState(t_state);
	void init();
	void procLoop();
	void program();
};

#endif /* IOBOARD_H_ */
