int __fastcall tls_construct_finished(_DWORD *a1, int a2)
{
  int *v4; // r3
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  size_t v10; // r5
  int v11; // r6
  int v13; // r3
  _BOOL4 v14; // r2
  int *v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r0
  const void *v19; // r1

  if ( a1[7] )
  {
    v7 = a1[31];
    v5 = *(_DWORD *)(a1[1] + 100);
    goto LABEL_11;
  }
  if ( a1[381] != 4 )
    a1[21] = 1;
  v4 = (int *)a1[1];
  v5 = v4[25];
  if ( (*(_DWORD *)(v5 + 48) & 8) == 0 )
  {
    v13 = *v4;
    v14 = v13 != 0x10000;
    if ( v13 < 772 )
      v14 = 0;
    if ( v14 )
    {
      v6 = a1[31];
      if ( *(_DWORD *)(v6 + 536) )
        goto LABEL_6;
      if ( !(*(int (__fastcall **)(_DWORD *, int))(v5 + 16))(a1, 146) )
        return 0;
      v6 = a1[31];
      v5 = *(_DWORD *)(a1[1] + 100);
      v7 = v6;
      if ( !a1[7] )
        goto LABEL_6;
LABEL_11:
      v8 = *(_DWORD *)(v5 + 32);
      v9 = *(_DWORD *)(v5 + 36);
      goto LABEL_7;
    }
  }
  v6 = a1[31];
LABEL_6:
  v7 = v6;
  v8 = *(_DWORD *)(v5 + 24);
  v9 = *(_DWORD *)(v5 + 28);
LABEL_7:
  v10 = (*(int (__fastcall **)(_DWORD *, int, int, int))(v5 + 20))(a1, v8, v9, v7 + 256);
  if ( !v10 )
    return 0;
  *(_DWORD *)(a1[31] + 384) = v10;
  v11 = sub_A851C(a2);
  if ( !v11 )
  {
    sub_95494(a1, 80, 359, 68, (int)"ssl/statem/statem_lib.c", 575);
    return v11;
  }
  v15 = (int *)a1[1];
  if ( (*(_DWORD *)(v15[25] + 48) & 8) != 0 )
    goto LABEL_34;
  v16 = *v15;
  v17 = *v15 == 0x10000;
  if ( v16 < 772 )
    v17 |= 1u;
  if ( v17 )
  {
LABEL_34:
    if ( !sub_8C788((int)a1, "CLIENT_RANDOM", (unsigned __int8 *)(a1[285] + 72), *(_DWORD *)(a1[285] + 4)) )
      return 0;
  }
  if ( v10 > 0x40 )
  {
    sub_95494(a1, 80, 359, 68, (int)"ssl/statem/statem_lib.c", 595);
    return 0;
  }
  v18 = a1[31];
  v11 = 1;
  v19 = (const void *)(v18 + 256);
  if ( !a1[7] )
  {
    memcpy((void *)(v18 + 688), v19, v10);
    *(_DWORD *)(a1[31] + 752) = v10;
    return v11;
  }
  memcpy((void *)(v18 + 756), v19, v10);
  *(_DWORD *)(a1[31] + 820) = v10;
  return 1;
}
