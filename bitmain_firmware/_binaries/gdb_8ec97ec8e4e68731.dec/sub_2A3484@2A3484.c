int __fastcall sub_2A3484(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int result; // r0
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v7[0] = a3;
  v7[1] = a4;
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 160) + 8) )
    return 0;
  v5 = sub_323E3C(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 8), v7);
  if ( !v5 )
    return 0;
  result = *(_DWORD *)(v5 + 8);
  *(_BYTE *)(result + 43) = *(_BYTE *)(result + 43) & 0xDF | (32 * ((*(_BYTE *)(a1 + 43) & 0x20) != 0));
  return result;
}
