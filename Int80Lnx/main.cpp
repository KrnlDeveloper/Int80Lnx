#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


extern "C" pid_t SysGetPid();
extern "C" pid_t IntGetPid();


int main()
{
	pid_t id = getpid();
	printf("PID = %d\n", id);

	pid_t id2 = SysGetPid();
	printf("PID2 = %d\n", id2);

	pid_t id3 = IntGetPid();
	if (id3 < 0)
	{
		printf("Error: %s\n", strerrorname_np(-id3));
	}
	printf("PID3 = %d\n", id3);

	getchar();

	return 0;
}