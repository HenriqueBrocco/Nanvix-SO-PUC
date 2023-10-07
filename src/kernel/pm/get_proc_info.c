#include <nanvix/pm.h>
#include <nanvix/mm.h>

/*
 * @brief Chama a função do_get_process_info
 * @param pid Identificador do processo
 * @param buf Ponteiro para struct com informações do processo
*/

PUBLIC void  sys_get_process_info(pid_t pid, struct process_buf *buf){
	do_get_process_info(pid, buf);
}