unsigned int __fastcall sub_8CD60(_DWORD *a1)
{
  int v1; // r3
  unsigned __int8 v2; // r1
  unsigned int v3; // r4
  unsigned int v4; // r3
  unsigned int v6; // r3

  v1 = a1[285];
  if ( v1 && (v2 = *(_BYTE *)(v1 + 492) - 1, v2 <= 3u) )
  {
    v3 = a1[322];
    v4 = 512 << v2;
    if ( v3 <= 512 << v2 )
    {
      v4 = a1[323];
      if ( v4 >= v3 )
        return a1[322];
    }
    return v4;
  }
  else
  {
    v6 = a1[323];
    if ( v6 >= a1[322] )
      return a1[322];
    return v6;
  }
}
