int __fastcall sub_EEC28(int a1)
{
  const char *v2; // r5
  char *v3; // r0
  const char *v4; // r4
  const char *v5; // r7
  iconv_t v6; // r0
  iconv_t v7; // r0
  int result; // r0

  v2 = off_46C0F8[0];
  if ( !strcmp(off_46C0F8[0], "auto") )
    v2 = off_46C0F4[0];
  v3 = sub_EEBE8();
  v4 = off_46C100[0];
  v5 = v3;
  if ( !strcmp(off_46C100[0], "auto") )
    v4 = (const char *)((int (__fastcall *)(int))loc_16DC68)(a1);
  v6 = iconv_open(v4, v2);
  if ( v6 == (iconv_t)-1 )
    sub_946E0("Cannot convert between character sets `%s' and `%s'", v4, v2);
  iconv_close(v6);
  v7 = iconv_open(v5, v2);
  if ( v7 == (iconv_t)-1 )
    sub_946E0("Cannot convert between character sets `%s' and `%s'", v5, v2);
  result = iconv_close(v7);
  dword_478990 = 0;
  return result;
}
