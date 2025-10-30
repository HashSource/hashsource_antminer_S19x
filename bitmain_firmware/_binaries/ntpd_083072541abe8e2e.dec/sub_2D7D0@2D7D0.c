int __fastcall sub_2D7D0(_QWORD *a1, int a2, time_t *a3)
{
  unsigned int v4; // r7
  _DWORD *v5; // r10
  int v6; // r9
  __int64 v7; // r2
  __int64 v8; // r4
  unsigned int v9; // r3
  __int16 v10; // r1
  __int16 v11; // r0
  __int16 v12; // r0
  _BOOL4 v13; // r1
  _BOOL4 v14; // r0
  int v15; // r2
  _BOOL4 v16; // r7
  int v17; // r7
  char v18; // r3
  int v20; // r12
  int v21; // r3
  int v22; // r2
  __int64 v23; // [sp+0h] [bp-2Ch] BYREF
  __int64 v24; // [sp+8h] [bp-24h] BYREF
  __int64 v25; // [sp+10h] [bp-1Ch] BYREF
  __int64 v26; // [sp+18h] [bp-14h] BYREF

  v4 = a2;
  sub_658E8((int)&v23, a2, a3);
  v24 = v23;
  v5 = sub_2D0F4(0);
  memset(a1, 0, 0x20u);
  if ( sub_6DAF4(&v24, v5 + 16) < 0 )
    goto LABEL_22;
  if ( sub_6DAF4(&v24, v5 + 10) < 0 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  sub_6DC24(&v23, v5 + 10, 3);
  v25 = v23;
  if ( sub_6DAF4(&v24, &v25) < 0 )
  {
    v20 = v5[10];
    v21 = v5[13];
    LODWORD(v25) = v5[12];
    v22 = (__int16)(v25 - v20);
    HIDWORD(v25) = v21;
    *((_WORD *)a1 + 12) = v22;
    sub_6DC24(&v23, &v24, v22);
    v26 = v23;
    sub_2CB8C((int)v5, (int)&v26);
    if ( sub_6DAF4(v5 + 16, &v25) )
    {
      v6 = 0;
      *((_WORD *)a1 + 12) = 0;
    }
    else
    {
      v6 = 1;
      v4 = v26;
      v24 = v26;
    }
  }
  else
  {
LABEL_22:
    sub_2CB8C((int)v5, (int)&v24);
    v6 = 0;
  }
LABEL_5:
  v7 = *((_QWORD *)v5 + 6);
  v8 = *((_QWORD *)v5 + 8);
  *((_WORD *)a1 + 10) = *((_WORD *)v5 + 18);
  a1[1] = v7;
  *a1 = v8;
  if ( sub_6DAF4(&v24, v5 + 14) >= 0 )
  {
    v9 = v5[10];
    v10 = *((_WORD *)v5 + 18);
    v11 = *((_WORD *)v5 + 19);
    *((_DWORD *)a1 + 4) = v9 - v4;
    v12 = v11 - v10;
    v13 = v9 - 86400 <= v4;
    *((_WORD *)a1 + 11) = v12;
    v14 = v4 < v9;
    if ( v9 - 86400 > v9 )
      v15 = v13 || v14;
    else
      v15 = v13 && v14;
    if ( !v15 )
      v9 = 1;
    *((_BYTE *)a1 + 27) = *((_BYTE *)v5 + 72);
    if ( v15 )
    {
      v16 = v9 - 10 <= v4;
      if ( v9 - 10 > v9 )
        v17 = v14 || v16;
      else
        v17 = v16 && v14;
      if ( v17 )
        v18 = 3;
      else
        v18 = 2;
      *((_BYTE *)a1 + 26) = v18;
    }
    else
    {
      *((_BYTE *)a1 + 26) = v9;
    }
  }
  return v6;
}
