int __fastcall sub_122DC8(int a1, void *s, unsigned int a3, int a4, unsigned __int8 **a5)
{
  unsigned int v6; // r4
  unsigned int v9; // r5
  unsigned int v10; // r2
  size_t v12; // r0

  if ( s )
  {
    v6 = a3;
    if ( a3 )
    {
      if ( a3 > 1 )
      {
        v9 = a3 - 1;
        if ( !memchr(s, 0, a3 - 1) )
        {
          v10 = v9;
          goto LABEL_6;
        }
        return -2;
      }
      if ( memchr(s, 0, 1u) )
        return -2;
      v10 = 1;
    }
    else
    {
      v12 = strlen((const char *)s);
      v6 = v12;
      if ( v12 > 1 )
      {
        v10 = v12 - 1;
LABEL_6:
        if ( *((_BYTE *)s + v10) )
          v10 = v6;
        return sub_121918(a1, (char *)s, v10, a4, 2, a5);
      }
      v10 = v12;
    }
    return sub_121918(a1, (char *)s, v10, a4, 2, a5);
  }
  return -2;
}
