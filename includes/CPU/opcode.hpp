#ifdef OPCODES8080_H_
#define  OPCODES8080_H_

#define OP_NOP          0x00
#define OP_LXI_B        0x01
#define OP_STAX_B       0x02
#define OP_INX_B        0x03
#define OP_INR_B        0x04
#define OP_DCR_B        0x05
#define OP_MVI_B        0x06
#define OP_RLC          0x07
#define OP_UNDEFINED_08 0x08
#define OP_DAD_B        0x09
#define OP_LDAX_B       0x0A
#define OP_DCX_B        0x0B
#define OP_INR_C        0x0C
#define OP_DCR_C        0x0D
#define OP_MVI_C        0x0E
#define OP_RRC          0x0F

#define OP_UNDEFINED_10 0x10
#define OP_LXI_D        0x11
#define OP_STAX_D       0x12
#define OP_INX_D        0x13
#define OP_INR_D        0x14
#define OP_DCR_D        0x15
#define OP_MVI_D        0x16
#define OP_RAL          0x17
#define OP_UNDEFINED_18 0x18
#define OP_DAD_D        0x19
#define OP_LDAX_D       0x1A
#define OP_DCX_D        0x1B
#define OP_INR_E        0x1C
#define OP_DCR_E        0x1D
#define OP_MVI_E        0x1E
#define OP_RAR          0x1F

#define OP_UNDEFINED_20 0x20
#define OP_LXI_H        0x21
#define OP_SHLD         0x22
#define OP_INX_H        0x23
#define OP_INR_H        0x24
#define OP_DCR_H        0x25
#define OP_MVI_H        0x26
#define OP_DAA          0x27
#define OP_UNDEFINED_28 0x28
#define OP_DAD_H        0x29
#define OP_LHLD         0x2A
#define OP_DCX_H        0x2B
#define OP_INR_L        0x2C
#define OP_DCR_L        0x2D
#define OP_MVI_L        0x2E
#define OP_CMA          0x2F

#define OP_UNDEFINED_30 0x30
#define OP_LXI_SP       0x31
#define OP_STA          0x32
#define OP_INX_SP       0x33
#define OP_INR_M        0x34
#define OP_DCR_M        0x35
#define OP_MVI_M        0x36
#define OP_STC          0x37
#define OP_UNDEFINED_38 0x38
#define OP_DAD_SP       0x39
#define OP_LDA          0x3A
#define OP_DCX_SP       0x3B
#define OP_INR_A        0x3C
#define OP_DCR_A        0x3D
#define OP_MVI_A        0x3E
#define OP_CMC          0x3F

#define OP_MOV_B_B    0x40
#define OP_MOV_B_C    0x41
#define OP_MOV_B_D    0x42
#define OP_MOV_B_E    0x43
#define OP_MOV_B_H    0x44
#define OP_MOV_B_L    0x45
#define OP_MOV_B_M    0x46
#define OP_MOV_B_A    0x47

#define OP_MOV_C_B    0x48
#define OP_MOV_C_C    0x49
#define OP_MOV_C_D    0x4A
#define OP_MOV_C_E    0x4B
#define OP_MOV_C_H    0x4C
#define OP_MOV_C_L    0x4D
#define OP_MOV_C_M    0x4E
#define OP_MOV_C_A    0x4F

#define OP_MOV_D_B    0x50
#define OP_MOV_D_C    0x51
#define OP_MOV_D_D    0x52
#define OP_MOV_D_E    0x53
#define OP_MOV_D_H    0x54
#define OP_MOV_D_L    0x55
#define OP_MOV_D_M    0x56
#define OP_MOV_D_A    0x57

#define OP_MOV_E_B    0x58
#define OP_MOV_E_C    0x59
#define OP_MOV_E_D    0x5A
#define OP_MOV_E_E    0x5B
#define OP_MOV_E_H    0x5C
#define OP_MOV_E_L    0x5D
#define OP_MOV_E_M    0x5E
#define OP_MOV_E_A    0x5F

#define OP_MOV_H_B    0x60
#define OP_MOV_H_C    0x61
#define OP_MOV_H_D    0x62
#define OP_MOV_H_E    0x63
#define OP_MOV_H_H    0x64
#define OP_MOV_H_L    0x65
#define OP_MOV_H_M    0x66
#define OP_MOV_H_A    0x67

#define OP_MOV_L_B    0x68
#define OP_MOV_L_C    0x69
#define OP_MOV_L_D    0x6A
#define OP_MOV_L_E    0x6B
#define OP_MOV_L_H    0x6C
#define OP_MOV_L_L    0x6D
#define OP_MOV_L_M    0x6E
#define OP_MOV_L_A    0x6F

#define OP_MOV_M_B    0x70
#define OP_MOV_M_C    0x71
#define OP_MOV_M_D    0x72
#define OP_MOV_M_E    0x73
#define OP_MOV_M_H    0x74
#define OP_MOV_M_L    0x75
#define OP_HLT        0x76
#define OP_MOV_M_A    0x77

#define OP_MOV_A_B    0x78
#define OP_MOV_A_C    0x79
#define OP_MOV_A_D    0x7A
#define OP_MOV_A_E    0x7B
#define OP_MOV_A_H    0x7C
#define OP_MOV_A_L    0x7D
#define OP_MOV_A_M    0x7E
#define OP_MOV_A_A    0x7F

/* 0x80 - 0x87 : ADD */
#define OP_ADD_B      0x80
#define OP_ADD_C      0x81
#define OP_ADD_D      0x82
#define OP_ADD_E      0x83
#define OP_ADD_H      0x84
#define OP_ADD_L      0x85
#define OP_ADD_M      0x86
#define OP_ADD_A      0x87

/* 0x88 - 0x8F : ADC */
#define OP_ADC_B      0x88
#define OP_ADC_C      0x89
#define OP_ADC_D      0x8A
#define OP_ADC_E      0x8B
#define OP_ADC_H      0x8C
#define OP_ADC_L      0x8D
#define OP_ADC_M      0x8E
#define OP_ADC_A      0x8F

/* 0x90 - 0x97 : SUB */
#define OP_SUB_B      0x90
#define OP_SUB_C      0x91
#define OP_SUB_D      0x92
#define OP_SUB_E      0x93
#define OP_SUB_H      0x94
#define OP_SUB_L      0x95
#define OP_SUB_M      0x96
#define OP_SUB_A      0x97

/* 0x98 - 0x9F : SBB */
#define OP_SBB_B      0x98
#define OP_SBB_C      0x99
#define OP_SBB_D      0x9A
#define OP_SBB_E      0x9B
#define OP_SBB_H      0x9C
#define OP_SBB_L      0x9D
#define OP_SBB_M      0x9E
#define OP_SBB_A      0x9F

/* 0xA0 - 0xA7 : ANA */
#define OP_ANA_B      0xA0
#define OP_ANA_C      0xA1
#define OP_ANA_D      0xA2
#define OP_ANA_E      0xA3
#define OP_ANA_H      0xA4
#define OP_ANA_L      0xA5
#define OP_ANA_M      0xA6
#define OP_ANA_A      0xA7

/* 0xA8 - 0xAF : XRA */
#define OP_XRA_B      0xA8
#define OP_XRA_C      0xA9
#define OP_XRA_D      0xAA
#define OP_XRA_E      0xAB
#define OP_XRA_H      0xAC
#define OP_XRA_L      0xAD
#define OP_XRA_M      0xAE
#define OP_XRA_A      0xAF

/* 0xB0 - 0xB7 : ORA */
#define OP_ORA_B      0xB0
#define OP_ORA_C      0xB1
#define OP_ORA_D      0xB2
#define OP_ORA_E      0xB3
#define OP_ORA_H      0xB4
#define OP_ORA_L      0xB5
#define OP_ORA_M      0xB6
#define OP_ORA_A      0xB7

/* 0xB8 - 0xBF : CMP */
#define OP_CMP_B      0xB8
#define OP_CMP_C      0xB9
#define OP_CMP_D      0xBA
#define OP_CMP_E      0xBB
#define OP_CMP_H      0xBC
#define OP_CMP_L      0xBD
#define OP_CMP_M      0xBE
#define OP_CMP_A      0xBF

/* 0xC0 - 0xCF */
#define OP_RNZ          0xC0
#define OP_POP_B        0xC1
#define OP_JNZ          0xC2
#define OP_JMP          0xC3
#define OP_CNZ          0xC4
#define OP_PUSH_B       0xC5
#define OP_ADI          0xC6
#define OP_RST_0        0xC7
#define OP_RZ           0xC8
#define OP_RET          0xC9
#define OP_JZ           0xCA
#define OP_UNDEFINED_CB 0xCB
#define OP_CZ           0xCC
#define OP_CALL         0xCD
#define OP_ACI          0xCE
#define OP_RST_1        0xCF

/* 0xD0 - 0xDF */
#define OP_RNC          0xD0
#define OP_POP_D        0xD1
#define OP_JNC          0xD2
#define OP_OUT          0xD3
#define OP_CNC          0xD4
#define OP_PUSH_D       0xD5
#define OP_SUI          0xD6
#define OP_RST_2        0xD7
#define OP_RC           0xD8
#define OP_UNDEFINED_D9 0xD9
#define OP_JC           0xDA
#define OP_IN           0xDB
#define OP_CC           0xDC
#define OP_UNDEFINED_DD 0xDD
#define OP_SBI          0xDE
#define OP_RST_3        0xDF

/* 0xE0 - 0xEF */
#define OP_RPO          0xE0
#define OP_POP_H        0xE1
#define OP_JPO          0xE2
#define OP_XTHL         0xE3
#define OP_CPO          0xE4
#define OP_PUSH_H       0xE5
#define OP_ANI          0xE6
#define OP_RST_4        0xE7
#define OP_RPE          0xE8
#define OP_PCHL         0xE9
#define OP_JPE          0xEA
#define OP_XCHG         0xEB
#define OP_CPE          0xEC
#define OP_UNDEFINED_ED 0xED
#define OP_XRI          0xEE
#define OP_RST_5        0xEF

/* 0xF0 - 0xFF */
#define OP_RP           0xF0
#define OP_POP_PSW      0xF1
#define OP_JP           0xF2
#define OP_DI           0xF3
#define OP_CP           0xF4
#define OP_PUSH_PSW     0xF5
#define OP_ORI          0xF6
#define OP_RST_6        0xF7
#define OP_RM           0xF8
#define OP_SPHL         0xF9
#define OP_JM           0xFA
#define OP_EI           0xFB
#define OP_CM           0xFC
#define OP_UNDEFINED_FD 0xFD
#define OP_CPI          0xFE
#define OP_RST_7        0xFF

#endif