_BYTE *__fastcall sub_2CBDD0(int a1, char *s)
{
  size_t v4; // r6
  _BYTE *v5; // r0
  _BYTE *v6; // r4

  v4 = strlen(s);
  v5 = (_BYTE *)sub_2ACBF4(a1, v4 + 2);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 46;
    v5[1] = 122;
    memcpy(v5 + 2, s + 1, v4);
  }
  return v6;
}
