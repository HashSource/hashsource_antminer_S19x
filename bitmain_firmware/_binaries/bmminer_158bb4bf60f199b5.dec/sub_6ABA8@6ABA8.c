_DWORD *__fastcall sub_6ABA8(const void *a1, size_t a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  void *v6; // r0
  void *v8; // r0

  v4 = malloc(8u);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = a2;
    v6 = malloc(a2);
    *v5 = v6;
    if ( v6 )
    {
      memcpy(v6, a1, a2);
    }
    else
    {
      v8 = v5;
      v5 = 0;
      free(v8);
    }
  }
  return v5;
}
