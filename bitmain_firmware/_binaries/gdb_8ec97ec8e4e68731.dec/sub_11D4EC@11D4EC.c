int __fastcall sub_11D4EC(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  if ( !*(_DWORD *)(dword_4872D8 + 436) )
    return 0;
  v3 = *(_DWORD *)(dword_4872D8 + 436);
  v6[0] = a2;
  v6[1] = a1;
  v4 = sub_323E3C(v3, v6);
  if ( v4 )
    return *(_DWORD *)(v4 + 8);
  else
    return 0;
}
