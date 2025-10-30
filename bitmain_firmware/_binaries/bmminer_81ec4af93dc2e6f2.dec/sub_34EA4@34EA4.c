const char *__fastcall sub_34EA4(const char *a1)
{
  bool v2; // nf
  _DWORD *v4; // r0
  size_t v5; // r6
  size_t v6; // r6
  char *v7; // r4
  _BYTE v8[92]; // [sp+Ch] [bp-100h] BYREF
  char v9[164]; // [sp+68h] [bp-A4h] BYREF

  if ( !dword_B3C98 )
    dword_B3C98 = (int)_strdup(a1);
  v2 = dword_B3C9C - 9 < 0;
  ++dword_B3C9C;
  if ( !(v2 ^ __OFSUB__(dword_B3C9C, 10) | (dword_B3C9C == 10)) )
    return "Too many levels of JSON includes (limit 10) or a loop";
  v4 = (_DWORD *)sub_71604(a1, 0, v8);
  if ( v4 && !*v4 )
    return (const char *)sub_34F98();
  v5 = strlen(a1);
  v6 = v5 + strlen(v9) + 35;
  v7 = (char *)sub_3C908(v6, "bmminer.c", "load_config", 923);
  snprintf(v7, v6, "JSON decode of file '%s' failed\n %s", a1, v9);
  return v7;
}
