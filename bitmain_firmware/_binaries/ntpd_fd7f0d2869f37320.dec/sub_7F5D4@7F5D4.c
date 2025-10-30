size_t __fastcall sub_7F5D4(_DWORD *a1, unsigned __int16 *a2, const char **a3, const char **a4)
{
  int v5; // r1
  size_t result; // r0
  const char *v7; // r0
  const char **v8; // [sp+4h] [bp-Ch]

  if ( (*a1 & 2) == 0 )
  {
    v7 = *a4;
    return fputs(v7, (FILE *)option_usage_fp);
  }
  v5 = *a2;
  if ( (unsigned __int8)v5 > 0x7Fu || (dword_A0784[(unsigned __int8)v5] & 0x4000) == 0 )
  {
    if ( (*a1 & 0x1001) == 0x1001 )
    {
      v8 = a3;
      fputc(32, (FILE *)option_usage_fp);
      a3 = v8;
    }
    v7 = *a3;
    return fputs(v7, (FILE *)option_usage_fp);
  }
  result = fprintf((FILE *)option_usage_fp, "   -%c", v5);
  if ( (*a1 & 0x1001) == 0x1001 )
    return fwrite(", ", 1u, 2u, (FILE *)option_usage_fp);
  return result;
}
