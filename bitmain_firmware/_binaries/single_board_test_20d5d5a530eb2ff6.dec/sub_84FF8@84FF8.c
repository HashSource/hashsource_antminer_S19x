int __fastcall sub_84FF8(int a1, const char *a2)
{
  size_t v4; // r4
  int v5; // r5
  int v6; // r2
  int v8; // [sp+Ch] [bp-4h] BYREF
  _BYTE v9[1024]; // [sp+10h] [bp+0h] BYREF

  v8 = 0;
  while ( 1 )
  {
    v5 = sub_E9D40(&v8, a2);
    if ( !v5 )
      break;
    v4 = strlen(a2);
    if ( v4 + strlen((const char *)v5) + 2 > 0x400 )
    {
      sub_D0048(20, 215, 270, "ssl/ssl_cert.c", 726);
LABEL_9:
      v5 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)(sub_B5560(v9, 1024, "%s/%s", a2, (const char *)v5) - 1) > 0x3FE || !sub_84F24(a1, (int)v9) )
      goto LABEL_9;
  }
  v6 = *_errno_location();
  if ( v6 )
  {
    sub_D0048(2, 10, v6, "ssl/ssl_cert.c", 741);
    sub_D1240(3, "OPENSSL_DIR_read(&ctx, '", a2);
    sub_D0048(20, 215, 2, "ssl/ssl_cert.c", 743);
  }
  else
  {
    v5 = 1;
  }
LABEL_10:
  if ( v8 )
    sub_E9DCC(&v8);
  return v5;
}
