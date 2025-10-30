_DWORD *__fastcall sub_67B14(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp-10h]
  size_t v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return (_DWORD *)sub_67728(byte_759D8);
  s = (char *)sub_64DA4(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( sub_65C6C((int)s, v6) )
      return sub_676F4(s, v6);
    else
      sub_64DEC(s);
  }
  return (_DWORD *)v7;
}
