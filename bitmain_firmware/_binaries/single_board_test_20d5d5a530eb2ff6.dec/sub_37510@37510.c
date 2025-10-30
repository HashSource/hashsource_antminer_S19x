int sub_37510()
{
  _DWORD *v0; // r4
  int v1; // r5
  int v2; // r0
  _DWORD *v3; // r2
  int v4; // r3
  int v5; // t1
  _DWORD s[73]; // [sp+4h] [bp-124h] BYREF

  memset(s, 0, sizeof(s));
  sub_6DD44(s);
  if ( !s[0] )
    return -1;
  v0 = s;
  v1 = 0;
  while ( 1 )
  {
    v2 = v0[2];
    if ( v2 )
      break;
LABEL_8:
    ++v1;
    v0 += 18;
    if ( v1 == s[0] )
      return -1;
  }
  if ( v0[3] != 3 )
  {
    v3 = v0 + 3;
    v4 = 0;
    while ( ++v4 != v2 )
    {
      v5 = v3[1];
      ++v3;
      if ( v5 == 3 )
        return 0;
    }
    goto LABEL_8;
  }
  return 0;
}
