_DWORD *__fastcall sub_74648(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp-10h]
  size_t v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return (_DWORD *)sub_74258(byte_9B50C);
  s = (char *)sub_7188C(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( sub_72780((int)s, v6) )
      return sub_74224(s, v6);
    else
      sub_718D4(s);
  }
  return (_DWORD *)v7;
}
