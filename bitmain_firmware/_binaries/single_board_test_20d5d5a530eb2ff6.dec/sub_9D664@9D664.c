bool __fastcall sub_9D664(int a1, _BYTE *a2, unsigned int a3, int a4, int a5)
{
  _BYTE *v6; // r5
  _BOOL4 result; // r0
  unsigned int v9; // [sp+4h] [bp-50h] BYREF
  int v10; // [sp+Ch] [bp-48h] BYREF
  _BYTE v11[68]; // [sp+10h] [bp-44h] BYREF

  v6 = a2;
  v10 = 0;
  v9 = a3;
  if ( !a2 )
  {
    v9 = 0;
    if ( !sub_A9244(a1, 0) )
      return 0;
    v6 = v11;
    if ( !sub_8B6E8(a1, (int)v11, 0x40u, &v9) )
      return 0;
  }
  if ( !sub_A915C(a1) )
    return 0;
  LOBYTE(v10) = -2;
  HIBYTE(v10) = v9;
  if ( !sub_A91B0(a1, &v10, 4) || !sub_A91B0(a1, v6, v9) )
    return 0;
  result = 1;
  if ( a4 )
  {
    if ( sub_A91B0(a1, a4, a5) )
      return sub_A91B0(a1, *(_DWORD *)(*(_DWORD *)(a1 + 108) + 4), *(_DWORD *)(*(_DWORD *)(a1 + 124) + 520) + 4) != 0;
    return 0;
  }
  return result;
}
