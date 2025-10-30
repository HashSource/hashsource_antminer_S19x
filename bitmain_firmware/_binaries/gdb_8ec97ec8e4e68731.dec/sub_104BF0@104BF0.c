void __fastcall sub_104BF0(int a1, _DWORD *ptr)
{
  char *v3; // r7
  int v4; // r5
  char *i; // r4
  void *v6; // r0
  void *v7; // r0

  v3 = (char *)ptr[9];
  if ( v3 )
  {
    v4 = ptr[10];
    for ( i = &v3[16 * v4]; --v4 >= 0; i -= 16 )
    {
      v6 = (void *)*((_DWORD *)i - 4);
      if ( v6 )
        free(v6);
      v7 = (void *)*((_DWORD *)i - 2);
      if ( v7 )
        free(v7);
    }
    free(v3);
  }
  free(ptr);
}
