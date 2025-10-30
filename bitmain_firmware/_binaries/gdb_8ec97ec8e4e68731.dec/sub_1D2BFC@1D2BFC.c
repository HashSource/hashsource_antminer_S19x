int __fastcall sub_1D2BFC(void **a1, void **a2)
{
  char *v2; // r4
  char *v3; // r6
  int v4; // r7
  unsigned int v5; // r2
  void **v6; // r5
  void **v7; // r12
  void *v8; // lr
  char *v9; // r7
  void **v10; // r3
  char *v11; // r3
  unsigned int v12; // r6
  void ***v13; // r2
  char *v14; // r4

  v2 = (char *)*a1;
  v3 = (char *)a1[1];
  v4 = v3 - (_BYTE *)*a1;
  v5 = v4 >> 3;
  if ( v4 >> 3 == ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3 )
    return 0;
  v6 = a1;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFF )
      sub_33D01C(a1, a2);
    a1 = (void **)sub_9836C(v3 - (_BYTE *)*a1);
    v8 = *v6;
    v7 = a1;
  }
  else
  {
    v7 = 0;
    v8 = *a1;
  }
  v9 = (char *)v7 + v4;
  if ( v2 == v3 )
  {
    v10 = v7;
  }
  else
  {
    v11 = v2 + 8;
    v12 = v3 - (v2 + 8);
    v13 = (void ***)v7;
    v14 = &v2[v12 + 16];
    do
    {
      if ( v13 )
      {
        a1 = (void **)*((_DWORD *)v11 - 2);
        a2 = (void **)*((_DWORD *)v11 - 1);
      }
      v11 += 8;
      if ( v13 )
      {
        *v13 = a1;
        v13[1] = a2;
      }
      v13 += 2;
    }
    while ( v14 != v11 );
    v10 = &v7[2 * (v12 >> 3) + 2];
  }
  *v6 = v7;
  v6[1] = v10;
  v6[2] = v9;
  if ( v8 )
    sub_339E64(v8);
  return 1;
}
