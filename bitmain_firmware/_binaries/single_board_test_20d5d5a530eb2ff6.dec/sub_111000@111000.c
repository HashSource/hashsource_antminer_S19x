int __fastcall sub_111000(int a1)
{
  int v2; // r7
  signed int v3; // r6
  int v4; // r0
  int i; // r5
  int v7; // r7
  int v8; // r2
  unsigned int v9; // r8
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r3
  int v19; // [sp+4h] [bp-4h]

  v2 = sub_10C010(*(_DWORD *)(a1 + 80));
  v3 = v2 - 1;
  v4 = sub_10C01C(*(_DWORD **)(a1 + 80), v2 - 1);
  i = v4;
  if ( *(_DWORD *)(a1 + 132) )
  {
    v7 = 0;
    goto LABEL_6;
  }
  if ( (*(int (__fastcall **)(int, int, int))(a1 + 36))(a1, v4, v4) )
  {
    if ( v3 >= 0 )
      goto LABEL_32;
    return 1;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x80000) != 0 )
    goto LABEL_31;
  if ( v3 > 0 )
  {
    v3 = v2 - 2;
    v15 = *(_DWORD **)(a1 + 80);
    *(_DWORD *)(a1 + 92) = v2 - 2;
    v16 = sub_10C01C(v15, v2 - 2);
    if ( v2 - 2 < 0 )
      return 1;
    v7 = i;
    for ( i = v16; i == v7; i = sub_10C01C(*(_DWORD **)(a1 + 80), v3) )
    {
LABEL_32:
      if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x4000) == 0 || (v18 = *(_DWORD *)(i + 128), (v18 & 0x2000) == 0) )
      {
LABEL_31:
        v7 = i;
        goto LABEL_6;
      }
      if ( (v18 & 0x10) != 0 )
      {
        v9 = v3;
        v10 = sub_12051C(i, i, v18 << 18);
        v7 = i;
        if ( v10 )
        {
          *(_DWORD *)(a1 + 92) = v3;
          v9 = v3;
          v7 = i;
          v11 = i;
LABEL_15:
          *(_DWORD *)(a1 + 100) = v11;
          *(_DWORD *)(a1 + 96) = v10;
          if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
            return 0;
        }
LABEL_16:
        v12 = sub_10E89C(v7);
        if ( !v12 )
        {
          *(_DWORD *)(a1 + 92) = v9;
          v13 = v7;
          if ( !v7 )
            v13 = sub_10C01C(*(_DWORD **)(a1 + 80), v9);
          goto LABEL_39;
        }
        goto LABEL_17;
      }
      v7 = i;
      v12 = sub_10E89C(i);
      if ( !v12 )
      {
        v7 = i;
        v13 = i;
        *(_DWORD *)(a1 + 92) = v3;
LABEL_39:
        v14 = 6;
        goto LABEL_21;
      }
LABEL_17:
      if ( sub_1141AC(i, v12) > 0 )
        goto LABEL_6;
      *(_DWORD *)(a1 + 92) = v3;
      v13 = i;
      if ( !i )
        v13 = sub_10C01C(*(_DWORD **)(a1 + 80), v3);
      v14 = 7;
LABEL_21:
      *(_DWORD *)(a1 + 100) = v13;
      *(_DWORD *)(a1 + 96) = v14;
      if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
        return 0;
LABEL_6:
      if ( !sub_110E50(a1, i, v3) )
        return 0;
      *(_DWORD *)(a1 + 104) = v7;
      *(_DWORD *)(a1 + 100) = i;
      *(_DWORD *)(a1 + 92) = v3;
      if ( !(*(int (__fastcall **)(int, int))(a1 + 28))(1, a1) )
        return 0;
      if ( --v3 < 0 )
        return 1;
      v7 = i;
    }
    v9 = v3 + 1;
    v10 = sub_12051C(v7, i, v8);
    if ( v10 )
    {
      *(_DWORD *)(a1 + 92) = v9;
      v11 = v7;
      if ( !v7 )
      {
        v19 = v10;
        v11 = sub_10C01C(*(_DWORD **)(a1 + 80), v3 + 1);
        v10 = v19;
      }
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 92) = 0;
  v17 = i;
  if ( !i )
    v17 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
  *(_DWORD *)(a1 + 100) = v17;
  *(_DWORD *)(a1 + 96) = 21;
  if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
    goto LABEL_31;
  return 0;
}
