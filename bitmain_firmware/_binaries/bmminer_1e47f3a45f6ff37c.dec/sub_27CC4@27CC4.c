int __fastcall sub_27CC4(int a1)
{
  int i; // r4
  int v3; // r5
  int result; // r0

  for ( i = 0; i != 4; ++i )
  {
    v3 = (unsigned __int8)i;
    result = sub_26C0C(i);
    if ( result )
      result = sub_796B0(v3, 1, (unsigned __int8)dword_B3048, a1);
  }
  return result;
}
