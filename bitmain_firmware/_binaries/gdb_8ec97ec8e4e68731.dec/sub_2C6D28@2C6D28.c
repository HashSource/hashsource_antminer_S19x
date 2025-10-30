int __fastcall sub_2C6D28(_DWORD *a1, int a2)
{
  int v2; // r11
  int v4; // r3
  int v5; // r6
  int v6; // r8
  int v7; // r11
  size_t v8; // r1
  _DWORD *v9; // lr
  unsigned int v10; // r1
  void *v11; // r3
  unsigned int v12; // r9
  int v13; // r5
  int v14; // r12
  int v15; // r2
  int v16; // r2
  unsigned int v17; // r10
  unsigned int v18; // r11
  unsigned int v19; // r9
  unsigned int v20; // r2
  unsigned int v21; // r0
  int v22; // r0
  _BOOL4 v23; // r6
  unsigned int v24; // r7
  unsigned int v25; // r8
  unsigned int v26; // r3
  bool v27; // cc
  int v28; // r4
  int v29; // r0
  _BOOL4 v30; // r3
  unsigned int v31; // r3
  _DWORD *v32; // r0
  _DWORD *v33; // r4
  int v34; // r1
  int v35; // r3
  int v36; // r0
  const char **v37; // r8
  char *v38; // r6
  int v39; // r3
  char v40; // r2
  _DWORD *v41; // r0
  int v42; // r2
  int v43; // r12
  int v44; // r3
  char v45; // r2
  int v46; // r6
  int v47; // r1
  int v48; // r3
  char v49; // r0
  __int64 v50; // r0
  int v51; // r3
  _DWORD *v52; // [sp+28h] [bp-34h]
  int v53; // [sp+2Ch] [bp-30h]
  int v54; // [sp+30h] [bp-2Ch]
  const char *v56; // [sp+38h] [bp-24h]
  _DWORD *v57; // [sp+3Ch] [bp-20h]
  unsigned int v58; // [sp+40h] [bp-1Ch]
  int v59; // [sp+48h] [bp-14h]
  void *ptr; // [sp+50h] [bp-Ch] BYREF
  int v61; // [sp+54h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  ptr = 0;
  if ( *(_DWORD *)(v2 + 44) != 4 )
    return 0;
  if ( (*(_BYTE *)a2 & 3) == 2 )
    return 1;
  if ( *(_DWORD *)(a1[1] + 4) != 5 )
    return 1;
  v4 = a1[40];
  if ( !v4 || (*(_BYTE *)(v4 + 2340) & 0x3F) != 4 || !*(_DWORD *)(v2 + 400) || ((a1[10] >> 5) & 0x42) != 0 || !a1[25] )
    return 1;
  v5 = (int)a1;
  v6 = a1[25];
  v54 = v2;
  do
  {
    v7 = *(_DWORD *)(v6 + 140);
    if ( *(_DWORD *)(v7 + 4) != 1 )
      goto LABEL_62;
    if ( (*(_DWORD *)(v7 + 8) & 4) == 0 )
      goto LABEL_62;
    if ( (*(_DWORD *)(v6 + 20) & 0x8000) != 0 )
      goto LABEL_62;
    if ( (*(_WORD *)(v6 + 24) & 0x380) == 0x200 )
      goto LABEL_62;
    if ( *(char ***)(v6 + 60) == &off_470950 )
      goto LABEL_62;
    if ( !strcmp(*(const char **)v6, ".text.stm32l4xx_veneer") )
      goto LABEL_62;
    v8 = *(_DWORD *)(v7 + 144);
    if ( !v8 )
      goto LABEL_62;
    if ( *(_DWORD *)(v7 + 48) )
    {
      ptr = *(void **)(v7 + 48);
    }
    else
    {
      if ( !sub_2ADFDC(v5, v6, (int *)&ptr) )
      {
        if ( ptr && ptr != *(void **)(*(_DWORD *)(v6 + 140) + 48) )
          free(ptr);
        return 0;
      }
      v8 = *(_DWORD *)(v7 + 144);
    }
    qsort(*(void **)(v7 + 152), v8, 8u, (__compar_fn_t)sub_2B5F00);
    v10 = *(_DWORD *)(v7 + 144);
    v11 = ptr;
    if ( !v10 )
      goto LABEL_58;
    v12 = 0;
    v13 = v5;
    v52 = (_DWORD *)v7;
    v53 = v6;
    do
    {
      v14 = v52[38];
      if ( v10 - 1 == v12 )
        v9 = (_DWORD *)v53;
      v15 = v14 + 8 * v12;
      if ( v10 - 1 != v12 )
        v9 = *(_DWORD **)(v15 + 8);
      v16 = *(unsigned __int8 *)(v15 + 4);
      if ( v10 - 1 == v12 )
        v9 = (_DWORD *)v9[9];
      if ( v16 == 116 )
      {
        v17 = *(_DWORD *)(v14 + 8 * v12);
        if ( (unsigned int)v9 > v17 )
        {
          v58 = v12;
          v18 = 0;
          v19 = (unsigned int)v9;
          while ( 1 )
          {
            v22 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(v13 + 4) + 52))((unsigned int)v11 + v17);
            if ( (v22 & 0xE000) != 0xE000 )
            {
              v11 = ptr;
              if ( v18 )
                --v18;
              v20 = v17 + 2;
LABEL_37:
              v17 = v20;
              if ( (v22 & 0xFF00) == 0xBF00 )
              {
                v21 = v22 & 0xF;
                if ( v21 )
                  v18 = 4 - __clz(__rbit32(v21));
              }
              goto LABEL_40;
            }
            if ( v18 )
              v23 = --v18 != 0;
            else
              v23 = 0;
            v20 = v17 + 2;
            v11 = ptr;
            if ( (v22 & 0x1800) == 0 )
              goto LABEL_37;
            v24 = (v22 << 16) | (*(int (__fastcall **)(char *))(*(_DWORD *)(v13 + 4) + 52))((char *)ptr + v20);
            v25 = ((v24 & 0xFFD02000) + 393216000) & 0xFF7FFFFF;
            if ( (v24 & 0xFE100E00) != 0xEC100A00 )
              break;
            v26 = (v24 >> 21) & 0xD;
            v27 = v26 > 9;
            if ( v26 != 9 )
              v27 = v26 - 4 > 1;
            if ( v27 )
              break;
            v28 = *(_DWORD *)(v54 + 400);
            if ( !v25 )
              goto LABEL_51;
            v29 = (unsigned __int8)v24;
LABEL_52:
            if ( v28 == 1 )
              v30 = v29 > 8;
            else
              v30 = v28 == 2;
            if ( v30 )
            {
              if ( v23 )
              {
                v31 = v17;
                v17 += 4;
                sub_2A6A5C(
                  "%B(%A+%#x): error: multiple load detected in non-last IT block instruction : STM32L4XX veneer cannot b"
                  "e generated.\n"
                  "Use gcc option -mrestrict-it to generate only one instruction per IT block.\n",
                  v13,
                  v53,
                  v31);
                v11 = ptr;
              }
              else
              {
                v32 = sub_2AB4EC(0x14u);
                v57 = v32;
                v33 = *(_DWORD **)(a2 + 28);
                v34 = v33[11];
                if ( v25 )
                  v35 = 24;
                else
                  v35 = 16;
                v59 = v35;
                ++*(_DWORD *)(*(_DWORD *)(v53 + 140) + 164);
                v32[3] = v24;
                v32[4] = 0;
                if ( v34 != 4 )
                {
                  sub_2A6BBC("elf32-arm.c", 7240);
                  __und(0);
                }
                v36 = v33[90];
                if ( !v36 )
                {
                  sub_2A6BBC("elf32-arm.c", 7241);
                  v36 = v33[90];
                }
                v37 = sub_2AD864(v36, ".text.stm32l4xx_veneer");
                if ( !v37 )
                  sub_2A6BBC("elf32-arm.c", 7246);
                v56 = v37[35];
                v38 = (char *)sub_2AB368(31);
                if ( !v38 )
                  sub_2A6BBC("elf32-arm.c", 7253);
                sprintf(v38, "__stm32l4xx_veneer_%x", v33[101]);
                if ( sub_2FC920(v33, v38, 0) )
                  sub_2A6BBC("elf32-arm.c", 7261);
                v61 = 0;
                sub_2FD6C4(a2, v33[90], (int)v38, 9, (int)v37, v33[87], 0, 1, 0, (int)&v61);
                v39 = v61;
                v40 = *(_BYTE *)(v61 + 52);
                *(_BYTE *)(v61 + 48) = 2;
                *(_BYTE *)(v39 + 52) = v40 | 8;
                ++*((_DWORD *)v56 + 41);
                v41 = sub_2AB4EC(0x14u);
                v42 = v33[101];
                v43 = *((_DWORD *)v56 + 42);
                v41[3] = v42;
                v41[4] = 1;
                v41[1] = -1;
                v41[2] = v57;
                v57[2] = v41;
                *v41 = v43;
                *((_DWORD *)v56 + 42) = v41;
                sprintf(v38, "__stm32l4xx_veneer_%x_r", v42);
                if ( sub_2FC920(v33, v38, 0) )
                  sub_2A6BF0((int)"elf32-arm.c", 7295, (int)"record_stm32l4xx_erratum_veneer");
                v17 += 4;
                v61 = 0;
                sub_2FD6C4(a2, v13, (int)v38, 1, v53, v17, 0, 1, 0, (int)&v61);
                v44 = v61;
                v45 = *(_BYTE *)(v61 + 52);
                *(_BYTE *)(v61 + 48) = 2;
                *(_BYTE *)(v44 + 52) = v45 | 8;
                free(v38);
                v46 = v33[87];
                if ( !v46 )
                {
                  v47 = v33[90];
                  v61 = 0;
                  sub_2FD6C4(a2, v47, (int)"$t", 1, (int)v37, 0, 0, 1, 0, (int)&v61);
                  v48 = v61;
                  v49 = *(_BYTE *)(v61 + 52);
                  *(_BYTE *)(v61 + 48) = 0;
                  *(_BYTE *)(v48 + 52) = v49 | 8;
                  sub_2B9E04(v37[35], 116, 0);
                  v46 = v33[87];
                }
                HIDWORD(v50) = -1;
                v9 = v52;
                v51 = v33[101];
                LODWORD(v50) = v52[42];
                v37[9] += v59;
                v33[101] = v51 + 1;
                v33[87] = v59 + v46;
                v11 = ptr;
                *(_QWORD *)v57 = v50;
                v52[42] = v57;
              }
              goto LABEL_40;
            }
LABEL_64:
            v17 += 4;
            v11 = ptr;
LABEL_40:
            if ( v19 <= v17 )
            {
              v12 = v58;
              v10 = v52[36];
              goto LABEL_24;
            }
          }
          if ( v25 )
            goto LABEL_64;
          v28 = *(_DWORD *)(v54 + 400);
LABEL_51:
          v29 = sub_347FB0((unsigned __int16)v24);
          goto LABEL_52;
        }
      }
LABEL_24:
      ++v12;
    }
    while ( v10 > v12 );
    v6 = v53;
    v5 = v13;
LABEL_58:
    if ( v11 )
    {
      if ( v11 != *(void **)(*(_DWORD *)(v6 + 140) + 48) )
        free(v11);
    }
    ptr = 0;
LABEL_62:
    v6 = *(_DWORD *)(v6 + 12);
  }
  while ( v6 );
  return 1;
}
