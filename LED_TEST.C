#include  <rtx51tny.h>

void xxa() _task_ 0
{
	os_create_task(0);
	os_create_task(1);
	os_create_task(2);
	os_delete_task(0);

}
void clock() _task_ 1
{
	
	os_wait(K_TMO,2,0);
}
void LED_display() _task_ 2
{
	os_wait(K_TMO,2,0);
}
