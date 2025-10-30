int __fastcall sub_73F70(_DWORD *a1, int a2, int a3)
{
  unsigned int v8; // [sp+10h] [bp-14h] BYREF
  int v9; // [sp+14h] [bp-10h]
  char *v10; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v11 = sub_75ED4();
  if ( !v11 )
    return 0;
  sub_73B74(a1, a3);
  if ( a1[15] == 125 )
    return v11;
  while ( 1 )
  {
    if ( a1[15] != 256 )
    {
      sub_727DC(a3, a1, 8, "string or '}' expected");
      goto LABEL_24;
    }
    v10 = (char *)sub_73E40(a1, &v8);
    if ( !v10 )
      return 0;
    if ( memchr(v10, 0, v8) )
    {
      sub_74DE8(v10);
      sub_727DC(a3, a1, 13, "NUL byte in object key not supported");
      goto LABEL_24;
    }
    if ( (a2 & 1) != 0 && sub_75FEC(v11, v10) )
    {
      sub_74DE8(v10);
      sub_727DC(a3, a1, 14, "duplicate object key");
      goto LABEL_24;
    }
    sub_73B74(a1, a3);
    if ( a1[15] != 58 )
    {
      sub_74DE8(v10);
      sub_727DC(a3, a1, 8, "':' expected");
      goto LABEL_24;
    }
    sub_73B74(a1, a3);
    v9 = sub_742F8(a1, a2, a3);
    if ( !v9 || sub_7605C(v11, v10, v9) )
    {
      sub_74DE8(v10);
      goto LABEL_24;
    }
    sub_74DE8(v10);
    sub_73B74(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_73B74(a1, a3);
  }
  if ( a1[15] == 125 )
    return v11;
  sub_727DC(a3, a1, 8, "'}' expected");
LABEL_24:
  sub_72778(v11);
  return 0;
}
