size_t __fastcall sub_7E1AC(int *a1, unsigned __int16 *a2, const char **a3, const char **a4)
{
  int v5; // r12
  int v6; // r0
  int v7; // r3
  FILE *v8; // r1
  const char *v9; // r0
  size_t result; // r0
  const char **v11; // [sp+4h] [bp-Ch]

  v5 = *a1;
  v6 = option_usage_fp;
  if ( (v5 & 2) == 0 )
  {
    v8 = (FILE *)option_usage_fp;
    v9 = *a4;
    return fputs(v9, v8);
  }
  v7 = *a2;
  if ( (v7 & 0x80) != 0 || (dword_9F184[(unsigned __int8)v7] & 0x4000) == 0 )
  {
    if ( (~v5 & 0x1001) == 0 )
    {
      v11 = a3;
      fputc(32, (FILE *)option_usage_fp);
      v6 = option_usage_fp;
      a3 = v11;
    }
    v8 = (FILE *)v6;
    v9 = *a3;
    return fputs(v9, v8);
  }
  result = fprintf((FILE *)option_usage_fp, "   -%c", v7);
  if ( (~*a1 & 0x1001) == 0 )
    return fwrite(", ", 1u, 2u, (FILE *)option_usage_fp);
  return result;
}
