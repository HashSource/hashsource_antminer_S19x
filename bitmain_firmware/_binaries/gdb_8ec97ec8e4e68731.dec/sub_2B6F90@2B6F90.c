char *__fastcall sub_2B6F90(
        _DWORD *a1,
        unsigned int a2,
        char *a3,
        int a4,
        int a5,
        int a6,
        char *s,
        int a8,
        int a9,
        unsigned int *a10)
{
  unsigned int v14; // r1
  char *v15; // r9
  _DWORD *v16; // r5
  char *v17; // r11
  int v19; // r10
  char *v20; // r0
  char *v21; // r11
  int v22; // r1
  int v23; // r1
  char *v24; // r0
  int v25; // r2
  bool v26; // zf
  int v27; // r1
  unsigned int v28; // r2
  bool v29; // zf
  const char *v30; // r1
  char *v31; // [sp+Ch] [bp-10h]
  int v32; // [sp+14h] [bp-8h] BYREF

  if ( a2 > 0x17 )
    sub_2A6BF0((int)"elf32-arm.c", 4627, (int)"arm_stub_sym_claimed");
  if ( a2 == 17 )
  {
    v16 = a1 + 313;
    *a10 = 0;
    v17 = sub_2AAC2C(a1 + 313, s, 0, 0);
    if ( v17 )
      goto LABEL_11;
    v15 = s;
    v19 = 1;
    goto LABEL_15;
  }
  if ( !a2 )
  {
    sub_2A6BBC("elf32-arm.c", 5506);
    *a10 = a2;
    if ( a4 )
      goto LABEL_5;
LABEL_21:
    sub_2A6BBC("elf32-arm.c", 5513);
    if ( a3 )
      goto LABEL_6;
LABEL_22:
    sub_2A6BBC("elf32-arm.c", 5514);
    goto LABEL_6;
  }
  *a10 = 0;
  if ( !a4 )
    goto LABEL_21;
LABEL_5:
  if ( !a3 )
    goto LABEL_22;
LABEL_6:
  v14 = *((_DWORD *)a3 + 1);
  if ( v14 > a1[326] )
  {
    sub_2A6BBC("elf32-arm.c", 5515);
    v14 = *((_DWORD *)a3 + 1);
  }
  v15 = sub_2B6550(
          (_DWORD *)(*(_DWORD *)(a1[323] + 8 * v14) + 4),
          (_DWORD *)(a5 + 4),
          a6,
          (_DWORD *)(a4 + 4),
          (_DWORD *)(a4 + 8),
          a2);
  if ( !v15 )
    return 0;
  v16 = a1 + 313;
  v17 = sub_2AAC2C(a1 + 313, v15, 0, 0);
  if ( v17 )
  {
    free(v15);
LABEL_11:
    *((_DWORD *)v17 + 5) = a8;
    return v17;
  }
  v19 = 0;
LABEL_15:
  v31 = sub_2B6D7C(&v32, (int *)a3 + 1, (int)a1, a2);
  if ( !v31 )
    goto LABEL_27;
  v20 = sub_2AAC2C(v16, v15, 1, 0);
  v21 = v20;
  if ( !v20 )
  {
    if ( !a3 )
      a3 = v31;
    sub_2A6A5C("%B: cannot create stub entry %s", *((_DWORD *)a3 + 37), v15);
LABEL_27:
    if ( !v19 )
      goto LABEL_48;
    return 0;
  }
  v22 = v32;
  *((_DWORD *)v20 + 9) = a2;
  *((_DWORD *)v20 + 3) = v31;
  *((_DWORD *)v20 + 15) = v22;
  *((_DWORD *)v20 + 4) = -1;
  *((_DWORD *)v20 + 5) = a8;
  *((_DWORD *)v20 + 6) = a5;
  *((_DWORD *)v20 + 13) = a6;
  *((_DWORD *)v20 + 14) = a9;
  if ( !v19 )
  {
    if ( s )
    {
      v23 = strlen(s) + 16;
    }
    else
    {
      v23 = 23;
      s = "unnamed";
    }
    v24 = (char *)sub_2ACBF4(a1[320], v23);
    *((_DWORD *)v21 + 16) = v24;
    if ( v24 )
    {
      v25 = *(unsigned __int8 *)(a4 + 4);
      v26 = v25 == 30;
      if ( v25 != 30 )
        v26 = v25 == 10;
      v27 = v26;
      if ( v25 == 51 )
        v27 |= 1u;
      if ( v27 && !a9 )
      {
        sprintf(v24, "__%s_from_thumb", s);
      }
      else
      {
        v28 = v25 - 28;
        v29 = v28 == 1;
        if ( v28 <= 1 )
          v29 = a9 == 1;
        if ( v29 )
          LOWORD(v30) = 31428;
        else
          LOWORD(v30) = 31444;
        HIWORD(v30) = 65;
        sprintf(v24, v30, s);
      }
      goto LABEL_19;
    }
LABEL_48:
    v17 = 0;
    free(v15);
    return v17;
  }
  *((_DWORD *)v20 + 16) = s;
LABEL_19:
  *a10 = 1;
  return v21;
}
