void __fastcall sub_2DD778(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  _DWORD *v14; // r4
  int v15; // r5
  void *v16; // r0

  v3 = a2[2];
  if ( v3 )
    sub_2F0164(v3);
  v5 = (void *)a2[5];
  if ( v5 )
    free(v5);
  v6 = (void *)a2[6];
  if ( v6 )
    free(v6);
  v7 = (void *)a2[7];
  if ( v7 )
    free(v7);
  v8 = (void *)a2[8];
  if ( v8 )
    free(v8);
  v9 = (void *)a2[9];
  if ( v9 )
    free(v9);
  v10 = (void *)a2[10];
  if ( v10 )
    free(v10);
  v11 = (void *)a2[11];
  if ( v11 )
    free(v11);
  v12 = (void *)a2[12];
  if ( v12 )
    free(v12);
  v13 = (void *)a2[13];
  if ( v13 )
    free(v13);
  v14 = (_DWORD *)*a1;
  if ( *a1 )
  {
    do
    {
      if ( (v14[5] & 4) != 0 )
      {
        v15 = v14[35];
        if ( !*(_DWORD *)(v15 + 72) || (free(*(void **)(v15 + 72)), (v14[5] & 4) != 0) )
        {
          v16 = *(void **)(v15 + 88);
          if ( v16 )
            free(v16);
        }
      }
      v14 = (_DWORD *)v14[3];
    }
    while ( v14 );
  }
}
