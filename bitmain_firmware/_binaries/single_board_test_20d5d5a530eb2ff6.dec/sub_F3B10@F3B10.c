unsigned int __fastcall sub_F3B10(_DWORD *a1)
{
  int v1; // r1
  unsigned int v2; // r3
  unsigned int v3; // r2
  unsigned int result; // r0
  unsigned int v5; // r2

  v1 = a1[12];
  v2 = a1[8];
  v3 = a1[10];
  if ( v1 && !a1[63] )
  {
    v5 = v3 + v1;
    result = (v2 + (int)v2 / 2) >> 3;
    if ( result < v5 )
      return v5;
  }
  else
  {
    result = v2 >> 3;
    if ( v2 >> 3 < v3 )
      return v3;
  }
  return result;
}
