int __fastcall sub_6E1F8(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  size_t v5; // r2
  char *v6; // r1
  char *v7; // r12
  int v8; // r0
  int v9; // t1

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 != 1 )
    v3 = 1;
  if ( v3 || *a2 != 1 || !sub_6DCDC(a1, a2[3], 1) )
    return -1;
  v5 = a2[3];
  v6 = (char *)a2[4];
  if ( v5 )
  {
    v5 *= 4;
    v7 = (char *)a2[4];
    do
    {
      v9 = *(_DWORD *)v7;
      v7 += 4;
      v8 = v9;
      if ( v9 )
      {
        if ( *(_DWORD *)(v8 + 4) != -1 )
          ++*(_DWORD *)(v8 + 4);
      }
    }
    while ( &v6[v5] != v7 );
  }
  memcpy((void *)(a1[4] + 4 * a1[3]), v6, v5);
  a1[3] += a2[3];
  return 0;
}
