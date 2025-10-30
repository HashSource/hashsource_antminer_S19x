int __fastcall sub_11C4FC(int result, int *a2)
{
  int v2; // r3
  _DWORD *v3; // r5
  int i; // r4
  int v6; // r3

  v2 = *(_DWORD *)(result + 32);
  v3 = (_DWORD *)result;
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      result = *(_DWORD *)(v3[7] + 4 * i);
      if ( *(_DWORD *)(result + 24) )
      {
        result = sub_11C4FC();
        v2 = v3[8];
      }
    }
  }
  v6 = *a2 + v3[10];
  *a2 = v6;
  *a2 = v3[12] + v6;
  return result;
}
