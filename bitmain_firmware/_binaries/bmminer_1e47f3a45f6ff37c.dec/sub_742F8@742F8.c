int __fastcall sub_742F8(_DWORD *a1, char a2, int a3)
{
  int v4; // r3
  unsigned int v8; // [sp+14h] [bp-10h]
  char *v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  if ( ++a1[14] > 0x800u )
  {
    sub_727DC(a3, a1, 2, "maximum parsing depth reached");
    return 0;
  }
  v4 = a1[15];
  if ( v4 == 257 )
  {
    v10 = sub_77C3C(a1[16], a1[17]);
  }
  else if ( v4 > 257 )
  {
    if ( v4 == 259 )
    {
      v10 = sub_78090();
    }
    else if ( v4 < 259 )
    {
      v10 = sub_77DF4();
    }
    else if ( v4 == 260 )
    {
      v10 = sub_780B0();
    }
    else
    {
      if ( v4 != 261 )
        goto LABEL_29;
      v10 = sub_780D0();
    }
  }
  else if ( v4 == 91 )
  {
    v10 = sub_741D4(a1, a2, a3);
  }
  else
  {
    if ( v4 <= 91 )
    {
      if ( v4 == -1 )
      {
        sub_727DC(a3, a1, 8, "invalid token");
        return 0;
      }
LABEL_29:
      sub_727DC(a3, a1, 8, "unexpected token");
      return 0;
    }
    if ( v4 == 123 )
    {
      v10 = sub_73F70(a1, a2, a3);
    }
    else
    {
      if ( v4 != 256 )
        goto LABEL_29;
      v9 = (char *)a1[16];
      v8 = a1[17];
      if ( (a2 & 0x10) == 0 && memchr(v9, 0, v8) )
      {
        sub_727DC(a3, a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
        return 0;
      }
      v10 = sub_776F4(v9, v8);
      a1[16] = 0;
      a1[17] = 0;
    }
  }
  if ( !v10 )
    return 0;
  --a1[14];
  return v10;
}
