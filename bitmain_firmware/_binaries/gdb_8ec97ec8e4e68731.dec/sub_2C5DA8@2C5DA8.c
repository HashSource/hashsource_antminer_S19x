int __fastcall sub_2C5DA8(_DWORD *a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r11
  _DWORD *v5; // r5
  unsigned int v6; // r3
  void *v7; // r0
  unsigned int v8; // r7
  _DWORD *v9; // r4
  unsigned int v10; // r6
  int v11; // r8
  int v12; // r9
  _DWORD *v13; // r6
  int v14; // r9
  _DWORD *v16; // r8
  int v17; // r3
  char v18; // r2
  int v19; // r3
  int v20; // r3
  void *v21; // r3
  unsigned int v22; // r6
  unsigned int v23; // r3
  int v24; // r3
  int v25; // r3
  int v27; // [sp+1Ch] [bp-28h]
  char *s; // [sp+20h] [bp-24h]
  const char **v29; // [sp+24h] [bp-20h]
  void *v30; // [sp+2Ch] [bp-18h]
  void *ptr; // [sp+38h] [bp-Ch] BYREF
  int v32; // [sp+3Ch] [bp-8h] BYREF

  v2 = *(_BYTE *)a2 & 3;
  ptr = 0;
  if ( v2 == 2 )
    return 1;
  v3 = *(_DWORD **)(a2 + 28);
  if ( v3[11] != 4 )
  {
    sub_2A6BBC("elf32-arm.c", 7505);
    sub_2B2F64(0);
    __und(0);
  }
  sub_2B2F64(v3);
  if ( v3[91] && *(_DWORD *)(a1[1] + 8) )
  {
    sub_2A6A5C("%B: BE8 images only valid in big-endian mode.", a1);
    return 0;
  }
  if ( !v3[90] )
    return 1;
  v5 = (_DWORD *)a1[25];
  if ( !v5 )
    return 1;
  while ( !v5[19] || (v5[5] & 0x8000) != 0 )
  {
LABEL_8:
    v5 = (_DWORD *)v5[3];
    if ( !v5 )
      return 1;
  }
  v27 = a1[40];
  v6 = sub_2E2758(a1, v5, 0);
  v30 = (void *)v6;
  if ( !v6 )
  {
    if ( ptr && *(void **)(v5[35] + 48) != ptr )
      free(ptr);
    return 0;
  }
  v7 = ptr;
  v8 = v6 + 12 * v5[19];
  if ( v6 >= v8 )
  {
LABEL_35:
    v20 = v5[35];
    if ( v7 && *(void **)(v20 + 48) != v7 )
    {
      free(v7);
      v20 = v5[35];
    }
    v21 = *(void **)(v20 + 104);
    ptr = 0;
    if ( v21 != v30 )
      free(v30);
    goto LABEL_8;
  }
  v9 = (_DWORD *)v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v9[1];
      v11 = (unsigned __int8)v10;
      if ( (unsigned __int8)v10 == 1 )
      {
        if ( v7 )
          goto LABEL_40;
        goto LABEL_50;
      }
      if ( (unsigned __int8)v10 == 40 && (int)v3[94] > 1 )
        break;
LABEL_34:
      v9 += 3;
      if ( v8 <= (unsigned int)v9 )
        goto LABEL_35;
    }
    if ( v7 )
      goto LABEL_18;
LABEL_50:
    if ( !*(_DWORD *)(v5[35] + 48) )
      break;
    ptr = *(void **)(v5[35] + 48);
LABEL_53:
    if ( (unsigned __int8)v10 != 40 )
    {
LABEL_40:
      v22 = v10 >> 8;
      v23 = *(_DWORD *)(v27 + 104);
      if ( v23 <= v22 )
      {
        v24 = *(_DWORD *)(*(_DWORD *)(a1[40] + 536) + 4 * (v22 - v23));
        if ( v24 )
        {
          if ( !v3[57] || *(_DWORD *)(v24 + 40) == -1 )
          {
            if ( v11 != 1 )
              sub_2A6BF0((int)"elf32-arm.c", 7618, (int)"bfd_elf32_arm_process_before_allocation");
            if ( (*(_BYTE *)(v24 + 50) & 3) == 1 )
              sub_2B90BC(a2, *(const char **)(v24 + 4));
          }
        }
      }
      goto LABEL_47;
    }
    v7 = ptr;
LABEL_18:
    v12 = (*(int (__fastcall **)(int))(a1[1] + 40))((int)v7 + *v9) & 0xF;
    if ( v12 != 15 )
    {
      v13 = *(_DWORD **)(a2 + 28);
      if ( v13[11] != 4 )
      {
        sub_2A6BBC("elf32-arm.c", 7025);
        __und(0);
      }
      if ( !v13[90] )
        sub_2A6BBC("elf32-arm.c", 7026);
      v16 = &v13[v12];
      if ( !v16[71] )
      {
        v29 = sub_2AD864(v13[90], ".v4_bx");
        if ( !v29 )
          sub_2A6BBC("elf32-arm.c", 7035);
        s = (char *)sub_2AB368(9);
        if ( !s )
          sub_2A6BBC("elf32-arm.c", 7041);
        sprintf(s, "__bx_r%d", v12);
        if ( sub_2FC920(v13, s, 0) )
          sub_2A6BBC("elf32-arm.c", 7048);
        v32 = 0;
        sub_2FD6C4(a2, v13[90], (int)s, 9, (int)v29, v13[70], 0, 1, 0, (int)&v32);
        v17 = v32;
        v18 = *(_BYTE *)(v32 + 52);
        *(_BYTE *)(v32 + 48) = 2;
        *(_BYTE *)(v17 + 52) = v18 | 8;
        v7 = ptr;
        v19 = v13[70];
        v29[9] += 12;
        v16[71] = v19 | 2;
        v13[70] = v19 + 12;
        goto LABEL_34;
      }
    }
LABEL_47:
    v9 += 3;
    v7 = ptr;
    if ( v8 <= (unsigned int)v9 )
      goto LABEL_35;
  }
  if ( sub_2ADFDC((int)a1, (int)v5, (int *)&ptr) )
    goto LABEL_53;
  v14 = 0;
  v25 = v5[35];
  if ( ptr && *(void **)(v25 + 48) != ptr )
  {
    free(ptr);
    v25 = v5[35];
  }
  if ( *(void **)(v25 + 104) != v30 )
  {
    free(v30);
    return v14;
  }
  return 0;
}
