void __fastcall sub_8CF0(_DWORD *s)
{
  _DWORD *i; // r0

  for ( i = (_DWORD *)s[1]; i; i = (_DWORD *)s[1] )
  {
    s[1] = *i;
    free(i);
  }
  memset(s, 0, *((unsigned __int16 *)s + 7) + 20);
  free(s);
}
