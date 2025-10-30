int __fastcall sub_41388(int result, int a2)
{
  int v2; // r4
  int v3; // r2
  int i; // r3
  int v5; // t1

  if ( a2 > 127 )
  {
    a2 = 128;
  }
  else if ( a2 <= 0 )
  {
    return result;
  }
  v2 = 7360414;
  v3 = result - 2;
  for ( i = 0; i < a2; ++i )
  {
    v5 = *(unsigned __int16 *)(v2 + 2);
    v2 += 2;
    result = v5;
    *(_WORD *)(v3 + 2) = v5;
    v3 += 2;
  }
  return result;
}
