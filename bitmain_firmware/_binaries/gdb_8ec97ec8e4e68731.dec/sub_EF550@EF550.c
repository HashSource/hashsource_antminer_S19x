_DWORD *__fastcall sub_EF550(_DWORD *a1, int a2, int a3, const char *a4, int a5)
{
  char *v7; // r0
  const char *v8; // r0
  iconv_t v9; // r0

  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a5;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v7 = (char *)sub_9836C(4u);
  a1[4] = v7;
  a1[6] = v7 + 4;
  a1[5] = v7 + 4;
  v8 = (const char *)sub_EF454();
  v9 = iconv_open(v8, a4);
  *a1 = v9;
  if ( v9 == (iconv_t)-1 )
    sub_258B04("Converting character sets");
  return a1;
}
