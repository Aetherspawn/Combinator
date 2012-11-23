#pragma once
#include <stdint.h>

typedef uint32_t x86Register;

typedef enum
{
	ES = 1 << 0,
	CS = 1 << 1,
	SS = 1 << 2,
	DS = 1 << 3,
	FS = 1 << 4,
	GS = 1 << 5,
}
x86SegmentRegister;

typedef enum
{
	CR0 = 1 << 6,
	CR1 = 1 << 7,
	CR2 = 1 << 8,
	CR3 = 1 << 9,
	CR4 = 1 << 10,
	CR5 = 1 << 11,
	CR6 = 1 << 12,
	CR7 = 1 << 13,
}
x86ControlRegister;
		
typedef enum
{
	EAX = 1 << 14,
	EBX = 1 << 15,
	ECX = 1 << 16,
	EDX = 1 << 17,
	ESP = 1 << 18,
	EBP = 1 << 19,
	ESI = 1 << 20,
	EDI = 1 << 21,
}
x86StandardRegister;

typedef enum
{
	ST0 = 1 << 22,
	ST1 = 1 << 23,
	ST2 = 1 << 24,
	ST3 = 1 << 25,
	ST4 = 1 << 26,
	ST5 = 1 << 27,
	ST6 = 1 << 28,
	ST7 = 1 << 29,
}
x86FloatRegister;

typedef enum
{
	SegmentRegister = ES | CS | SS | DS | FS | GS,
	ControlRegister = CR0 | CR1 | CR2 | CR3 | CR4 | CR5 | CR6 | CR7,
	StandardRegister = EAX | EBX | ECX | EDX | ESP | EBP | ESI | EDI,
	FloatRegister = ST0 | ST1 | ST2 |ST3 | ST4 | ST5 | ST6 | ST7,
}
x86RegisterType;