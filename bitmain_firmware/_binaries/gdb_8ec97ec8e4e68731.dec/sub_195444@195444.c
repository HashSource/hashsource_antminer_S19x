int __fastcall sub_195444(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  v2 = (void *)a1[17];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[20];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[18];
  if ( v4 )
    free(v4);
  v5 = (void *)a1[23];
  if ( v5 )
  {
    free(v5);
    a1[23] = 0;
  }
  v6 = (void *)a1[24];
  if ( v6 )
  {
    free(v6);
    a1[24] = 0;
  }
  v7 = (void *)a1[25];
  if ( v7 )
  {
    free(v7);
    a1[25] = 0;
  }
  v8 = (void *)a1[26];
  if ( v8 )
  {
    free(v8);
    a1[26] = 0;
  }
  v9 = (void *)a1[27];
  if ( v9 )
  {
    free(v9);
    a1[27] = 0;
  }
  return sub_323B84(a1[15]);
}
