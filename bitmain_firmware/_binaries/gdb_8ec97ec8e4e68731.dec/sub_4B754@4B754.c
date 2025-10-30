int __fastcall sub_4B754(int a1, int a2, int *a3)
{
  FILE *v5; // r2
  int v6; // r4
  const char *v8; // r0
  int v9; // r3
  FILE *stream; // [sp+0h] [bp-6Ch] BYREF
  char s1[6]; // [sp+4h] [bp-68h] BYREF
  _BYTE v12[98]; // [sp+Ah] [bp-62h] BYREF

  sub_93170(s1, 100, "/proc/%d/status", a1);
  sub_967F0((int)&stream, (int)s1, "r");
  v5 = stream;
  if ( stream )
  {
    while ( 1 )
    {
      if ( !fgets(s1, 100, v5) )
      {
        v6 = 0;
        goto LABEL_7;
      }
      if ( !strncmp(s1, "State:", 6u) )
        break;
      v5 = stream;
    }
    v8 = (const char *)sub_9360C(v12);
    switch ( *v8 )
    {
      case 'T':
        if ( !strcmp(v8, "T (stopped)\n") )
          v9 = 1;
        else
          v9 = 2;
        break;
      case 'X':
        v9 = 3;
        break;
      case 'Z':
        v9 = 4;
        break;
      case 't':
        v9 = 2;
        break;
      default:
        v9 = 0;
        break;
    }
    *a3 = v9;
    v6 = 1;
  }
  else
  {
    if ( !a2 )
      return -1;
    sub_946B0("unable to open /proc file '%s'", s1);
    v6 = -1;
  }
LABEL_7:
  if ( stream )
    fclose(stream);
  return v6;
}
