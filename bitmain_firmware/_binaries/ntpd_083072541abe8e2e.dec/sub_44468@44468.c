int __fastcall sub_44468(int a1, const char *a2)
{
  size_t v2; // r4
  size_t v4; // r0
  const void *v5; // r1
  size_t v6; // r1

  v2 = (size_t)a2;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = (const void *)v2;
    if ( v4 >= 0x7F )
      v2 = 127;
    else
      v2 = v4;
    memcpy((void *)(a1 + 56), v5, v2);
    v6 = v2;
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)(a1 + 184) = v6;
  *(_BYTE *)(a1 + v2 + 56) = 0;
  return 0;
}
