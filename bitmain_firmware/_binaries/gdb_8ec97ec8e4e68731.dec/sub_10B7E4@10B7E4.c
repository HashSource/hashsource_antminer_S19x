int __fastcall sub_10B7E4(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int v5; // r3

  v2 = *a1;
  if ( *a1 && *a2 )
  {
    v5 = v2 - *a2;
    if ( !v5 )
      return a1[1] - a2[1];
    return v5;
  }
  else
  {
    v3 = a1[1] - a2[1];
    if ( !v3 )
      return v2 - *a2;
    return v3;
  }
}
