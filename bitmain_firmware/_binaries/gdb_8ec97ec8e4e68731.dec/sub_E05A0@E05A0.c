void __fastcall sub_E05A0(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = (void *)a1[12];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[13];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[14];
  if ( v4 )
    free(v4);
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
}
