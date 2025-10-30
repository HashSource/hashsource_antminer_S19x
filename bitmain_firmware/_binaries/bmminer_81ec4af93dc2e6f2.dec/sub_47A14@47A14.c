unsigned int __fastcall sub_47A14(int a1)
{
  int v2; // r6
  unsigned int v3; // r5
  unsigned int result; // r0
  int v5; // r8
  unsigned int v6; // r6

  v2 = *(unsigned __int8 *)(a1 + 2);
  v3 = *(_BYTE *)a1 & 0xF;
  sub_265B0();
  if ( v3 > 3 )
    return sub_49D18(a1);
  v5 = *(unsigned __int8 *)(a1 + 1);
  if ( !sub_266F0(v3) )
    return sub_49D18(a1);
  v6 = sub_8C490(v2);
  result = sub_26540();
  if ( result <= v6 )
    return sub_49D18(a1);
  if ( v5 != 208 )
  {
    if ( v5 == 224 )
      return sub_47900(v3, v6, *(_DWORD *)(a1 + 4), dword_530F00 + 8);
    return sub_49D18(a1);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x88) != 0 )
    *(_BYTE *)(*(_DWORD *)(dword_530F00 + 4) + (v3 << 8) + v6) = 1;
  return result;
}
