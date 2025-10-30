_BYTE *__fastcall sub_26C4E0(int *a1)
{
  char v1; // r3
  _DWORD *v3; // r0
  _BYTE *v4; // r4
  int v5; // r3
  __int64 v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r3
  __int64 v10; // r8
  __int64 v11; // r2
  int v12; // r1
  bool v13; // zf
  __int64 v14; // r0
  char v15; // r12
  void *v16; // r6
  const void *v17; // r1
  int *v18; // r7
  int v19; // r6
  _DWORD *v20; // r8
  int *v21; // r7
  int v22; // r6
  _DWORD *v23; // r8
  int v24; // r3
  int v25; // r0
  int (__fastcall *v27)(_BYTE *); // r3

  v1 = *((_BYTE *)a1 + 4);
  v3 = (_DWORD *)a1[17];
  if ( (v1 & 2) != 0 )
    v4 = sub_26BB08(v3);
  else
    v4 = sub_26BB80(v3);
  v5 = *a1;
  v6 = *((_QWORD *)a1 + 4);
  *((_DWORD *)v4 + 16) = a1[16];
  *(_DWORD *)v4 = v5;
  v7 = a1[3];
  v8 = a1[4];
  v9 = a1[5];
  v10 = *((_QWORD *)a1 + 6);
  *((_DWORD *)v4 + 2) = a1[2];
  *((_DWORD *)v4 + 3) = v7;
  *((_DWORD *)v4 + 4) = v8;
  *((_DWORD *)v4 + 5) = v9;
  v11 = *((_QWORD *)a1 + 5);
  v12 = a1[7];
  *((_DWORD *)v4 + 6) = a1[6];
  *((_DWORD *)v4 + 7) = v12;
  *((_QWORD *)v4 + 5) = v11;
  *((_QWORD *)v4 + 4) = v6;
  *((_QWORD *)v4 + 6) = v10;
  v13 = ((*((unsigned __int8 *)a1 + 4) >> 1) & 1) == 0;
  v4[4] = v4[4] & 0xFD | (2 * ((a1[1] & 2) != 0));
  v14 = *((_QWORD *)a1 + 10);
  v15 = v4[4];
  *((_QWORD *)v4 + 9) = *((_QWORD *)a1 + 9);
  *((_QWORD *)v4 + 10) = v14;
  v4[4] = v15 & 0xFE | a1[1] & 1;
  if ( v13 )
  {
    v16 = (void *)*((_DWORD *)v4 + 23);
    if ( !v16 )
    {
      sub_26A9E8((int)(v4 + 68), (_DWORD *)v4 + 23);
      v16 = (void *)*((_DWORD *)v4 + 23);
    }
    v17 = (const void *)a1[23];
    if ( !v17 )
    {
      sub_26A9E8((int)(a1 + 17), a1 + 23);
      v17 = (const void *)a1[23];
    }
    memcpy(v16, v17, *(_DWORD *)(a1[17] + 20));
  }
  v18 = (int *)a1[24];
  if ( v18 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      v20 = sub_99EB8(0, -v19, 8, 16);
      *v20 = v19;
      memcpy(v20 + 2, v18 + 2, 16 * v19);
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    v20 = 0;
  }
  v21 = (int *)a1[25];
  *((_DWORD *)v4 + 24) = v20;
  if ( v21 )
  {
    v22 = *v21;
    if ( *v21 )
    {
      v23 = sub_99EB8(0, -v22, 8, 16);
      *v23 = v22;
      memcpy(v23 + 2, v21 + 2, 16 * v22);
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
  }
  v24 = a1[15];
  v25 = *((_DWORD *)v4 + 15);
  *((_DWORD *)v4 + 25) = v23;
  *((_DWORD *)v4 + 15) = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 56);
  ((void (__fastcall *)(int))loc_26C200)(v25);
  if ( *(_DWORD *)v4 != 6 )
    return v4;
  v27 = *(int (__fastcall **)(_BYTE *))(*((_DWORD *)v4 + 2) + 20);
  if ( !v27 )
    return v4;
  *((_DWORD *)v4 + 3) = v27(v4);
  return v4;
}
