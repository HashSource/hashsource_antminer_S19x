void *__fastcall sub_27F0C(_DWORD *s)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)s[3];
  if ( v2 )
    free(v2);
  v3 = (void *)s[5];
  if ( v3 )
    free(v3);
  return memset(s, 0, 0x18u);
}
