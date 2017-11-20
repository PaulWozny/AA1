#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <QHostAddress>

#define MAX_NUMBER_OF_SEATS 99
#define MAX_NUMBER_OF_DIGITS 2
#define UMBE 1
//arbitrary IP number
//#define IP_ADDRES_SERVER (QHostAddress)"192.168.1.156"
#define IP_ADDRES_SERVER (QHostAddress) QHostAddress::LocalHost
#define IP_PORT_NUMBER (quint16)12346 //65535 max

#endif // CONSTANTS_H
