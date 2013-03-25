/*
 * commontype.h
 *
 *  Created on: 2013-1-31
 *      Author: keym
 */

#ifndef COMMONTYPE_H_
#define COMMONTYPE_H_
namespace commontype{
//放入发送队列的数据类型
struct _dataandsize{
	unsigned _type;
	char *_pdata;//要发送的数据（头+数据）
	unsigned _size;//头+数据的大小
};
typedef struct _dataandsize dataInfo;
//发送消息的头
struct _messagehead{
	unsigned _type;
	unsigned _size;
};
typedef struct _messagehead headInfo;
};

#endif /* COMMONTYPE_H_ */