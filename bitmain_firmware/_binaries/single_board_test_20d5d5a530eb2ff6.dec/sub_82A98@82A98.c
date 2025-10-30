int __fastcall sub_82A98(_DWORD *a1)
{
  int v2; // r5
  int v4; // r3
  int v5; // r3
  _BYTE v6[4]; // [sp+14h] [bp-4h] BYREF

  if ( a1[9] || (v2 = sub_95464()) != 0 )
  {
    v2 = 1;
    a1[10] = 3;
    return v2;
  }
  v4 = a1[10];
  if ( (v4 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1[31] + 232) )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(a1[1] + 64))(a1) == -1 )
        return -1;
      v5 = a1[10];
    }
    else
    {
      if ( (v4 & 2) != 0 )
        goto LABEL_8;
      (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _BYTE *))(a1[1] + 56))(
        a1,
        0,
        0,
        0,
        0,
        0,
        v6);
      v5 = a1[10];
      if ( (v5 & 2) == 0 )
        return -1;
    }
    if ( v5 == 3 && !*(_DWORD *)(a1[31] + 232) )
      return 1;
    return v2;
  }
  a1[10] = v4 | 1;
  sub_83FEC(a1, 1, 0);
  if ( *(_DWORD *)(a1[31] + 232) )
    return -1;
  v4 = a1[10];
LABEL_8:
  if ( v4 == 3 )
    return 1;
  return v2;
}
