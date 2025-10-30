int __fastcall sub_70DE4(_DWORD *a1, char a2, int a3)
{
  int v4; // r3
  unsigned int v8; // [sp+14h] [bp-10h]
  char *v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  if ( ++a1[14] > 0x800u )
  {
    sub_6F2A8(a3, a1, 2, "maximum parsing depth reached");
    return 0;
  }
  v4 = a1[15];
  if ( v4 == 257 )
  {
    v10 = sub_74774(a1[16], a1[17]);
  }
  else if ( v4 > 257 )
  {
    if ( v4 == 259 )
    {
      v10 = sub_74C1C();
    }
    else if ( v4 < 259 )
    {
      v10 = sub_74930();
    }
    else if ( v4 == 260 )
    {
      v10 = sub_74C3C();
    }
    else
    {
      if ( v4 != 261 )
        goto LABEL_29;
      v10 = sub_74C5C();
    }
  }
  else if ( v4 == 91 )
  {
    v10 = sub_70CBC(a1, a2, a3);
  }
  else
  {
    if ( v4 <= 91 )
    {
      if ( v4 == -1 )
      {
        sub_6F2A8(a3, a1, 8, "invalid token");
        return 0;
      }
LABEL_29:
      sub_6F2A8(a3, a1, 8, "unexpected token");
      return 0;
    }
    if ( v4 == 123 )
    {
      v10 = sub_70A58(a1, a2, a3);
    }
    else
    {
      if ( v4 != 256 )
        goto LABEL_29;
      v9 = (char *)a1[16];
      v8 = a1[17];
      if ( (a2 & 0x10) == 0 && memchr(v9, 0, v8) )
      {
        sub_6F2A8(a3, a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
        return 0;
      }
      v10 = sub_74224(v9, v8);
      a1[16] = 0;
      a1[17] = 0;
    }
  }
  if ( !v10 )
    return 0;
  --a1[14];
  return v10;
}
