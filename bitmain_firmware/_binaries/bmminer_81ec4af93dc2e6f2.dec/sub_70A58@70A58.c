int __fastcall sub_70A58(_DWORD *a1, int a2, int a3)
{
  unsigned int v8; // [sp+10h] [bp-14h] BYREF
  int v9; // [sp+14h] [bp-10h]
  char *v10; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v11 = sub_729F4();
  if ( !v11 )
    return 0;
  sub_70664(a1, a3);
  if ( a1[15] == 125 )
    return v11;
  while ( 1 )
  {
    if ( a1[15] != 256 )
    {
      sub_6F2A8(a3, a1, 8, "string or '}' expected");
      goto LABEL_24;
    }
    v10 = (char *)sub_70924(a1, &v8);
    if ( !v10 )
      return 0;
    if ( memchr(v10, 0, v8) )
    {
      sub_718D4(v10);
      sub_6F2A8(a3, a1, 13, "NUL byte in object key not supported");
      goto LABEL_24;
    }
    if ( (a2 & 1) != 0 && sub_72B10(v11, v10) )
    {
      sub_718D4(v10);
      sub_6F2A8(a3, a1, 14, "duplicate object key");
      goto LABEL_24;
    }
    sub_70664(a1, a3);
    if ( a1[15] != 58 )
    {
      sub_718D4(v10);
      sub_6F2A8(a3, a1, 8, "':' expected");
      goto LABEL_24;
    }
    sub_70664(a1, a3);
    v9 = sub_70DE4(a1, a2, a3);
    if ( !v9 || sub_72B80(v11, v10, v9) )
    {
      sub_718D4(v10);
      goto LABEL_24;
    }
    sub_718D4(v10);
    sub_70664(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_70664(a1, a3);
  }
  if ( a1[15] == 125 )
    return v11;
  sub_6F2A8(a3, a1, 8, "'}' expected");
LABEL_24:
  sub_6F240(v11);
  return 0;
}
