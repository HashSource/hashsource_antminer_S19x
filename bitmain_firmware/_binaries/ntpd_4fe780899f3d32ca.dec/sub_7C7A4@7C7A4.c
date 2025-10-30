int __fastcall sub_7C7A4(FILE *a1, int a2, const char *a3)
{
  const char *v6; // r6
  size_t v7; // r8
  int v8; // r8
  int v9; // r6
  char *v10; // r0
  char *v11; // r6

  if ( (*(_DWORD *)(a2 + 16) & 0x20) != 0 && *(unsigned __int16 *)(a2 + 8) == 0x8000 )
    v6 = *(const char **)(a2 + 56);
  else
    v6 = *(const char **)(a2 + 52);
  v7 = strlen(v6);
  fputs(v6, a1);
  if ( a3 || (unsigned __int16)*(_DWORD *)(a2 + 16) >> 12 == 5 )
  {
    v8 = 17 - v7;
    v9 = v8 - 1;
    fwrite(" = ", 1u, 3u, a1);
    if ( v8 > 0 )
    {
      do
      {
        --v9;
        fputc(32, a1);
      }
      while ( v9 != -1 );
    }
    if ( (unsigned __int16)*(_DWORD *)(a2 + 16) >> 12 == 5 )
    {
      fprintf(a1, "%d", a3);
    }
    else
    {
      while ( 1 )
      {
        v10 = strchr(a3, 10);
        v11 = v10;
        if ( !v10 )
          break;
        fwrite(a3, v10 - a3, 1u, a1);
        a3 = v11 + 1;
        fwrite("\\\n", 1u, 2u, a1);
      }
      fputs(a3, a1);
    }
  }
  return fputc(10, a1);
}
