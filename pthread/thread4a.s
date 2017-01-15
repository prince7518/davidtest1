	.file	"thread4a.c"
	.globl	run_now
	.data
	.align 4
	.type	run_now, @object
	.size	run_now, 4
run_now:
	.long	1
	.globl	message
	.type	message, @object
	.size	message, 12
message:
	.string	"Hello World"
	.comm	num,4,4
	.globl	count
	.section	.rodata
	.align 4
	.type	count, @object
	.size	count, 4
count:
	.long	20000000
	.comm	work_mutex,24,4
.LC0:
	.string	"Mutex initialization failed"
.LC1:
	.string	"Thread creation failed"
	.align 4
.LC2:
	.string	"\nWaiting for thread to finish..."
.LC3:
	.string	"num is :%lu\n"
.LC4:
	.string	"Thread join failed"
.LC5:
	.string	"Thread joined"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	movl	$0, 40(%esp)
	movl	$0, 36(%esp)
	movl	$0, 4(%esp)
	movl	$work_mutex, (%esp)
	call	pthread_mutex_init
	movl	%eax, 44(%esp)
	cmpl	$0, 44(%esp)
	je	.L2
	movl	$.LC0, (%esp)
	call	perror
	movl	$1, (%esp)
	call	exit
.L2:
	movl	$message, 12(%esp)
	movl	$thread_function, 8(%esp)
	movl	$0, 4(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	pthread_create
	movl	%eax, 44(%esp)
	cmpl	$0, 44(%esp)
	je	.L3
	movl	$.LC1, (%esp)
	call	perror
	movl	$1, (%esp)
	call	exit
.L3:
	movl	$0, 36(%esp)
	jmp	.L4
.L5:
	movl	$work_mutex, (%esp)
	call	pthread_mutex_lock
	movl	num, %eax
	addl	$1, %eax
	movl	%eax, num
	movl	$work_mutex, (%esp)
	call	pthread_mutex_unlock
	addl	$1, 36(%esp)
.L4:
	movl	36(%esp), %edx
	movl	$20000000, %eax
	cmpl	%eax, %edx
	jb	.L5
	movl	$.LC2, (%esp)
	call	puts
	movl	28(%esp), %eax
	leal	32(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	pthread_join
	movl	%eax, 44(%esp)
	movl	num, %eax
	movl	%eax, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	cmpl	$0, 44(%esp)
	je	.L6
	movl	$.LC4, (%esp)
	call	perror
	movl	$1, (%esp)
	call	exit
.L6:
	movl	$.LC5, (%esp)
	call	puts
	movl	$0, (%esp)
	call	exit
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.globl	thread_function
	.type	thread_function, @function
thread_function:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	movl	$0, -16(%ebp)
	jmp	.L8
.L9:
	movl	$work_mutex, (%esp)
	call	pthread_mutex_lock
	movl	num, %eax
	addl	$1, %eax
	movl	%eax, num
	movl	$work_mutex, (%esp)
	call	pthread_mutex_unlock
	addl	$1, -16(%ebp)
.L8:
	movl	-16(%ebp), %edx
	movl	$20000000, %eax
	cmpl	%eax, %edx
	jb	.L9
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	thread_function, .-thread_function
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
