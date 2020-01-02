	.file	"mstore.c"
	.intel_syntax noprefix
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.globl	multstore
	.def	multstore;	.scl	2;	.type	32;	.endef
	.seh_proc	multstore
multstore:
.LVL0:
.LFB0:
	.file 1 "mstore.c"
	.loc 1 4 1 view -0
	.cfi_startproc
	.loc 1 4 1 is_stmt 0 view .LVU1
	push	rbx
	.seh_pushreg	rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	sub	rsp, 32
	.seh_stackalloc	32
	.cfi_def_cfa_offset 48
	.seh_endprologue
	mov	rbx, r8
	.loc 1 5 2 is_stmt 1 view .LVU2
	.loc 1 5 11 is_stmt 0 view .LVU3
	call	mult2
.LVL1:
	.loc 1 6 2 is_stmt 1 view .LVU4
	.loc 1 6 8 is_stmt 0 view .LVU5
	mov	DWORD PTR [rbx], eax
	.loc 1 7 1 view .LVU6
	add	rsp, 32
	.cfi_def_cfa_offset 16
	pop	rbx
	.cfi_restore 3
	.cfi_def_cfa_offset 8
.LVL2:
	.loc 1 7 1 view .LVU7
	ret
	.cfi_endproc
.LFE0:
	.seh_endproc
.Letext0:
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x12a
	.word	0x4
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C17 8.1.0 -masm=intel -mtune=core2 -march=nocona -g -Og\0"
	.byte	0xc
	.ascii "mstore.c\0"
	.ascii "E:\\GitHub\\CSAPP\\code\\asm\0"
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.secrel32	.Ldebug_line0
	.uleb128 0x2
	.ascii "multstore\0"
	.byte	0x1
	.byte	0x3
	.byte	0x6
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.long	0x10b
	.uleb128 0x3
	.ascii "x\0"
	.byte	0x1
	.byte	0x3
	.byte	0x15
	.long	0x10b
	.secrel32	.LLST0
	.secrel32	.LVUS0
	.uleb128 0x3
	.ascii "y\0"
	.byte	0x1
	.byte	0x3
	.byte	0x1d
	.long	0x10b
	.secrel32	.LLST1
	.secrel32	.LVUS1
	.uleb128 0x3
	.ascii "dest\0"
	.byte	0x1
	.byte	0x3
	.byte	0x26
	.long	0x117
	.secrel32	.LLST2
	.secrel32	.LVUS2
	.uleb128 0x4
	.ascii "t\0"
	.byte	0x1
	.byte	0x5
	.byte	0x7
	.long	0x10b
	.secrel32	.LLST3
	.secrel32	.LVUS3
	.uleb128 0x5
	.quad	.LVL1
	.long	0x11d
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x3
	.byte	0xf3
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x6
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x3
	.byte	0xf3
	.uleb128 0x1
	.byte	0x51
	.byte	0
	.byte	0
	.uleb128 0x7
	.byte	0x4
	.byte	0x5
	.ascii "long int\0"
	.uleb128 0x8
	.byte	0x8
	.long	0x10b
	.uleb128 0x9
	.ascii "mult2\0"
	.ascii "mult2\0"
	.byte	0x1
	.byte	0x1
	.byte	0x6
	.byte	0
	.section	.debug_abbrev,"dr"
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x1b
	.uleb128 0x8
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x17
	.uleb128 0x2137
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x17
	.uleb128 0x2137
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x4109
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x410a
	.byte	0
	.uleb128 0x2
	.uleb128 0x18
	.uleb128 0x2111
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x6e
	.uleb128 0x8
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"dr"
.Ldebug_loc0:
.LVUS0:
	.uleb128 0
	.uleb128 .LVU4
	.uleb128 .LVU4
	.uleb128 0
.LLST0:
	.quad	.LVL0-.Ltext0
	.quad	.LVL1-1-.Ltext0
	.word	0x1
	.byte	0x52
	.quad	.LVL1-1-.Ltext0
	.quad	.LFE0-.Ltext0
	.word	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x52
	.byte	0x9f
	.quad	0
	.quad	0
.LVUS1:
	.uleb128 0
	.uleb128 .LVU4
	.uleb128 .LVU4
	.uleb128 0
.LLST1:
	.quad	.LVL0-.Ltext0
	.quad	.LVL1-1-.Ltext0
	.word	0x1
	.byte	0x51
	.quad	.LVL1-1-.Ltext0
	.quad	.LFE0-.Ltext0
	.word	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x51
	.byte	0x9f
	.quad	0
	.quad	0
.LVUS2:
	.uleb128 0
	.uleb128 .LVU4
	.uleb128 .LVU4
	.uleb128 .LVU7
	.uleb128 .LVU7
	.uleb128 0
.LLST2:
	.quad	.LVL0-.Ltext0
	.quad	.LVL1-1-.Ltext0
	.word	0x1
	.byte	0x58
	.quad	.LVL1-1-.Ltext0
	.quad	.LVL2-.Ltext0
	.word	0x1
	.byte	0x53
	.quad	.LVL2-.Ltext0
	.quad	.LFE0-.Ltext0
	.word	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x58
	.byte	0x9f
	.quad	0
	.quad	0
.LVUS3:
	.uleb128 .LVU4
	.uleb128 0
.LLST3:
	.quad	.LVL1-.Ltext0
	.quad	.LFE0-.Ltext0
	.word	0x1
	.byte	0x50
	.quad	0
	.quad	0
	.section	.debug_aranges,"dr"
	.long	0x2c
	.word	0x2
	.secrel32	.Ldebug_info0
	.byte	0x8
	.byte	0
	.word	0
	.word	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	mult2;	.scl	2;	.type	32;	.endef
