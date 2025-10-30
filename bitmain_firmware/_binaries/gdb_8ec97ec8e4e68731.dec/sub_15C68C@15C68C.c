void __fastcall sub_15C68C(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  if ( a1 )
  {
    v2 = (void *)a1[2];
    if ( v2 )
      free(v2);
    v3 = (void *)a1[3];
    if ( v3 )
      free(v3);
    sub_349268(a1);
  }
}
