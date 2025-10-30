int __fastcall sub_184CF8(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  unsigned int v5; // r0

  result = a1[48];
  if ( result )
  {
    v3 = sub_1DDB40(a1[2], a1[3], a1[4]);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = sub_1DFB3C(v3);
    result = sub_CF484(v4, v5);
    if ( result != 1 )
    {
      result = 0;
      a1[48] = 0;
    }
  }
  if ( a1[49] )
  {
    if ( !dword_489A28 )
      return result | 2;
  }
  return result;
}
