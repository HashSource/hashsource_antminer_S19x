const char *__fastcall sub_2B890(const char *a1)
{
  bool v2; // nf
  _DWORD *v4; // r0
  size_t v5; // r6
  size_t v6; // r6
  char *v7; // r4
  _BYTE v8[92]; // [sp+Ch] [bp-100h] BYREF
  char v9[164]; // [sp+68h] [bp-A4h] BYREF

  if ( !dword_68EF4 )
    dword_68EF4 = (int)_strdup(a1);
  v2 = dword_68EF8 - 9 < 0;
  ++dword_68EF8;
  if ( !(v2 ^ __OFSUB__(dword_68EF8, 10) | (dword_68EF8 == 10)) )
    return "Too many levels of JSON includes (limit 10) or a loop";
  v4 = (_DWORD *)sub_475B0(a1, 0, v8);
  if ( v4 && !*v4 )
  {
    byte_68EFC = 1;
    return (const char *)sub_2B98C();
  }
  else
  {
    v5 = strlen(a1);
    v6 = v5 + strlen(v9) + 35;
    v7 = (char *)sub_229BC(v6, "cgminer.c", "load_config", 2124);
    snprintf(v7, v6, "JSON decode of file '%s' failed\n %s", a1, v9);
    return v7;
  }
}
