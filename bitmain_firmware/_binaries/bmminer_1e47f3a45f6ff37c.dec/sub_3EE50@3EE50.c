int __fastcall sub_3EE50(int result, int a2)
{
  unsigned int v2; // r3
  int v3; // r12
  unsigned int v4; // r2
  int v5; // r1
  char v6; // t1

  v2 = a2 - 1;
  if ( a2 != 1 )
  {
    v3 = result - 1;
    v4 = 0;
    result += a2;
    v5 = v3;
    do
    {
      ++v4;
      v6 = *(_BYTE *)++v3;
      --v2;
      *(_BYTE *)++v5 = *(_BYTE *)(result - 1);
      *(_BYTE *)--result = v6;
    }
    while ( v4 < v2 );
  }
  return result;
}
