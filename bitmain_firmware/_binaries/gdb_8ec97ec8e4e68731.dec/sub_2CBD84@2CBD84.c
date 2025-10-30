_BYTE *__fastcall sub_2CBD84(int a1, char *s)
{
  size_t v4; // r6
  _BYTE *v5; // r0
  _BYTE *v6; // r4

  v4 = strlen(s);
  v5 = (_BYTE *)sub_2ACBF4(a1, v4);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 46;
    memcpy(v5 + 1, s + 2, v4 - 1);
  }
  return v6;
}
