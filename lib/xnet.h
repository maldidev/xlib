#ifndef XNET_H
#define XNET_H
#include <xlang.h>
#include <sys/socket.h>

funct xsocket(i32_t domain, i32_t type, i32_t protocol) {
    return socket(domain, type, protocol);
}
#endif