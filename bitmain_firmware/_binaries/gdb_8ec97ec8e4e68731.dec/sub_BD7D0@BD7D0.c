int __fastcall sub_BD7D0(int a1, int a2, int *a3, int a4)
{
  int v6; // r4
  int v7; // r2
  int v8; // r1
  int result; // r0
  int v11; // r3
  int v12; // r3
  int v13[3]; // [sp+8h] [bp-Ch] BYREF

  v6 = 24 * a4;
  v7 = *(_DWORD *)(*a3 + 24) + 24 * a4;
  v8 = *(_DWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 0xE) == 4 )
  {
    result = sub_C0B5C(a1, v8, *(_DWORD *)v7, 0);
    v11 = *a3;
    *(_DWORD *)a2 = 1;
    v12 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + v6 + 12);
    *(_BYTE *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = v12;
  }
  else
  {
    result = sub_21D6B0(v13, v8, 0, 1, 0);
    if ( v13[0] )
      return sub_BD334(a1, a2, v13[0]);
    else
      *(_BYTE *)(a2 + 8) = 1;
  }
  return result;
}
