const char *__fastcall sub_3552C(const char *a1)
{
  _DWORD *v3; // r0
  size_t v4; // r5
  size_t v5; // r5
  char *v6; // r4
  _BYTE v7[92]; // [sp+Ch] [bp-100h] BYREF
  char v8[164]; // [sp+68h] [bp-A4h] BYREF

  if ( !dword_B6A08 )
    dword_B6A08 = (int)_strdup(a1);
  if ( ++dword_B6A0C <= 10 )
  {
    v3 = (_DWORD *)sub_74B18(a1, 0, v7);
    if ( v3 && !*v3 )
    {
      byte_B6A10 = 1;
      return (const char *)sub_35620();
    }
    else
    {
      v4 = strlen(a1);
      v5 = v4 + strlen(v8) + 35;
      v6 = (char *)sub_3D10C(v5, "bmminer.c", "load_config", 923);
      snprintf(v6, v5, "JSON decode of file '%s' failed\n %s", a1, v8);
      return v6;
    }
  }
  else
  {
    return "Too many levels of JSON includes (limit 10) or a loop";
  }
}
