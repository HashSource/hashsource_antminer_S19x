void *__fastcall sub_70744(int a1, _DWORD *s, int a3, int a4)
{
  void *result; // r0
  int v9; // r1
  int v10; // r2

  result = memset(s, 0, 0x18u);
  *s = a1;
  if ( a1 == 2 )
  {
    s[1] = *(_DWORD *)(a3 + 4);
    return result;
  }
  if ( a1 != 10 )
    sub_6FC54((int)"./../lib/isc/unix/interfaceiter.c", 143, 2, "0");
  result = *(void **)(a3 + 12);
  v9 = *(_DWORD *)(a3 + 16);
  v10 = *(_DWORD *)(a3 + 20);
  s[1] = *(_DWORD *)(a3 + 8);
  s[2] = result;
  s[3] = v9;
  s[4] = v10;
  if ( *(_DWORD *)(a3 + 24) )
    return (void *)sub_75C6C(s);
  if ( (*(_DWORD *)(a3 + 8) & 0xC0FF) == 0x80FE )
  {
    if ( HIBYTE(*(_WORD *)(a3 + 10)) | (unsigned __int16)(*(_WORD *)(a3 + 10) << 8) )
    {
      result = (void *)sub_75C6C(s);
      *((_BYTE *)s + 6) = 0;
      *((_BYTE *)s + 7) = 0;
      return result;
    }
    if ( a4 )
    {
      result = (void *)if_nametoindex(a4);
      if ( result )
        return (void *)sub_75C6C(s);
    }
  }
  return result;
}
