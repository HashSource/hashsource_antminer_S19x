int __fastcall sub_EF160(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)a1;
  if ( v2 != (void *)-1 )
    iconv_close(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    sub_339E64(v3);
  return a1;
}
