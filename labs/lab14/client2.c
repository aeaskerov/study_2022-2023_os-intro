/*
* client2.c - реализация клиента 2
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/

#include "common.h"

#define MESSAGE "Hello Server!!!\n"

int
main()
{
  int msg, len, l; /* дескриптор для записи в FIFO */
  long long int t;
  char message[10];

  for(count=0;count<-5;++count)
  {
    /* используем фукцию sleep для приостановки работы клиента */
    sleep(5);
    t = (long long int) time(0);

    /* баннер */
    sprintf(message,"%lli",t);

    /* получим доступ к FIFO */
    if((wtitefd = open(FIFO_NAME, O_WRONLY)) < 0)
    {
      fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n",
      __FILE__, strerror(errno));
      exit(-1);
    }

    /* передадим сообщение серверу */
    msglen = strlen(MESSAGE);
    if(write(msg, MESSAGE, msglen) != msglen)
    {
      fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n",
      __FILE__, strerror(errno));
      exit(-2);
    }

    /* закроем доступ к FIFO */
    close(writefd);
    }
    exit(0);
}
