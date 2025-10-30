bool __fastcall sub_2FCFDC(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int *v9; // r4
  int v10; // r11
  unsigned int v11; // r3
  void *v12; // r7
  int v13; // r6
  int v14; // r0
  void *v16; // r9
  unsigned int v17; // r7
  void *v18; // r8
  __int64 v19; // r6
  unsigned int v20; // r8
  int v21; // r3
  unsigned int v22; // r7
  unsigned int v23; // r8
  int v24; // r2
  int v25; // r3
  char *v26; // r1
  int v27; // r4
  int v28; // t1
  int *v29; // [sp+14h] [bp-8h]

  if ( (a3[5] & 0x100) == 0 )
    sub_2A6BBC("linker.c", 2526);
  v9 = (int *)a4[4];
  if ( !v9[9] )
    return 1;
  v10 = v9[37];
  if ( (_DWORD *)v9[15] != a3 )
    sub_2A6BBC("linker.c", 2533);
  if ( v9[14] == a4[2] )
  {
    if ( v9[9] == a4[3] )
      goto LABEL_8;
  }
  else
  {
    sub_2A6BBC("linker.c", 2534);
    if ( v9[9] == a4[3] )
    {
LABEL_8:
      if ( (*(_BYTE *)a2 & 3) != 2 )
        goto LABEL_9;
      goto LABEL_33;
    }
  }
  sub_2A6BBC("linker.c", 2535);
  if ( (*(_BYTE *)a2 & 3) != 2 )
    goto LABEL_9;
LABEL_33:
  if ( v9[19] && !a3[18] )
  {
    sub_2A6A5C(
      "Attempt to do relocatable link with %s input and %s output",
      **(const char ***)(v10 + 4),
      **(const char ***)(a1 + 4));
    ((void (__fastcall *)(int))loc_2A6C48)(3);
    return 0;
  }
LABEL_9:
  if ( !a5 )
  {
    if ( !sub_2FCD78((_DWORD *)v10) )
      return 0;
    v20 = *(_DWORD *)(v10 + 120);
    v21 = 4 * *(_DWORD *)(v10 + 124);
    if ( v20 < v20 + v21 )
    {
      v29 = v9;
      v22 = v20 + v21 - 4;
      v23 = v20 - 4;
      while ( 1 )
      {
        v28 = *(_DWORD *)(v23 + 4);
        v23 += 4;
        v27 = v28;
        if ( (*(_DWORD *)(v28 + 12) & 0x3882) != 0 )
        {
          v26 = *(char **)(v27 + 20);
          if ( !v26 )
          {
            if ( *(char ***)(v27 + 16) == &off_4708A8 )
LABEL_56:
              v26 = sub_2FC960(a1, a2, *(const char **)(v27 + 4), 0, 0, 1);
            else
LABEL_49:
              v26 = sub_2FC920(*(_DWORD **)(a2 + 28), *(const char **)(v27 + 4), 0, 0, 1);
            if ( !v26 )
              goto LABEL_45;
          }
        }
        else
        {
          v24 = *(_DWORD *)(v27 + 16);
          if ( (char **)v24 == &off_4708A8 )
          {
            v26 = *(char **)(v27 + 20);
            if ( !v26 )
              goto LABEL_56;
          }
          else
          {
            v25 = (*(_DWORD *)(v24 + 20) >> 12) & 1;
            if ( (char **)v24 == &off_4709F8 )
              v25 = 1;
            if ( !v25 )
              goto LABEL_45;
            v26 = *(char **)(v27 + 20);
            if ( !v26 )
              goto LABEL_49;
          }
        }
        sub_2FC544(v27, (int)v26);
LABEL_45:
        if ( v23 == v22 )
        {
          v9 = v29;
          break;
        }
      }
    }
  }
  v11 = v9[9];
  if ( (a3[5] & 0x2100000) != 0x2000000 || !v11 )
  {
    v17 = v9[10];
    if ( v11 >= v17 )
      v17 = v9[9];
    v18 = sub_2AB368(v17);
    HIDWORD(v19) = v17 != 0;
    if ( v18 )
      HIDWORD(v19) = 0;
    if ( HIDWORD(v19) )
      return 0;
    v16 = (void *)sub_2A7B54(a1, a2, (int)a4);
    if ( !v16
      || (LODWORD(v19) = v9[14], LODWORD(v19) = sub_2A6904(a1) * v19, !sub_2ADDE8(a1, a3, v16, v9[9], v19, v9[9])) )
    {
      if ( v18 )
        free(v18);
      return 0;
    }
    if ( v18 )
      free(v18);
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 43) & 0x40) == 0 && !sub_2ADDE8(a1, a3, "", 1, 0, 1u) )
    return 0;
  v12 = (void *)a3[27];
  if ( !v12 )
    sub_2A6BBC("linker.c", 2618);
  v13 = v9[14];
  if ( v13 )
  {
    sub_2A6BBC("linker.c", 2619);
    v13 = v9[14];
  }
  v14 = sub_2A6904(a1);
  return sub_2ADDE8(a1, a3, v12, v9[9], (unsigned int)(v14 * v13), v9[9]) != 0;
}
