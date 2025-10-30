unsigned int __fastcall sub_2E22C(unsigned int result, int a2)
{
  unsigned int v3; // [sp+10h] [bp-14h]
  int i; // [sp+14h] [bp-10h]

  v3 = result;
  for ( i = 0; i <= 15; ++i )
  {
    result = sub_2DF70(*(_DWORD *)(a2 + 4 * i));
    *(_DWORD *)(v3 + 4 * i) = result;
  }
  return result;
}
