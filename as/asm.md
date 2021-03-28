# Assembly Language

- AT&T format
- Intel format

IA-32CPU

## register

### normal

%eax
%ebx
%ecx
%edx
	32bit

%ax	accumulator
%bx	base address
%cx	count
%dx	data
	16bit

%ah
%al	
	8bit

### pointer

%eip
%esp
%ebp
	32bit

%bp	base pointer
%sp	stack pointer
%ip	instruction pointer

### index

%esi
%edi
	32bit

%si	source index
%di	destination index

### control

%fr
	16bit
OF
DF
IF

### segment

%cs	code
%ds	data
%ss	stack
%es	extra
%fs
%gs
	16bit


## address

phyiscal = segment * 16 + offset
movx source, destination

movl	32bit
movw	16bit
movb	8bit

mov ax, 18	ax = 18
add ax, bx	ax = bx

jmp 2AE3:3	CS = 2AE3H, IP = 0003H

push %ax
pop %ax
## system call
sys_exit	int


## access address

### register

mov dx, tax_rate	
mov count, cx
mov eax, ebx

### immediately

byte_value db 150
word_value db 300
add byte_value, 65
mov ax, 45H

### direct memory

add byte_value, dl	; add register store position
mov bx, word_value	; add memory to register

### direct offset

byte_table db 14, 15, 22, 25
word_table dw 134, 345, 564, 123

### indirect memory

my_table times 10 dw 0	; get 10 word, initialize to 0
mov ebx,[my_table]	; my_table address
mov [ebx], 110		; my_table[0] = 110
add ebx, 2		; ebx = ebx + 2
mov [ebx], 123		; my_table[1] = 123

## mov

mov destination, source

mov res, res
mov res, imm_num
mov res, memory
mov mem, imm_num
mov mem, res

type	byte
byte	1
word	2
dword	4
qword	8
tbyte	10

## variable

[variable-name] define-directive initial-value 

command	byte
db	1
dw	2
dd	4
dq	8
dt	10

choice db 'y'
number dw 12345
neg_number dw -12345
big_number dq 123456789
real_number1 dd 1.234
real_number2 dq 123.456


