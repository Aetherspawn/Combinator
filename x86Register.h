enum x86SegmentRegister
{
	SegmentRegister = 1,
	ES,
	CS,
	SS,
	DS,
	FS,
	GS,
};

enum x86DebugRegister
{
	DebugRegister = GS + 1,
	DR0,
	DR1,
	DR2,
	DR3,
	DR4,
	DR5,
	DR6,
	DR7,
};

enum x86ControlRegister
{
	ControlRegister = DR7 + 1,
	CR0,
	CR1,
	CR2,
	CR3,
	CR4,
	CR5,
	CR6,
	CR7,
};
		
enum x86StandardRegister
{
	StandardRegister = CR7 + 1,
	EAX,
	EBX,
	ECX,
	EDX,
	ESP,
	EBP,
	ESI,
	EDI,
};

enum x86FloatRegister
{
	FloatRegister = EDI + 1,
	ST0,
	ST1,
	ST2,
	ST3,
	ST4,
	ST5,
	ST6,
	ST7,
};