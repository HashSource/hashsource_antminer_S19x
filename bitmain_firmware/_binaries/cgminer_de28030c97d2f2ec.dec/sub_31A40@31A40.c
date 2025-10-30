const char *__fastcall sub_31A40(const char *a1)
{
  size_t v2; // r4
  _BYTE v5[92]; // [sp+10h] [bp-114h] BYREF
  char v6[160]; // [sp+6Ch] [bp-B8h] BYREF
  char *v7; // [sp+10Ch] [bp-18h]
  size_t maxlen; // [sp+110h] [bp-14h]
  _DWORD *v9; // [sp+114h] [bp-10h]

  if ( !dword_87E9C )
    dword_87E9C = (int)strdup(a1);
  if ( ++dword_8813C > 10 )
    return "Too many levels of JSON includes (limit 10) or a loop";
  v9 = (_DWORD *)sub_64B1C(a1, 0, v5);
  if ( v9 && !*v9 )
  {
    byte_88138 = 1;
    return sub_3152C((int)v9, 1);
  }
  else
  {
    v2 = strlen(a1);
    maxlen = v2 + strlen(v6) + 35;
    v7 = (char *)sub_20210(maxlen, "cgminer.c", "load_config", 2186);
    snprintf(v7, maxlen, "JSON decode of file '%s' failed\n %s", a1, v6);
    return v7;
  }
}
