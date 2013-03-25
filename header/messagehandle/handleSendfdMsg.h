/*
 * handleSendfdMsg.h
 *
 *  Created on: 2013-2-1
 *      Author: keym
 */

#ifndef HANDLESENDFDMSG_H_
#define HANDLESENDFDMSG_H_
#include"messageHandleInterface.h"
class handleSendfdMsg : public messageHandleInterface{
private:
	virtual commontype::headInfo *packDataHead();
	virtual char *packDataBody();
public:
	handleSendfdMsg():messageHandleInterface(magicnum::messagetype::NULLSENDFDT){}
};

#endif /* HANDLESENDFDMSG_H_ */