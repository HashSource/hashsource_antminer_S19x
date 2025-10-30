int __fastcall sub_63F74(_DWORD *a1, int a2, int a3)
{
  size_t n; // [sp+10h] [bp-14h] BYREF
  int v9; // [sp+14h] [bp-10h]
  void *s; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v11 = sub_65ED4(a1);
  if ( !v11 )
    return 0;
  sub_63B78(a1, a3);
  if ( a1[15] == 125 )
    return v11;
  while ( 1 )
  {
    if ( a1[15] != 256 )
    {
      sub_627E0(a3, a1, 8, "string or '}' expected");
      goto LABEL_24;
    }
    s = (void *)sub_63E44(a1, &n);
    if ( !s )
      return 0;
    if ( memchr(s, 0, n) )
    {
      sub_64DEC(s);
      sub_627E0(a3, a1, 13, "NUL byte in object key not supported");
      goto LABEL_24;
    }
    if ( (a2 & 1) != 0 && sub_65FEC(v11, s) )
    {
      sub_64DEC(s);
      sub_627E0(a3, a1, 14, "duplicate object key");
      goto LABEL_24;
    }
    sub_63B78(a1, a3);
    if ( a1[15] != 58 )
    {
      sub_64DEC(s);
      sub_627E0(a3, a1, 8, "':' expected");
      goto LABEL_24;
    }
    sub_63B78(a1, a3);
    v9 = sub_642FC(a1, a2, a3);
    if ( !v9 || sub_6605C(v11, s, v9) )
    {
      sub_64DEC(s);
      goto LABEL_24;
    }
    sub_64DEC(s);
    sub_63B78(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_63B78(a1, a3);
  }
  if ( a1[15] == 125 )
    return v11;
  sub_627E0(a3, a1, 8, "'}' expected");
LABEL_24:
  sub_6277C(v11);
  return 0;
}
