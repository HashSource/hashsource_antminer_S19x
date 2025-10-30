char *__fastcall sub_2119C(const char *a1, _DWORD *a2)
{
  char *v5; // [sp+20h] [bp-Ch]
  size_t v6; // [sp+24h] [bp-8h]

  v6 = strlen(a1);
  v5 = (char *)sub_20210(v6 + 9, "util.c", "ser_string", 994);
  if ( v6 > 0xFC )
  {
    if ( v6 >= 0x10000 )
    {
      *v5 = -2;
      *(_DWORD *)(v5 + 1) = sub_1F920(v6);
      sub_2BEFC(v5 + 5, a1, v6, "util.c", "ser_string", 1017);
      *a2 = v6 + 5;
    }
    else
    {
      *v5 = -3;
      *(_WORD *)(v5 + 1) = ((_WORD)v6 << 8) | BYTE1(v6);
      sub_2BEFC(v5 + 3, a1, v6, "util.c", "ser_string", 1007);
      *a2 = v6 + 3;
    }
  }
  else
  {
    *v5 = v6;
    sub_2BEFC(v5 + 1, a1, v6, "util.c", "ser_string", 998);
    *a2 = v6 + 1;
  }
  return v5;
}
