void __fastcall sub_4A274(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  if ( a1 )
  {
    v2 = (_DWORD *)a1[8];
    if ( v2 )
    {
      v3 = (void *)v2[2];
      if ( v3 )
        free(v3);
      v4 = (void *)v2[3];
      if ( v4 )
        free(v4);
      sub_33AC04(v2);
    }
    v5 = (void *)a1[10];
    if ( v5 )
      free(v5);
    free(a1);
  }
}
