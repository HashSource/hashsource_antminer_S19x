int __fastcall sub_2FCE00(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int *v6; // r5
  int *v7; // r6
  unsigned int v8; // r2
  int v9; // r4
  int v10; // t1
  char *v11; // r0
  char *v12; // r10
  int v13; // r2
  int v14; // r1
  int v15; // r11
  int v16; // r0
  unsigned int v17; // r0
  unsigned int v18; // r0
  char **v19; // r1
  unsigned int *v20; // r4
  char *v21; // r1
  char **v22; // r0
  int v23; // r3
  int v25; // r2
  int (__fastcall *v26)(int, _DWORD *, int, _DWORD **); // r4
  _DWORD *v27; // [sp+Ch] [bp-8h] BYREF

  v27 = a1;
  *a5 = 0;
  if ( !sub_2FCD78(a1) )
    return 0;
  v6 = (int *)v27[30];
  v7 = &v6[v27[31]];
  if ( v6 >= v7 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *v6++;
      v9 = v10;
      if ( (*(_DWORD *)(*(_DWORD *)(v10 + 16) + 20) & 0x1000) != 0 || (*(_DWORD *)(v9 + 12) & 0x2082) != 0 )
      {
        v11 = sub_2FC920(*(_DWORD **)(a2 + 28), *(const char **)(v9 + 4), 0, 0, 1);
        v12 = v11;
        if ( v11 )
        {
          v13 = (unsigned __int8)v11[12];
          if ( (v13 & 0xFB) == 1 )
            break;
        }
      }
LABEL_6:
      if ( v7 <= v6 )
        return 1;
    }
    v14 = *(_DWORD *)(v9 + 16);
    if ( (*(_DWORD *)(v14 + 20) & 0x1000) == 0 )
      break;
    if ( v13 != 1 )
    {
      v8 = *(_DWORD *)(v14 + 28) + *(_DWORD *)(v9 + 8);
      if ( v8 > *((_DWORD *)v11 + 6) )
        *((_DWORD *)v11 + 6) = v8;
      goto LABEL_6;
    }
    v15 = *((_DWORD *)v11 + 5);
    if ( !v15 )
      break;
    v11[12] = 5;
    v16 = sub_2AAEC8(*(_DWORD *)(a2 + 28), 8);
    *((_DWORD *)v12 + 5) = v16;
    if ( !v16 )
      return 0;
    v17 = *(_DWORD *)(*(_DWORD *)(v9 + 16) + 28) + *(_DWORD *)(v9 + 8);
    *((_DWORD *)v12 + 6) = v17;
    v18 = sub_2ABAF4(v17);
    v19 = *(char ***)(v9 + 16);
    v20 = (unsigned int *)*((_DWORD *)v12 + 5);
    if ( v18 >= 4 )
      v18 = 4;
    *v20 = v18;
    if ( v19 == &off_470800 )
      v21 = "COMMON";
    else
      v21 = *v19;
    v22 = sub_2ADA2C(v15, v21);
    v23 = *((_DWORD *)v12 + 5);
    v20[1] = (unsigned int)v22;
    *(_DWORD *)(*(_DWORD *)(v23 + 4) + 20) |= 1u;
    if ( v7 <= v6 )
      return 1;
  }
  v25 = *(_DWORD *)(v9 + 4);
  v26 = **(int (__fastcall ***)(int, _DWORD *, int, _DWORD **))(a2 + 24);
  *a5 = 1;
  if ( !v26(a2, v27, v25, &v27) )
    return 0;
  return (*(int (**)(void))(v27[1] + 364))();
}
