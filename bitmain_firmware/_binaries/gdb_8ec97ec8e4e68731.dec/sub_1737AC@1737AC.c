int __fastcall sub_1737AC(_DWORD *a1)
{
  _DWORD *v1; // r7
  int v2; // r4
  char *v3; // r3
  int v4; // r2
  bool v5; // zf
  int v6; // r8
  int v7; // r5
  int v8; // r6
  int v9; // r3
  int v11; // r0
  int v12; // r5
  __int64 v13; // [sp+0h] [bp-10h] BYREF
  __int64 v14; // [sp+8h] [bp-8h] BYREF

  v1 = (_DWORD *)sub_171258(a1);
  v2 = sub_17374C(v1);
  if ( v2 )
    return 1;
  v3 = (char *)v1[6];
  v4 = *v3;
  v5 = v4 == 13;
  if ( v4 != 13 )
    v5 = v4 == 2;
  if ( v5 )
  {
    v6 = *((__int16 *)v3 + 2);
    if ( v6 == 1 )
    {
      v11 = *(_DWORD *)(*((_DWORD *)v3 + 6) + 12);
      if ( **(_BYTE **)(v11 + 24) == 12 )
      {
        v12 = sub_171258(*((_DWORD **)v3 + 5));
        sub_17195C(*(_DWORD **)(*(_DWORD *)(v1[6] + 24) + 12), &v13, &v14);
        if ( v14 == v13 )
          return sub_1737AC(v12) != 0;
        return v2;
      }
      if ( v4 == 3 )
        return sub_1737AC(v11);
      if ( v4 != 4 )
        return v2;
      goto LABEL_10;
    }
    if ( v4 == 3 )
      return v2;
    goto LABEL_8;
  }
  if ( v4 != 3 )
  {
LABEL_8:
    if ( v4 != 4 )
      return v2;
    v6 = *((__int16 *)v3 + 2);
    if ( v6 > 0 )
    {
LABEL_10:
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        ++v7;
        v9 = *((_DWORD *)v3 + 6) + v8;
        v8 += 24;
        if ( !sub_1737AC(*(_DWORD *)(v9 + 12)) )
          break;
        if ( v7 == v6 )
          return 1;
        v3 = (char *)v1[6];
      }
      return v2;
    }
    return 1;
  }
  if ( *((_WORD *)v3 + 2) == 1 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)v3 + 6) + 12);
    return sub_1737AC(v11);
  }
  return v2;
}
