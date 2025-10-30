char *__fastcall sub_85098(void *src)
{
  void *v1; // r3
  _DWORD *v3; // r0
  int v5; // r6
  void *v6; // r0

  v1 = (void *)*((_DWORD *)src + 20);
  if ( !v1 )
  {
    v5 = (*((_DWORD *)src + 25) << 6) + 132;
    v6 = malloc(v5);
    v1 = v6;
    if ( !v6 )
      sub_C610(v5);
    *((_DWORD *)src + 20) = v6;
  }
  v3 = memcpy(v1, src, 0x84u);
  memcpy(v3 + 33, *((const void **)src + 17), v3[25] << 6);
  return sub_7E680((char *)src);
}
