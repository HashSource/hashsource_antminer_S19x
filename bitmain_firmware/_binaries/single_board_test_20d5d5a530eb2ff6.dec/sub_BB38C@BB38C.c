int __fastcall sub_BB38C(_DWORD *a1, char *a2, size_t a3)
{
  size_t v3; // r4
  unsigned int v7; // r5
  int v8; // r0
  size_t v9; // r8
  bool v10; // cf
  char *v11; // r0
  int v12; // r0

  if ( a1[33] == -1 )
    return 0;
  v3 = a3;
  if ( !a3 )
    return 1;
  v7 = sub_D8904(*a1);
  v8 = a1[33];
  if ( v8 > 0 )
  {
    v9 = v7 - v8;
    v10 = v7 - v8 >= v3;
    v11 = (char *)a1 + v8 + 100;
    if ( v10 )
      v9 = v3;
    memcpy(v11, a2, v9);
    v3 -= v9;
    a1[33] += v9;
    if ( !v3 )
      return 1;
    a2 += v9;
    if ( sub_D8910(*a1, a1 + 17, a1 + 25, v7) <= 0 )
      return 0;
  }
  if ( v7 < v3 )
  {
    for ( v3 -= v7; ; v3 -= v7 )
    {
      v12 = sub_D8910(*a1, a1 + 17, a2, v7);
      a2 += v7;
      if ( v12 <= 0 )
        break;
      if ( v7 >= v3 )
        goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  memcpy(a1 + 25, a2, v3);
  a1[33] = v3;
  return 1;
}
