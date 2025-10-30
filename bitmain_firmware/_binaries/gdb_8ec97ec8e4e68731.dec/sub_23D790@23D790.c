void __fastcall sub_23D790(int *ptr)
{
  _DWORD *v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // r0
  void *v6; // r0

  v2 = (_DWORD *)dword_48A4D4;
  v3 = *ptr;
  v4 = ptr[1];
  v5 = ptr[2];
  if ( dword_48A4D4 )
  {
    while ( v3 != v2[2] || v2[3] != v4 || v5 != v2[4] )
    {
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        goto LABEL_10;
    }
    v6 = (void *)v2[82];
    v2[81] = 0;
    if ( v6 )
      free(v6);
    v2[82] = 0;
  }
LABEL_10:
  free(ptr);
}
