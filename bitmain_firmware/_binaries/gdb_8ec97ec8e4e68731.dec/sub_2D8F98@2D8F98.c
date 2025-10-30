_BYTE *__fastcall sub_2D8F98(int a1, void *s, size_t a3)
{
  size_t v5; // r4
  _BYTE *v6; // r0
  _BYTE *v7; // r0
  _BYTE *v8; // r6

  v5 = a3;
  v6 = memchr(s, 0, a3);
  if ( v6 )
    v5 = v6 - (_BYTE *)s;
  v7 = (_BYTE *)sub_2ACBF4(a1, v5 + 1);
  v8 = v7;
  if ( v7 )
  {
    memcpy(v7, s, v5);
    v8[v5] = 0;
  }
  return v8;
}
