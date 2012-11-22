// Todo: do a final check to see correctness of partial instructions

enum x86Instruction
{
	AAA, // ASCII Adjust After Addition
	AAD, // ASCII Adjust AX Before Division
	AAM, // ASCII Adjust AX After Multiply
	AAS, // ASCII Adjust AL After Subtraction
	ADC, // Add with Carry
	ADD, // Add
	ADDPD, // Packed Double-Precision Floating-Point Add
	ADDPS, // Packed Single-Precision Floating-Point Add
	ADDSD, // Scalar Double-Precision Floating-Point Add
	ADDSUBPD, // Packed Double-FP Add/Subtract
	ADDSUBPS, // Packed Single-FP Add/Subtract
	ADDSS, // Scalar Single-Precision Floating-Point Add
	AND, // Logical AND
	ANDNPD, // Bitwise Logical AND NOT of Packed Double-Precision Floating-Point Values
	ANDNPS, // Bitwise Logical And Not For Single-FP
	ANDPD, // Bitwise Logical AND of Packed Double-Precision Floating-Point Values
	ANDPS, // Bitwise Logical AND of Packed Single-Precision Floating-Point Values
	ARPL, // Adjust RPL Field of Segment Selector

	BOUND, // Check Array Index Against Bounds
	BSF, // Bit Scan Forward
	BSR, // Bit Scan Reverse
	BSWAP, // Byte Swap
	BT, // Bit Test
	BTC, // Bit Test and Complement
	BTR, // Bit Test and Reset
	BTS, // Bit Test and Set

	CALL, // Call Procedure
	CBW, // Convert Word to Doubleword
	CDQ, // Convert Double to Quad
	CLC, // Clear Carry Flag
	CLD, // Clear Direction Flag
	CLFLUSH, // Cache Line Flush
	CLI, // Clear Interrupt Flag
	CLTS, // Clear Task-Switched Flag in CR0
	CMC, // Complement Carry Flag
	CMOVCC, // Conditional Move
	CMP, // Compare Two Operands
	CMPPD, // Compare Packed Double-Precision Floating-Point Values
	CMPPS, // Compare Packed Single-Precision Floating-Point Values
	CMPS, // Compare String Operands
	CMPSD, // Compare Scalar Double-Precision Floating-Point Value
	CMPSS, // Compare Scalar Single-Precision Floating-Point Values
	CMPXCHG, // Compare and Exchange
	CMPXCHG8B, // Compare and Exchange 8-Byte
	COMISD, // Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
	COMISS, // Compare Scalar Ordered Single-Precision Floating-Point Values and Set EFLAGS
	CPUID, // CPU Identification
	CVTDQ2PD, // Convert Packed Signed Doubleword Integers to Packed Double-Precision Floating-Point Values
	CVTDQ2PS, // Convert Packed Signed Doubleword Integers to Packed Single-Precision Floating-Point Values
	CVTPD2DQ, // Convert Packed Double-Precision Floating-Point Values to Packed Doubleword Integers
	CVTPD2PI, // Convert Packed Double-Precision Floating-Point to Packed Doubleword Integers
	CVTPD2PS, // Covert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
	CVTPI2PD, // Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
	CVTPI2PS, // Convert Packed Doubleword Integers to Packed Single-Precision Floating-Point Values
	CVTPS2DQ, // Convert Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
	CVTPS2PD, // Covert Packed Single-Precision Floating-Point Values to Packed Double-Precision Floating-Point Values
	CVTPS2PI, // Convert Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
	CVTSD2SI, // Convert Scalar Double-Precision Floating-Point Value to Doubleword Integer with Truncation
	CVTSD2SS, // Convert Scalar Double-Precision Floating-Point Value to Scalar Single-Precision Floating-Point Value
	CVTSI2SD, // Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
	CVTSI2SS, // Convert Doubleword Integer to Scalar Single-Precision Floating-Point Value
	CVTSS2SD, // Convert Scalar Single-Precision Floating-Point Value to Scalar Double-Precision Floating-Point Value
	CVTSS2SI, // Convert Scalar Single-Precision Floating-Point Value to Doubleword Integer
	CVTTPD2DQ, // Convert Packed Double-Precision Floating-Point Values to Packed Doubleword Integers with Truncation
	CVTTPD2PI, // Convert Packed Double-Precision Floating-Point Values to Packed Doubleword Integers with Truncation
	CVTTPS2DQ, // Convert Packed Single-Precision Floating-Point Values to Packed Doubleword Integers with Truncation
	CVTTPS2PI, // Convert Packed Single-Precision Floating-Point Values to Packed Doubleword Integers with Truncation
	CVTTSD2SI, // Convert Scalar Double-Precision Floating-Point Value to Signed Doubleword Integer with Truncation
	CVTTSS2SI, // Convert Scalar Single-Precision Floating-Point Value to Doubleword Integer with Truncation
	CWD, // Convert Word to Doubleword

	DAA, // Decimal Adjust AL after Addition
	DAS, // Decimal Adjust AL after Subtraction
	DEC, // Decrement by 1
	DIV, // Unsigned Divide
	DIVPD, // Packed Double-Precision Floating-Point Divide
	DIVPS, // Packed Single-Precision Floating-Point Divide
	DIVSD, // Scalar Double-Precision Floating-Point Divide
	DIVSS, // Scalar Single-Precision Floating-Point Divide

	EMMS, // Empty MMX Technology State
	ENTER, // Make Stack Frame for Procedure Parameters

	F2XM1, // Compute 2x-1
	FABS, // Absolute Value
	FADD, // Add
	FADDP, // Add
	FIADD, // Add
	FBLD, // Load Binary Coded Decimal
	FBSTP, // Store BCD Integer and Pop
	FCHS, // Change Sign
	FCLEX, // Clear Exceptions
	FNCLEX, // Clear Exceptions (Even When Present)
	FCMOVCC, // Floating-Point Conditional Move
	FCOM, // Compare Real
	FCOMP, // Compare Real
	FCOMPP, // Compare Real
	FCOMI, // Compare Real and Set EFLAGS
	FCOMIP, // Compare Real and Set EFLAGS
	FUCOMI, // Compare Real and Set EFLAGS
	FUCOMIP, // Compare Real and Set EFLAGS
	FCOS, // Cosine
	FDECSTP, // Decrement Stack-Top Pointer
	FDIV, // Divide
	FDIVP, // Divide
	FIDIV, // Divide
	FDIVR, // Reverse Divide
	FDIVRP, // Reverse Divide
	FIDIVR, // Reverse Divide
	FFREE, // Free Floating-Point Register
	FICOM, // Compare Integer
	FICOMP, // Compare Integer
	FISTTP, // Store Integer with Truncation
	FILD, // Load Integer
	FINCSTP, // Increment Stack-Top Pointer
	FINIT, // Initialize Floating-Point Unit
	FNINIT, // Initialize Floating-Point Unit
	FIST, // Store Integer
	FISTP, // Store Integer
	FLD, // Load Real
	FLD1, // Push +1.0 onto the FPU register stack
	FLDL2T, // Push log2(10) onto the FPU register stack
	FLDL2E, // Push log2(e) onto the FPU register stack
	FLDPI, // Push PI onto the FPU register stack
	FLDLG2, // Push log10(2) onto the FPU register stack
	FLDLN2, // Push loge(2) onto the FPU register stack
	FLDZ, // Push +0.0 onto the FPU register stack
	FLDCW, // Load x87 FPU Control Word
	FLDENV, // Load x87 FPU Environment
	FMUL, // Multiply
	FMULP, // Multiply
	FIMUL, // Multiply
	FNOP, // No Operation
	FPATAN, // Partial Arctangent
	FPREM, // Partial Remainder
	FPREM1, // Partial Remainder
	FPTAN, // Partial Tangent
	FRNDINT, // Round to Integer
	FRSTOR, // Restore x87 FPU State
	FSAVE, // Store x87 FPU State
	FNSAVE,
	FSCALE, // Scale
	FSIN, // Sine
	FSINCOS, // Sine and Cosine
	FSQRT, // Square Root
	FST, // Store Real
	FSTP,
	FSTCW, // Store x87 FPU Control Word
	FNSTCW,
	FSTENV, // Store x87 FPU Environment
	FNSTENV,
	FSTSW, // Store x87 FPU Status Word
	FNSTSW,
	FSUB, // Subtract
	FSUBP,
	FISUB,
	FSUBR, // Reverse Subtract
	FSUBRP,
	FISUBR,
	FTST, // Test
	FUCOM, // Unordered Compare Real
	FUCOMP,
	FUCOMPP,
	FWAIT, // Wait
	FXAM, // Examine
	FXCH, // Exchange Register Contents
	FXRSTOR, // Restore x87 FPU, MMX Technology, Streaming SIMD Extensions, and Streaming SIMD Extensions 2 State
	FXSAVE, // Save x87 FPU, MMX Technology, Streaming SIMD Extensions, and Streaming SIMD Extensions 2 State
	FXTRACT, // Extract Exponent and Significand
	FYL2X, // Compute y * log2x
	FYL2XP1, // Compute y * log2(x +1)

	HADDPD, // Packed Double-FP Horizontal Add
	HADDPS, // Packed Single-FP Horizontal Add
	HLT, // Halt
	HSUBPD, // Packed Double-FP Horizontal Subtract
	HSUBPS, // Packed Single-FP Horizontal Subtract

	IDIV, // Signed Divide
	IMUL, // Signed Multiplication
	IN, // Input from Port
	INC, // Increment by 1
	INS, // Input from Port to String
	INSB,
	INSW,
	INSD,
	INT, // Call to Interrupt Procedure
	INTO,
	INVD, // Invalidate Internal Caches
	INLPG, // Invalidate TLB Entry
	IRET, // Interrupt Return
	IRETD,

	JCC, // Conditional Jump
	JMP, // Jump

	LAHF, // Load Status Flags into AH Register
	LAR, // Load Access Rights Byte
	LDDQU, // Load Unaligned Integer 128 bits
	LDMXCSR, // Load Streaming SIMD Extension Control/Status
	LDS, // Load Far Pointer
	LES,
	LFS,
	LGS,
	LSS,
	LEA, // Load Effective Address
	LEAVE, // High Level Procedure Exit
	LES, // Load Full Pointer
	LFENCE, // Load Fence
	LFS, // Load Full Pointer
	LGDT, // Load Global/Interrupt Descriptor Table Register
	LGS, // Load Full Pointer
	LIDT, // Load Interrupt Descriptor Table Register
	LLDT, // Load Local Descriptor Table Register
	LMSW, // Load Machine Status Word
	LOCK, // Assert LOCK# Signal Prefix
	LODS, // Load String
	LODSB,
	LODSW,
	LODSD,
	LOOP, // Loop According to ECX Counter
	LOOPCC,
	LSL, // Load Segment Limit
	LSS, // Load Full Pointer
	LTR, // Load Task Register

	MASKMOVDQU, // Mask Move of Double Quadword Unaligned
	MASKMOVQ, // Mask Move of Quadword
	MAXPD, // Maximum Packed Double-Precision Floating-Point Values
	MAXPS, // Maxiumum Packed Single-Precision Floating-Point Values
	MAXSD, // Maximum Scalar Double-Precision Floating-Point Value
	MAXSS, // Maximum Scalar Single-Precision Floating-Point Value
	MFENCE, // Memory Fence
	MINPD, // Packed Double-Precision Floating-Point Minimum
	MINPS, // Minimum Packed Single-Precision Floating-Point Values
	MINSD, // Minimum Scalar Double-Precision Floating-Point Value
	MINSS, // Minimum Scalar Double-Precision Floating-Point Value
	MONITOR, // Setup Monitor Address
	MOV, // Move to/from Register
	MOVAPD, // Move Aligned Packed Double-Precision Floating-Point Values
	MOVAPS, // Move Aligned Packed Single-Precision Floating-Point Values
	MOVD, // Move Doubleword
	MOVDDUP, // Move One Double-FP and Duplicate
	MOVDQ2Q, // Move Quadword
	MOVDQA, // Move Aligned Double Quadword
	MOVDQU, // Move Unaligned Double Quadword
	MOVHLPS, // Move Packed Single-Precision Floating-Point Values High to Low
	MOVHPD, // Move High Packed Double-Precision Floating-Point Value
	MOVHPS, // Move High Packed Single-Precision Floating-Point Values
	MOVLHPS, // Move Packed Single-Precision Floating-Point Values Low to High
	MOVLPD, // Move Low Packed Double-Precision Floating-Point Value
	MOVLPS, // Move Low Packed Single-Precision Floating-Point Values
	MOVMSKPD, // Extract Packed Double-Precision Floating-Point Sign Mask
	MOVMSKPS, // Extract Packed Double-Precision Floating-Point Sign Mask
	MOVNTDQ, // Move Double Quadword Non-Temporal
	MOVNTI, // Move Doubleword Non-Temporal
	MOVNTPD, // Move Packed Double-Precision Floating-Point Values Non-Temporal
	MOVNTPS, // Move Aligned Four Packed Single-FP Non Temporal
	MOVNTQ, // Move Quadword Non-Temporal
	MOVQ, // Move Quadword
	MOVQ2DQ, // Move Quadword
	MOVS, // Move Data from String to String
	MOVSB,
	MOVSW,
	MOVSD, // Move Scalar Double-Precision Floating-Point Value
	MOVSHDUP, // Move Packed Single-FP High and Duplicate
	MOVSLDUP, // Move Packed Single-FP Low and Duplicate
	MOVSS, // Move Scalar Single--Precision Floating-Point Values
	MOVSX, // Move with Sign-Extension
	MOVUPD, // Move Unaligned Packed Double-Precision Floating-Point Values
	MOVUPS, // Move Unaligned Packed Single-Precision Floating-Point Values
	MOVZX, // Move with Zero-Extend
	MUL, // Unsigned Multiply
	MULPD, // Packed Double-Precision Floating-Point Multiply
	MULPS, // Packed Single-Precision Floating-Point Multiply
	MULSD, // Scalar Double-Precision Floating-Point Multiply
	MULSS, // Scalar Single-FP Multiply
	MWAIT, // Monitor Wait

	NEG, // Two's Complement Negation
	NOP, // No Operation
	NOT, // One's Complement Negation

	OR, // Logical Inclusive OR
	ORPD, // Bitwise Logical OR of Double-Precision Floating-Point Values
	ORPS, // Bitwise Logical OR of Single-Precision Floating-Point Values
	OUT, // Output to Port
	OUTS, // Output String to Port
	OUTSB,
	OUTSW,
	OUTSD,

	PACKSSWB, // Pack with Signed Saturation
	PACKSSDW,
	PACKUSWB, // Pack with Unsigned Saturation
	PADDB, // Packed Add
	PADDW,
	PADDD,
	PADDQ, // Packed Quadword Add
	PADDSB, // Packed Add with Saturation
	PADDSW,
	PADDUSB, // Packed Add Unsigned with Saturation
	PADDUSW,
	PAND, // Logical AND
	PANDN, // Logical AND NOT
	PAUSE, // Pause For Preset Amount of Time
	PAVGB, // Packed Average
	PAVGW,
	PCMPEQB, // Packed Compare for Equal
	PCMPEQW,
	PCMPEQD,
	PCMPGTB, // Packed Compare for Greater Than
	PCMPGTW,
	PCMPGTD,
	PEXTRW, // Extract Word
	PINSRW, // Insert Word
	PMADDWD, // Packed Multiply and Add
	PMAXSW, // Packed Signed Integer Word Maximum
	PMAXUB, // Packed Unsigned Integer Byte Maximum
	PMINSW, // Packed Signed Integer Word Minimum
	PMINUB, // Packed Unsigned Integer Byte Minimum
	PMOVMSKB, // Move Byte Mask to General-Purpose Register
	PMULHUW, // Packed Multiply High Unsigned
	PMULHW, // Packed Multiply High Signed
	PMULLW, // Packed Multiply Low Signed
	PMULUDQ, // Multiply Doubleword Unsigned
	POP, // Pop a Value from the Stack
	POPA,
	POPAD, // Pop All General-Purpose Registers
	POPF,
	POPFD, // Pop Stack into EFLAGS Register
	POR, // Bitwise Logical OR
	PREFETCHH, // Prefetch Data Into Caches
	PSADBW, // Packed Sum of Absolute Differences
	PSHUFD, // Packed Shuffle Doublewords
	PSHUFHW, // Packed Shuffle High Words
	PSHUFLW, // Packed Shuffle Low Words
	PSHUFW, // Packed Shuffle Words
	PSLLDQ, // Packed Shift Left Logical Double Quadword
	PSLLW, // Packed Shift Left Logical
	PSLLD,
	PSLLQ,
	PSRAW, // Packed Shift Right Arithmetic
	PSRAD,
	PSRLDQ, // Packed Shift Right Logical Double Quadword
	PSRLW, // Packed Shift Right Logical
	PSRLD,
	PSRLQ,
	PSUBB, // Packed Subtract
	PSUBW,
	PSUBD,
	PSUBQ, // Packed Subtract Quadword
	PSUBSB, // Packed Subtract with Saturation
	PSUBSW,
	PSUBUSB, // Packed Subtract Unsigned with Saturation
	PSUBUSW,
	PUNPCKHBW, // Unpack High Packed Data
	PUNPCKHWD,
	PUNPCKHDQ,
	PUNPCKHQDQ,
	PUNPCKLBW, // Unpack Low Packed Data
	PUNPCKLWD,
	PUNPCKLDQ,
	PUNPCKLQDQ,
	PUSH, // Push Word or Doubleword Onto the Stack
	PUSHA,
	PUSHAD, // Push All General-Purpose Registers
	PUSHF,
	PUSHFD, // Push EFLAGS Register onto the Stack
	PXOR, // Logical Exclusive OR

	RCL, // Rotate Left
	RCR, // Rotate Right
	ROL, // Rotate Left n Times
	ROR, // Rotate Right n Times
	RCPPS, // Packed Single-Precision Floating-Point Reciprocal
	RCPSS, // Scalar Single-Precision Floating-Point Reciprocal
	RDMSR, // Read from Model Specific Register
	RDPMC, // Read Performance-Monitoring Counters
	RDTSC, // Read Time-Stamp Counter
	REP, // Repeat String Operation Prefix
	REPE, // Repeat String Operation Prefix
	REPZ, // Repeat String Operation Prefix
	REPNE, // Repeat String Operation Prefix
	REPNZ, // Repeat String Operation Prefix
	RET, // Return from Procedure
	RSM, // Resume from System Management Mode
	RSQRTPS, // Packed Single-Precision Floating-Point Square Root Reciprocal
	RSQRTSS, // Scalar Single-Precision Floating-Point Square Root Reciprocal

	SAHF, // Store AH into Flags
	SAL, // Multiply
	SAR, // Signed Divide
	SHL, // Multiply
	SHR, // Unsinged Divide
	SBB, // Integer Subtraction with Borrow
	SCAS, // Scan String
	SCASB, // Scan String
	SCASW, // Scan String
	SCASD, // Scan String
	SETCC, // Set Byte on Condition
	SFENCE, // Store Fence
	SGDT, // Store Global Descriptor Table Register
	SIDT, // Store Interrupt Descriptor Table Register
	SHLD, // Double Precision Shift Left
	SHRD, // Double Precision Shift Right
	SHUFPD, // Shuffle Double-Precision Floating-Point Values
	SHUFPS, // Shuffle Single-Precision Floating-Point Values
	SLDT, // Store Local Descriptor Table Register
	SMSW, // Store Machine Status Word
	SQRTPD, // Packed Double-Precision Floating-Point Square Root
	SQRTPS, // Packed Single-Precision Floating-Point Square Root
	SQRTSD, // Scalar Double-Precision Floating-Point Square Root
	SQRTSS, // Scalar Single-Precision Floating-Point Square Root
	STC, // Set Carry Flag
	STD, // Set Carry Flag
	STI, // Set Interrupt Flag
	STOS, // Store String
	STOSB, // Store String
	STOSW, // Store String
	STOSD, // Store String
	STR, // Store Task Register
	SUB, // Subtract
	SUBPD, // Packed Double-Precision Floating-Point Subtract
	SUBPS, // Packed Single-Precision Floating-Point Subtract
	SUBSD, // Scalar Double-Precision Floating-Point Subtract
	SUBSS, // Scalar Single-FP Subtract
	SYSENTER, // Fast Transition to System Call Entry Point
	SYSEXIT, // Fast Transition from System Call Entry Point

	TEST, // Logical Compare

	UCOMISD, // Unordered Compare Scalar Double-Precision Floating-Point Values and Set EFLAGS
	UCOMISS, // Unordered Compare Scalar Single-Precision Floating-Point Values and Set EFLAGS
	UD2, // Undefined Instruction
	UNPCKHPD, // Unpack High Packed Double-Precision Floating-Point Values
	UNPCKHPS, // Unpack High Packed Single-Precision Floating-Point Values
	UNPCKLPD, // Unpack Low Packed Double-Precision Floating-Point Values
	UNPCKLPS, // Unpack Low Packed Single-Precision Floating-Point Values

	VERR, // Verify a Segment for Reading or Writing
	VERW, // Verify a Segment for Reading or Writing

	WAIT, // Wait
	WBINVD, // Write Back and Invalidate Cache
	WRMSR, // Write to Model Specific Register

	XADD, // Exchange and Add
	XCHG, // Exchange Register/Memory with Register
	XLAT, // Table Look-up Translation
	XLATB, // Table Look-up Translation
	XOR, // Logical Exclusive OR
	XORPD, // Bitwise Logical XOR for Double-Precision Floating-Point Values
	XORPS, // Bitwise Logical XOR for Single-Precision Floating-Point Values
};