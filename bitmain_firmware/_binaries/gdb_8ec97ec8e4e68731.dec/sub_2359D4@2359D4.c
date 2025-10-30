void __fastcall sub_2359D4(_DWORD *a1)
{
  void *v2; // r0

  if ( a1 )
  {
    v2 = (void *)a1[2];
    if ( v2 )
      free(v2);
    free(a1);
  }
}
