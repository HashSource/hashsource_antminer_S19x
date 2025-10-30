int __fastcall sub_6323C(_DWORD *a1, int a2, int a3)
{
  size_t n; // [sp+10h] [bp-14h] BYREF
  int v9; // [sp+14h] [bp-10h]
  void *s; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v11 = sub_651D4(a1);
  if ( !v11 )
    return 0;
  sub_62E48(a1, a3);
  if ( a1[15] == 125 )
    return v11;
  while ( 1 )
  {
    if ( a1[15] != 256 )
    {
      sub_61A8C(a3, a1, 8, "string or '}' expected");
      goto LABEL_24;
    }
    s = (void *)sub_63108(a1, &n);
    if ( !s )
      return 0;
    if ( memchr(s, 0, n) )
    {
      sub_640B8(s);
      sub_61A8C(a3, a1, 13, "NUL byte in object key not supported");
      goto LABEL_24;
    }
    if ( (a2 & 1) != 0 && sub_652F0(v11, s) )
    {
      sub_640B8(s);
      sub_61A8C(a3, a1, 14, "duplicate object key");
      goto LABEL_24;
    }
    sub_62E48(a1, a3);
    if ( a1[15] != 58 )
    {
      sub_640B8(s);
      sub_61A8C(a3, a1, 8, "':' expected");
      goto LABEL_24;
    }
    sub_62E48(a1, a3);
    v9 = sub_635C8(a1, a2, a3);
    if ( !v9 || sub_65360(v11, s, v9) )
    {
      sub_640B8(s);
      goto LABEL_24;
    }
    sub_640B8(s);
    sub_62E48(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_62E48(a1, a3);
  }
  if ( a1[15] == 125 )
    return v11;
  sub_61A8C(a3, a1, 8, "'}' expected");
LABEL_24:
  sub_61A24(v11);
  return 0;
}
