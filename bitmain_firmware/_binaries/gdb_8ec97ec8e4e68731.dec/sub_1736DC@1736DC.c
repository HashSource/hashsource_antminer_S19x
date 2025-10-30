int __fastcall sub_1736DC(_DWORD *a1)
{
  int result; // r0
  int v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r0
  unsigned int v5; // r3
  bool v6; // cc

  result = sub_171258(a1);
  if ( result )
  {
    v2 = **(char **)(result + 24);
    v3 = v2 & 0xFFFFFFFB;
    v4 = (unsigned __int8)v2 - 5;
    v5 = (unsigned __int8)v2 - 20;
    v6 = v5 > 1;
    if ( v5 > 1 )
      v6 = v4 > 1;
    result = !v6;
    if ( v3 == 8 )
      return result | 1;
  }
  return result;
}
