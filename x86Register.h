#pragma once

typedef enum
{
	ES,
	CS,
	SS,
	DS,
	FS,
	GS,
}
x86SegmentRegister;

typedef enum
{
	DR0 = GS + 1,
	DR1,
	DR2,
	DR3,
	DR4,
	DR5,
	DR6,
	DR7,
}
x86DebugRegister;

typedef enum
{
	CR0 = DR7 + 1,
	CR1,
	CR2,
	CR3,
	CR4,
	CR5,
	CR6,
	CR7,
}
x86ControlRegister;
		
typedef enum
{
	EAX = CR7 + 1,
	EBX,
	ECX,
	EDX,
	ESP,
	EBP,
	ESI,
	EDI,
}
x86StandardRegister;

typedef enum
{
	ST0 = EDI + 1,
	ST1,
	ST2,
	ST3,
	ST4,
	ST5,
	ST6,
	ST7,
}
x86FloatRegister;

typedef enum
{
	SegmentRegister = ST7 + 1,
	DebugRegister,
	ControlRegister,
	StandardRegister,
	FloatRegister,
}
x86RegisterType;