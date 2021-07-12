#include <stdio.h>

#include "s_log.h"

s_tag("你猜");

int main(void)
{
	while(1) {
		s_log_a("%d", 100);
		s_log_e("%c", 'h');
		s_log_w("%x", 0x200);
		s_log_t("%f", 10.5);
		s_log_i("%s", "small");
		s_log_d("%s %s", "log", "test");
		s_log_v("%f, %d, %c, %x , %s", 99.99, 100, 'q', 0x99, "small log test");
		s_log_d("%s %s", "log", "test");
		s_log_i("%s", "small");
		s_log_t("%f", 10.5);
		s_log_w("%x", 0x200);
		s_log_e("%c", 'h');
		s_log_a("%d", 100);
		sleep(2);
	}

	return 0;
}