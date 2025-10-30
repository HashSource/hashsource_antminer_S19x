int __fastcall sub_2F9E40(int result, _DWORD **a2)
{
  _DWORD *v2; // r10
  _BOOL4 v3; // r3
  _DWORD *v4; // r11
  int v5; // r6
  _DWORD *v6; // r7
  _DWORD *v7; // r8
  int v8; // r5
  int v9; // r6
  int i; // r4
  int v11; // t1
  int v12; // r3
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  void *v16; // r0
  int v17; // r0
  int v18; // r0
  void *v19; // r0
  void *v20; // r0
  void *v21; // r0
  void *v22; // r0
  void *v23; // r0
  void *v24; // r0
  void *v25; // r0
  void *v26; // r0
  void *v27; // r0
  void *v28; // r0

  v2 = *a2;
  v3 = *a2 == 0;
  if ( !result )
    v3 = 1;
  if ( !v3 )
  {
    v4 = (_DWORD *)*v2;
    if ( *v2 )
    {
      do
      {
        v5 = v4[7];
        v6 = (_DWORD *)v4[17];
        v7 = (_DWORD *)v4[20];
        v8 = v5 - 4;
        v9 = v5 + 480;
        do
        {
          v11 = *(_DWORD *)(v8 + 4);
          v8 += 4;
          for ( i = v11; i; i = *(_DWORD *)(i + 20) )
            free(*(void **)(i + 16));
        }
        while ( v8 != v9 );
        v12 = v4[16];
        if ( v12 )
        {
          free(*(void **)(v12 + 20));
          free(*(void **)(v4[16] + 24));
        }
        while ( v6 )
        {
          v13 = (void *)v6[3];
          if ( v13 )
          {
            free(v13);
            v6[3] = 0;
          }
          v14 = (void *)v6[2];
          if ( v14 )
          {
            free(v14);
            v6[2] = 0;
          }
          v6 = (_DWORD *)*v6;
        }
        v15 = (void *)v4[18];
        if ( v15 )
        {
          free(v15);
          v4[18] = 0;
        }
        while ( v7 )
        {
          v16 = (void *)v7[1];
          if ( v16 )
          {
            free(v16);
            v7[1] = 0;
          }
          v7 = (_DWORD *)*v7;
        }
        v4 = (_DWORD *)*v4;
      }
      while ( v4 );
    }
    v17 = v2[31];
    if ( v17 )
      sub_2AAA1C(v17);
    v18 = v2[32];
    if ( v18 )
      sub_2AAA1C(v18);
    v19 = (void *)v2[16];
    if ( v19 )
      free(v19);
    v20 = (void *)v2[18];
    if ( v20 )
      free(v20);
    v21 = (void *)v2[20];
    if ( v21 )
      free(v21);
    v22 = (void *)v2[22];
    if ( v22 )
      free(v22);
    v23 = (void *)v2[24];
    if ( v23 )
      free(v23);
    v24 = (void *)v2[14];
    if ( v24 )
      free(v24);
    if ( v2[35] )
      sub_2AC9DC(v2[6]);
    v25 = (void *)v2[10];
    if ( v25 )
      free(v25);
    v26 = (void *)v2[12];
    if ( v26 )
      free(v26);
    v27 = (void *)v2[27];
    if ( v27 )
      free(v27);
    v28 = (void *)v2[29];
    if ( v28 )
      free(v28);
    result = v2[9];
    if ( result )
      return sub_2AC9DC(result);
  }
  return result;
}
