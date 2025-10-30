char *__fastcall sub_86634(void *src)
{
  void *v1; // r3
  _DWORD *v3; // r0

  v1 = (void *)*((_DWORD *)src + 20);
  if ( !v1 )
  {
    v1 = sub_7FBE0((*((_DWORD *)src + 25) << 6) + 132);
    *((_DWORD *)src + 20) = v1;
  }
  v3 = memcpy(v1, src, 0x84u);
  memcpy(v3 + 33, *((const void **)src + 17), v3[25] << 6);
  return sub_7FAF0((char *)src);
}
