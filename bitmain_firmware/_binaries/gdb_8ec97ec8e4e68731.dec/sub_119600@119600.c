void __fastcall sub_119600(int a1, _DWORD *a2, int a3, char *a4, char *a5, int a6)
{
  _DWORD *v6; // r9
  unsigned int v10; // r11
  __int64 v11; // r0
  unsigned int v12; // r6
  char *v13; // r10
  _DWORD *v14; // r3
  int v15; // r6
  char *v16; // r7
  _DWORD *v17; // r1
  unsigned int v18; // r2
  int v19; // r4
  int v20; // r6
  char *v21; // r0
  int v22; // r0
  __int64 v23; // r2
  int *v24; // r0
  int v25; // r0
  int v26; // r0
  char *v27; // r1
  char *v28; // r0
  char *v29; // r0
  char *v30; // r7
  __int64 v31; // r2
  __int64 v32; // kr00_8
  __int64 v33; // r0
  __int64 v34; // r0
  __int64 v35; // r0
  __int64 v36; // r0
  __int64 v37; // r0
  int v38; // r0
  int v39; // r7
  char *v41; // r0
  int v42; // r2
  char *v43; // r4
  __int64 v44; // r0
  int v45; // r4
  unsigned int v46; // r1
  const char *v47; // r0
  int v48; // [sp+10h] [bp-7Ch]
  __int64 v50; // [sp+18h] [bp-74h]
  int v51; // [sp+20h] [bp-6Ch]
  char *v53; // [sp+30h] [bp-5Ch]
  int v54; // [sp+3Ch] [bp-50h]
  int v55; // [sp+4Ch] [bp-40h] BYREF
  unsigned int v56; // [sp+50h] [bp-3Ch] BYREF
  int v57; // [sp+54h] [bp-38h] BYREF
  __int64 v58; // [sp+58h] [bp-34h] BYREF
  void *v59[3]; // [sp+60h] [bp-2Ch] BYREF
  void *ptr; // [sp+6Ch] [bp-20h] BYREF
  char *v61; // [sp+70h] [bp-1Ch]
  char *v62; // [sp+74h] [bp-18h]
  unsigned __int64 v63; // [sp+78h] [bp-14h] BYREF
  int v64; // [sp+80h] [bp-Ch]

  v51 = *(_DWORD *)(a1 + 12);
  memset(v59, 0, sizeof(v59));
  ptr = 0;
  v61 = 0;
  v62 = 0;
  v48 = ((int (__fastcall *)(int))loc_165BB8)(v51);
  v10 = 8 * a3;
  LODWORD(v11) = ((int (__fastcall *)(int))loc_165D78)(v51);
  v12 = a5 - a4;
  v54 = v11;
  v13 = a4;
  if ( a5 == a4 )
  {
    if ( a4 < a5 )
      v6 = (_DWORD *)(a5 - a4);
    *a2 = 1;
    if ( a4 >= a5 )
    {
      v17 = ptr;
      if ( ptr == v61 )
        goto LABEL_18;
      v6 = (_DWORD *)(a5 - a4);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
  if ( v12 > 0x3FFFFFFF )
    goto LABEL_144;
  v6 = sub_9836C(4 * v12);
  v14 = v6;
  do
  {
    --v12;
    *v14++ = -1;
  }
  while ( v12 );
  *a2 = 1;
  if ( a4 < a5 )
  {
LABEL_6:
    v50 = 0;
    v53 = a4;
    do
    {
      v15 = (unsigned __int8)*a4;
      v16 = a4 + 1;
      v6[a4 - v13] = *(_DWORD *)(a1 + 4);
      switch ( v15 )
      {
        case 3:
          v37 = sub_15C250(v16, a3, v48);
          a4 = &v16[a3];
          v58 = v37;
          if ( a5 <= &v16[a3] || (unsigned __int8)v16[a3] != 224 )
          {
            v38 = sub_132388(a6);
            v37 = v58 + (unsigned int)v38;
            v58 = v37;
          }
          sub_C0B5C((char *)a1, v37);
          break;
        case 6:
        case 148:
          if ( v15 == 148 )
          {
            v39 = (unsigned __int8)a4[1];
          }
          else
          {
            ++a4;
            v39 = a3;
          }
          if ( v15 == 148 )
            a4 += 2;
          if ( (unsigned int)(v39 - 1) > 1 && ((v39 - 4) & 0xFFFFFFFB) != 0 )
          {
            v47 = (const char *)sub_322B3C(v15);
            sub_946E0("Unsupported size %d in %s", v39, v47);
          }
          sub_115288(v51, (char *)a1, 8 * v39);
          break;
        case 8:
          v36 = sub_15C250(a4 + 1, 1, v48);
          goto LABEL_85;
        case 9:
          v36 = sub_15C190(a4 + 1, 1, v48);
LABEL_85:
          sub_C0B5C((char *)a1, v36);
          a4 += 2;
          break;
        case 10:
          v35 = sub_15C250(a4 + 1, 2, v48);
          goto LABEL_82;
        case 11:
          v35 = sub_15C190(a4 + 1, 2, v48);
LABEL_82:
          sub_C0B5C((char *)a1, v35);
          a4 += 3;
          break;
        case 12:
          v34 = sub_15C250(a4 + 1, 4, v48);
          goto LABEL_79;
        case 13:
          v34 = sub_15C190(a4 + 1, 4, v48);
LABEL_79:
          sub_C0B5C((char *)a1, v34);
          a4 += 5;
          break;
        case 14:
          v33 = sub_15C250(a4 + 1, 8, v48);
          goto LABEL_76;
        case 15:
          v33 = sub_15C190(a4 + 1, 8, v48);
LABEL_76:
          sub_C0B5C((char *)a1, v33);
          a4 += 9;
          break;
        case 16:
          a4 = sub_11257C(a4 + 1, a5, &v58);
          sub_C0B5C((char *)a1, v58);
          break;
        case 17:
          a4 = sub_112620(a4 + 1, a5, (int *)&v63);
          sub_C0B5C((char *)a1, v63);
          break;
        case 18:
          sub_C09B8((char *)a1, 40);
          goto LABEL_9;
        case 19:
          sub_C09B8((char *)a1, 41);
          goto LABEL_9;
        case 20:
          sub_C09E0((char *)a1, 1u);
          goto LABEL_9;
        case 21:
          v46 = (unsigned __int8)a4[1];
          a4 += 2;
          v63 = (unsigned __int8)v46;
          sub_C09E0((char *)a1, v46);
          break;
        case 22:
          sub_C09B8((char *)a1, 43);
          goto LABEL_9;
        case 23:
          sub_C09B8((char *)a1, 51);
          goto LABEL_9;
        case 25:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 40);
          sub_C0B5C((char *)a1, 0);
          sub_C09B8((char *)a1, 20);
          sub_C09B8((char *)a1, 14);
          v57 = sub_C0AD4(a1, 32);
          sub_C0B5C((char *)a1, 0);
          sub_C09B8((char *)a1, 43);
          sub_C09B8((char *)a1, 3);
          sub_C0B24((_DWORD *)a1, v57, *(_DWORD *)(a1 + 4));
          goto LABEL_9;
        case 26:
          sub_C09B8((char *)a1, 15);
          goto LABEL_9;
        case 27:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C09B8((char *)a1, 5);
          goto LABEL_9;
        case 28:
          goto LABEL_24;
        case 29:
          sub_C09B8((char *)a1, 8);
          goto LABEL_9;
        case 30:
          sub_C09B8((char *)a1, 4);
          goto LABEL_9;
        case 31:
          sub_C0B5C((char *)a1, 0);
          sub_C09B8((char *)a1, 43);
LABEL_24:
          sub_C09B8((char *)a1, 3);
          goto LABEL_9;
        case 32:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 18);
          goto LABEL_9;
        case 33:
          sub_C09B8((char *)a1, 16);
          goto LABEL_9;
        case 34:
          sub_C09B8((char *)a1, 2);
          goto LABEL_9;
        case 35:
          v28 = sub_11257C(a4 + 1, a5, &v58);
          v23 = v58;
          a4 = v28;
          if ( v58 )
            goto LABEL_27;
          break;
        case 36:
          sub_C09B8((char *)a1, 9);
          goto LABEL_9;
        case 37:
          sub_C09B8((char *)a1, 11);
          goto LABEL_9;
        case 38:
          sub_C09B8((char *)a1, 10);
          goto LABEL_9;
        case 39:
          sub_C09B8((char *)a1, 17);
          goto LABEL_9;
        case 40:
          v63 = sub_15C190(a4 + 1, 2, v48);
          a4 += 3;
          sub_C0A74((char *)a1, v10);
          v26 = sub_C0AD4(a1, 32);
          goto LABEL_40;
        case 41:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 19);
          goto LABEL_9;
        case 42:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          goto LABEL_49;
        case 43:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          goto LABEL_47;
        case 44:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
LABEL_49:
          sub_C09B8((char *)a1, 20);
          goto LABEL_45;
        case 45:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
LABEL_47:
          sub_C09B8((char *)a1, 20);
          goto LABEL_9;
        case 46:
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 43);
          sub_C0A68((char *)a1, v10);
          sub_C09B8((char *)a1, 19);
LABEL_45:
          sub_C09B8((char *)a1, 14);
          goto LABEL_9;
        case 47:
          v63 = sub_15C190(a4 + 1, 2, v48);
          a4 += 3;
          v26 = sub_C0AD4(a1, 33);
LABEL_40:
          v57 = v26;
          LODWORD(v58) = &a4[v63] - v13;
          sub_11BF6C(v59, &v58);
          if ( v61 == v62 )
          {
            sub_96B5C((int *)&ptr, v61, &v57);
          }
          else
          {
            v27 = v61 + 4;
            if ( v61 )
              *(_DWORD *)v61 = v57;
            v61 = v27;
          }
          break;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
          sub_C0B5C((char *)a1, v15 - 48);
          goto LABEL_9;
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
          sub_112778((unsigned __int8 *)++a4, (unsigned __int8 *)a5, "DW_OP_regx");
          a2[3] = sub_117648(v51, v15 - 80);
          *a2 = 2;
          break;
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
        case 143:
          a4 = sub_112620(a4 + 1, a5, (int *)&v63);
          v22 = sub_117648(v51, v15 - 112);
          goto LABEL_26;
        case 144:
          a4 = sub_11257C(a4 + 1, a5, &v58);
          sub_112778((unsigned __int8 *)a4, (unsigned __int8 *)a5, "DW_OP_regx");
          a2[3] = sub_117648(v51, v58);
          *a2 = 2;
          break;
        case 145:
          v24 = sub_C2574(*(_DWORD *)(a1 + 16));
          if ( !v24 )
            sub_946E0("No block found for address");
          v25 = sub_C23B0((int)v24);
          if ( !v25 )
            sub_946E0("No function found for block");
          sub_115D30(v25, *(_DWORD *)(a1 + 16), (int)&v57, &v58);
          a4 = sub_112620(a4 + 1, a5, (int *)&v63);
          sub_119600(a1, a2, a3, v57, v57 + v58, a6);
          if ( *a2 == 2 )
            sub_BE0D4(a1, a2);
          if ( v63 )
          {
            sub_C0B5C((char *)a1, v63);
            sub_C09B8((char *)a1, 2);
          }
          *a2 = 1;
          break;
        case 146:
          v21 = sub_11257C(a4 + 1, a5, &v58);
          a4 = sub_112620(v21, a5, (int *)&v63);
          v22 = sub_117648(v51, v58);
LABEL_26:
          v57 = v22;
          sub_C0C84(a1, v22);
          v23 = v63;
          if ( v63 )
          {
LABEL_27:
            sub_C0B5C((char *)a1, v23);
            sub_C09B8((char *)a1, 2);
          }
          break;
        case 147:
        case 157:
          if ( v53 == a4 )
            sub_946E0("Cannot translate empty pieces to agent expressions");
          v29 = sub_11257C(a4 + 1, a5, &v58);
          v30 = v29;
          if ( v15 == 147 )
          {
            v63 = 0;
            v31 = 8 * v58;
            v58 *= 8;
          }
          else
          {
            v30 = sub_11257C(v29, a5, &v63);
            v31 = v58;
          }
          if ( (unsigned __int64)(v50 + v31) > 0x40 )
            sub_946E0("Expression pieces exceed word size");
          if ( *a2 == 1 )
          {
            if ( v63 > 8 )
            {
              sub_C0B5C((char *)a1, v63 >> 3);
              sub_C09B8((char *)a1, 2);
              v31 = v58;
              v63 &= 7u;
            }
            sub_115288(v51, (char *)a1, v31);
          }
          else if ( *a2 == 2 )
          {
            sub_C0C84(a1, a2[3]);
          }
          if ( v50 )
          {
            if ( v54 )
              sub_C09B8((char *)a1, 43);
            sub_C0B5C((char *)a1, v58);
            sub_C09B8((char *)a1, 9);
            sub_C09B8((char *)a1, 16);
          }
          v32 = v58;
          *a2 = 0;
          v53 = a4;
          a4 = v30;
          v50 += v32;
          break;
        case 150:
LABEL_9:
          ++a4;
          break;
        case 151:
          sub_115258(151);
        case 152:
        case 153:
          if ( v15 == 152 )
            v45 = 2;
          else
            v45 = 4;
          v58 = sub_15C250(v16, v45, v48);
          a4 = &v16[v45];
          sub_132260(&v63, v58, a6, sub_114C00, a1);
          if ( v64 != a6 )
          {
            sub_94700(
              (int)"dwarf2loc.c",
              3631,
              "%s: Assertion `%s' failed.",
              "void dwarf2_compile_expr_to_ax(agent_expr*, axs_value*, unsigned int, const gdb_byte*, const gdb_byte*, dw"
              "arf2_per_cu_data*)",
              "block.per_cu == per_cu");
LABEL_147:
            sub_946E0("Cannot translate DW_OP_implicit_value of %d bytes", v42);
          }
          sub_119600(a1, a2, a3, v63, v63 + HIDWORD(v63), a6);
          break;
        case 154:
          sub_115258(154);
        case 155:
        case 224:
          sub_115258(v15);
        case 156:
          if ( sub_11066C(v51, *(_DWORD *)(a1 + 16), a6, &v55, &v63, &v56, &v57, &v58) )
          {
            sub_C0C84(a1, v55);
            if ( v63 )
            {
              sub_C0B5C((char *)a1, v63);
              sub_C09B8((char *)a1, 2);
            }
          }
          else
          {
            sub_C0B5C((char *)a1, v56);
            sub_119600(a1, a2, a3, v57, v58, a6);
          }
          ++a4;
          *a2 = 1;
          break;
        case 158:
          v41 = sub_11257C(a4 + 1, a5, &v63);
          v42 = v63;
          v43 = v41;
          if ( a5 < &v41[(unsigned int)v63] )
            sub_946E0("DW_OP_implicit_value: too few bytes available.", &v41[v63], v63);
          if ( v63 > 8 )
            goto LABEL_147;
          v44 = sub_15C250(v41, v63, v48);
          sub_C0B5C((char *)a1, v44);
          a4 = &v43[v63];
          sub_112778((unsigned __int8 *)a4, (unsigned __int8 *)a5, "DW_OP_implicit_value");
          *a2 = 0;
          break;
        case 159:
          sub_112778((unsigned __int8 *)++a4, (unsigned __int8 *)a5, "DW_OP_stack_value");
          *a2 = 0;
          break;
        case 240:
          sub_115258(240);
        default:
          sub_115258(v15);
      }
    }
    while ( a4 < a5 );
  }
  v17 = ptr;
  if ( v61 != ptr )
  {
LABEL_12:
    v18 = v6[*(_DWORD *)v59[0]];
    if ( v18 != -1 )
    {
      v19 = 0;
      do
      {
        v20 = 4 * v19;
        sub_C0B24((_DWORD *)a1, v17[v19], v18);
        v17 = ptr;
        if ( ++v19 >= (unsigned int)((v61 - (_BYTE *)ptr) >> 2) )
          goto LABEL_16;
        v18 = v6[*(_DWORD *)((char *)v59[0] + v20 + 4)];
      }
      while ( v18 != -1 );
    }
    v11 = sub_94700((int)"dwarf2loc.c", 3651, "invalid label");
LABEL_144:
    sub_33D01C(v11, HIDWORD(v11));
  }
LABEL_16:
  if ( v6 )
    sub_339E64(v6);
LABEL_18:
  if ( ptr )
    sub_339E64(ptr);
  if ( v59[0] )
    sub_339E64(v59[0]);
}
