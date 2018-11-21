#ifndef SENDERRECEIVER_H_
#define SENDERRECEIVER_H_

struct s_Payload {
    unsigned int sof : 1;        // Start Of Frame
    unsigned int can_id : 11;    // Identifier
    unsigned int rtr : 1;        // Remote Transmission Request
    unsigned int ide : 1;        // IDentifier Extension
    unsigned int r0 : 1;         // Reserved
    unsigned int dlc : 4;        // Data Length Code (How many bytes are being transmitted)
    unsigned long data_u;        // Reserved
    unsigned long data_l;        // Reserved
    unsigned int crc : 16;       // Cyclic Redundancy Check
    unsigned int ack : 2;        // Acknowledgement (acknowledgement and delimiter)
    unsigned int eof : 7;        // End of CAN frame
    unsigned int ifs : 7;        // InterFrame Space
};

class sender_receiver {
public:
	s_Payload	payload;
	sender_receiver();
	virtual ~sender_receiver();
};

#endif /* SENDERRECEIVER_H_ */
