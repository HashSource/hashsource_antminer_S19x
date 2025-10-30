int __fastcall sub_11D88(int a1, char *s, size_t maxlen, int a4)
{
  int v8; // r4
  int *v10; // r0
  int *v11; // r8
  bool v12; // zf
  FILE *v13; // r7
  char *v14; // r0
  FILE *v15; // r5
  char *v16; // r0

  snprintf(s, maxlen, "/dev/i2c/%d", a1);
  s[maxlen - 1] = 0;
  v8 = open64(s, 2);
  if ( v8 >= 0 )
    return v8;
  v10 = _errno_location();
  v11 = v10;
  v12 = *v10 == 2;
  if ( *v10 != 2 )
    v12 = *v10 == 20;
  if ( v12 )
  {
    sprintf(s, "/dev/i2c-%d", a1);
    v8 = open64(s, 2);
  }
  if ( ((a4 == 0) & ((unsigned int)v8 >> 31)) == 0 )
    return v8;
  if ( *v11 != 2 )
  {
    v13 = (FILE *)stderr;
    v14 = strerror(*v11);
    fprintf(v13, "Error: Could not open file `%s': %s\n", s, v14);
    if ( *v11 == 13 )
      fwrite("Run as root?\n", 1u, 0xDu, (FILE *)stderr);
    return v8;
  }
  v15 = (FILE *)stderr;
  v16 = strerror(2);
  fprintf(v15, "Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\n", a1, a1, v16);
  return v8;
}
