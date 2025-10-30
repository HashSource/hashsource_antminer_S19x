_DWORD *__fastcall sub_66E28(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp-10h]
  size_t v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return (_DWORD *)sub_66A38(byte_747C8);
  s = (char *)sub_64070(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( sub_64F60((int)s, v6) )
      return sub_66A04(s, v6);
    else
      sub_640B8(s);
  }
  return (_DWORD *)v7;
}
