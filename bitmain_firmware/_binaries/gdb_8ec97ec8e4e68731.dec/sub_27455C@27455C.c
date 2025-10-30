_DWORD *__fastcall sub_27455C(_DWORD *a1, const char *a2, _BYTE *a3)
{
  FILE *v5; // r4
  size_t v6; // r7
  void *v7; // r8
  int v9; // r4
  void *v10; // r0
  FILE *stream; // [sp+4h] [bp-4h] BYREF

  if ( a3 && *a3 )
  {
    v9 = sub_31E27C(a3, &word_398974, a2);
    sub_967F0(&stream, v9, "r");
    v10 = (void *)v9;
    v5 = stream;
    free(v10);
  }
  else
  {
    sub_967F0(&stream, (int)a2, "r");
    v5 = stream;
  }
  if ( v5 )
  {
    if ( fseek(v5, 0, 2) == -1 )
      sub_258B04("seek to end of file");
    v6 = ftell(v5);
    rewind(v5);
    v7 = sub_93028(v6 + 1);
    if ( v6 != fread(v7, 1u, v6, v5) || ferror(v5) )
    {
      sub_946B0("Read error from \"%s\"", a2);
      *a1 = 0;
      free(v7);
    }
    else
    {
      *((_BYTE *)v7 + v6) = 0;
      *a1 = v7;
    }
    fclose(v5);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
