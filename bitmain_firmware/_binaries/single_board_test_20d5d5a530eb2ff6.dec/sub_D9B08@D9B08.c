int __fastcall sub_D9B08(_DWORD *a1, int a2)
{
  int v3; // r3

  if ( *a1 != 116 && *a1 != 408 )
    return 0;
  v3 = a1[7];
  if ( a2 < 0 )
    return a1[7];
  a1[7] = a2;
  return v3;
}
