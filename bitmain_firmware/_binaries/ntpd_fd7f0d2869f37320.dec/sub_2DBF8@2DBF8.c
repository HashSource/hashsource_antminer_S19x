__int64 *__fastcall sub_2DBF8(_QWORD *a1, int a2, time_t *a3)
{
  unsigned int v4; // r7
  __int64 *v5; // r9
  _QWORD *v6; // r0
  _QWORD *v7; // r10
  int v8; // r4
  __int64 v9; // r10
  __int64 v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r2
  __int16 v13; // r1
  _BOOL4 v14; // r2
  int v15; // r1
  unsigned int v16; // r2
  int v17; // r3
  char v18; // r3
  _BOOL4 v20; // r2
  int v21; // r12
  __int16 v22; // r2
  int v23; // r0
  __int64 v24; // r2
  __int64 v25; // [sp+0h] [bp-2Ch] BYREF
  __int64 v26; // [sp+8h] [bp-24h] BYREF
  __int64 v27; // [sp+10h] [bp-1Ch] BYREF
  __int64 v28; // [sp+18h] [bp-14h] BYREF

  v4 = a2;
  v5 = &v25;
  sub_6694C((int)&v25, a2, a3);
  v26 = v25;
  v6 = sub_2D4D0(0);
  v7 = v6 + 8;
  v8 = (int)v6;
  memset(a1, 0, 0x20u);
  if ( sub_6EAC0(&v26, v7) < 0 )
    goto LABEL_5;
  if ( sub_6EAC0(&v26, v8 + 40) < 0 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  sub_6EBD8(&v25, v8 + 40, 3);
  v27 = v25;
  if ( sub_6EAC0(&v26, &v27) < 0 )
  {
    v21 = *(_DWORD *)(v8 + 52);
    v22 = *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 40);
    LODWORD(v27) = *(_DWORD *)(v8 + 48);
    *((_WORD *)a1 + 12) = v22;
    HIDWORD(v27) = v21;
    sub_6EBD8(&v25, &v26, v22);
    v28 = v25;
    sub_2CEF0(v8, (int)&v28);
    v23 = sub_6EAC0(v7, &v27);
    if ( v23 )
      v5 = 0;
    else
      v24 = v28;
    if ( v23 )
    {
      *((_WORD *)a1 + 12) = (_WORD)v5;
    }
    else
    {
      v5 = (_QWORD *)(&dword_0 + 1);
      v4 = v28;
    }
    if ( !v23 )
      v26 = v24;
  }
  else
  {
LABEL_5:
    sub_2CEF0(v8, (int)&v26);
    v5 = 0;
  }
LABEL_6:
  v9 = *(_QWORD *)(v8 + 64);
  v10 = *(_QWORD *)(v8 + 48);
  *((_WORD *)a1 + 10) = *(_WORD *)(v8 + 36);
  *a1 = v9;
  a1[1] = v10;
  if ( sub_6EAC0(&v26, v8 + 56) >= 0 )
  {
    v11 = *(_DWORD *)(v8 + 40);
    v12 = v11 - 86400;
    v13 = *(_WORD *)(v8 + 38) - *(_WORD *)(v8 + 36);
    *((_DWORD *)a1 + 4) = v11 - v4;
    *((_WORD *)a1 + 11) = v13;
    *((_BYTE *)a1 + 27) = *(_BYTE *)(v8 + 72);
    if ( v11 >= 0x15180 )
    {
      v15 = v4 < v11;
      if ( v4 < v12 )
        v15 = 0;
    }
    else
    {
      v14 = v4 >= v12;
      if ( v4 < v11 )
        v15 = v14 | 1;
      else
        v15 = v14;
    }
    if ( v15 )
    {
      v16 = v11 - 10;
      if ( v11 < v11 - 10 )
      {
        v20 = v4 >= v16;
        if ( v4 < v11 )
          v17 = v20 | 1;
        else
          v17 = v20;
      }
      else
      {
        v17 = v4 < v11;
        if ( v4 < v16 )
          v17 = 0;
      }
      if ( v17 )
        v18 = 3;
      else
        v18 = 2;
      *((_BYTE *)a1 + 26) = v18;
    }
    else
    {
      *((_BYTE *)a1 + 26) = 1;
    }
  }
  return v5;
}
