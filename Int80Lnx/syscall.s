.set GET_PID_IDX, 39

.global SysGetPid
.global IntGetPid

SysGetPid:
	movl $GET_PID_IDX, %eax
	syscall
	ret

IntGetPid:
	movl $GET_PID_IDX, %eax
	int $0x80
	ret