_DWORD *__fastcall sub_77B14(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp-10h]
  size_t v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return (_DWORD *)sub_77728(byte_9ED10);
  s = (char *)sub_74DA0(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( sub_75C6C((int)s, v6) )
      return sub_776F4(s, v6);
    else
      sub_74DE8(s);
  }
  return (_DWORD *)v7;
}
