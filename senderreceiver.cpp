#include "senderreceiver.h"

sender_receiver::sender_receiver() {
    payload.sof = 1;
    payload.can_id = 0;
    payload.rtr  = 0;
    payload.ide = 0;
    payload.r0 = 0;
    payload.dlc = 0;
    payload.data_u = 0;
    payload.data_l = 0;
    payload.crc = 0;
    payload.ack = 0;
    payload.eof = 0;
    payload.ifs = 0;
}

sender_receiver::~sender_receiver() {
	// TODO Auto-generated destructor stub
}

