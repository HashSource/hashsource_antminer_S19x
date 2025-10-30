_DWORD *__fastcall sub_6821C(_DWORD *a1)
{
  char *v2; // r5
  char *v3; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  bool v6; // zf
  char *v7; // r5
  char *v8; // r7
  _DWORD *v9; // r4
  _DWORD *v10; // r0
  void **v11; // r4
  void **v12; // r7
  void *v13; // r5
  void *v14; // t1
  void *v15; // r0
  void *v16; // r0

  v2 = (char *)a1[18];
  v3 = (char *)a1[19];
  if ( v2 != v3 )
  {
    v4 = v2 + 8;
    do
    {
      v5 = (_DWORD *)*(v4 - 2);
      v2 += 24;
      v6 = v5 == v4;
      v4 += 6;
      if ( !v6 )
        sub_339E64(v5);
    }
    while ( v3 != v2 );
    v3 = (char *)a1[18];
  }
  if ( v3 )
    sub_339E64(v3);
  v7 = (char *)a1[15];
  v8 = (char *)a1[16];
  if ( v7 != v8 )
  {
    v9 = v7 + 8;
    do
    {
      v10 = (_DWORD *)*(v9 - 2);
      v7 += 24;
      v6 = v10 == v9;
      v9 += 6;
      if ( !v6 )
        sub_339E64(v10);
    }
    while ( v8 != v7 );
    v8 = (char *)a1[15];
  }
  if ( v8 )
    sub_339E64(v8);
  v11 = (void **)a1[11];
  v12 = (void **)a1[12];
  if ( v11 != v12 )
  {
    do
    {
      v14 = *v11++;
      v13 = v14;
      v15 = v14;
      if ( v14 )
      {
        sub_C0960(v15);
        sub_33AC04(v13);
      }
    }
    while ( v12 != v11 );
    v12 = (void **)a1[11];
  }
  if ( v12 )
    sub_339E64(v12);
  v16 = (void *)a1[8];
  if ( v16 )
    sub_339E64(v16);
  return a1;
}
