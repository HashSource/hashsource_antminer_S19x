const char **__fastcall sub_2B8F94(const char **result, int a2, const char *a3)
{
  int v4; // r4
  const char **v5; // r6
  const char **v6; // r4
  const char *v7; // [sp+4h] [bp-4h]

  v4 = (int)result;
  if ( a2 )
  {
    if ( !result )
    {
      v7 = a3;
      sub_2A6BBC("elf32-arm.c", 6893);
      a3 = v7;
    }
    v5 = sub_2AD864(v4, a3);
    if ( !v5 )
      sub_2A6BBC("elf32-arm.c", 6896);
    result = (const char **)sub_2ACBF4(v4, a2);
    v6 = result;
    if ( v5[9] == (const char *)a2 )
    {
      v5[27] = (const char *)result;
    }
    else
    {
      result = (const char **)sub_2A6BBC("elf32-arm.c", 6900);
      v5[27] = (const char *)v6;
    }
  }
  else if ( result )
  {
    result = sub_2AD864((int)result, a3);
    if ( result )
      result[5] = (const char *)((unsigned int)result[5] | 0x8000);
  }
  return result;
}
