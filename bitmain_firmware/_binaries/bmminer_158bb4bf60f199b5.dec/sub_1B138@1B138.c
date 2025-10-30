int __fastcall sub_1B138(int a1, int a2, int a3, int a4)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      result = sub_75CC4((unsigned __int8)i, a2, a3, a4);
  }
  return result;
}
