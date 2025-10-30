void __fastcall sub_11570(_DWORD *ptr)
{
  void *v2; // r0
  _DWORD *v3; // r4

  v2 = (void *)ptr[1];
  if ( v2 )
  {
    v3 = ptr;
    do
    {
      v3 += 4;
      free(v2);
      v2 = (void *)v3[1];
    }
    while ( v2 );
  }
  free(ptr);
}
