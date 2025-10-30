unsigned int __fastcall sub_2CD04(unsigned int result, int a2, unsigned int a3)
{
  unsigned int v5; // [sp+18h] [bp-14h]
  unsigned int i; // [sp+1Ch] [bp-10h]

  v5 = result;
  for ( i = 0; a3 >> 2 > i; ++i )
  {
    result = sub_1F2DC(*(_DWORD *)(a2 + 4 * i));
    *(_DWORD *)(v5 + 4 * i) = result;
  }
  return result;
}
