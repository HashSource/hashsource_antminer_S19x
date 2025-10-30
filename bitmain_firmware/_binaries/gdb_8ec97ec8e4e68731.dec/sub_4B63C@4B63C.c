int __fastcall sub_4B63C(int a1, char *s, int a3)
{
  size_t v6; // r4
  FILE *v7; // r2
  int v8; // r4
  FILE *stream; // [sp+0h] [bp-6Ch] BYREF
  char sa[104]; // [sp+4h] [bp-68h] BYREF

  v6 = strlen(s);
  snprintf(sa, 0x64u, "/proc/%d/status", a1);
  sub_967F0((int)&stream, (int)sa, "r");
  v7 = stream;
  if ( stream )
  {
    while ( fgets(sa, 100, v7) )
    {
      if ( !strncmp(sa, s, v6) && sa[v6] == 58 )
      {
        v8 = strtol(&sa[v6 + 1], 0, 10);
        goto LABEL_8;
      }
      v7 = stream;
    }
  }
  else
  {
    if ( !a3 )
      return -1;
    sub_946B0("unable to open /proc file '%s'", sa);
  }
  v8 = -1;
LABEL_8:
  if ( stream )
    fclose(stream);
  return v8;
}
