#ifndef __UART_H
#define __UART_H

extern void uart_init(void);
extern int sendData(const char* logName, const char* data);
extern void tx_task(void *arg);
extern void rx_task(void *arg);

#endif