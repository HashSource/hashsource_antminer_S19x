int __fastcall sub_122E40(int a1, void *s, unsigned int a3, int a4)
{
  unsigned int v5; // r4
  unsigned int v8; // r5
  unsigned int v9; // r2
  size_t v11; // r0

  if ( s )
  {
    v5 = a3;
    if ( a3 )
    {
      if ( a3 > 1 )
      {
        v8 = a3 - 1;
        if ( !memchr(s, 0, a3 - 1) )
        {
          v9 = v8;
          goto LABEL_6;
        }
        return -2;
      }
      if ( memchr(s, 0, 1u) )
        return -2;
      v9 = 1;
    }
    else
    {
      v11 = strlen((const char *)s);
      v5 = v11;
      if ( v11 > 1 )
      {
        v9 = v11 - 1;
LABEL_6:
        if ( *((_BYTE *)s + v9) )
          v9 = v5;
        return sub_121918(a1, (char *)s, v9, a4, 1, 0);
      }
      v9 = v11;
    }
    return sub_121918(a1, (char *)s, v9, a4, 1, 0);
  }
  return -2;
}
