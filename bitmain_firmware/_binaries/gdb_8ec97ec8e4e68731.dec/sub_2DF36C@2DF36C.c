int __fastcall sub_2DF36C(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 >= v3 )
  {
    if ( v2 > v3 )
      return 1;
    if ( *a1 >= *a2 )
    {
      if ( *a1 <= *a2 )
      {
        v4 = a1[2];
        v5 = a2[2];
        if ( v4 >= v5 )
          return v4 > v5;
        return -1;
      }
      return 1;
    }
  }
  return -1;
}
