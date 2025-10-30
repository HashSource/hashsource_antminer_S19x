int sub_10E1C()
{
  FILE *v0; // r4
  size_t v1; // r0
  int v2; // r0
  FILE *v3; // r4
  int result; // r0
  int v5; // [sp+4h] [bp-44h] BYREF
  char s[64]; // [sp+8h] [bp-40h] BYREF

  memset(s, 0, sizeof(s));
  sprintf(s, "/sys/class/gpio/gpio%d", 943);
  if ( access(s, 0) )
  {
    v0 = (FILE *)fopen64("/sys/class/gpio/export", "w");
    if ( !v0 )
    {
      puts("Open read gpio/export");
      return 1;
    }
    sprintf(s, "%d", 943);
    v1 = strlen(s);
    if ( fwrite(s, v1, 1u, v0) != 1 )
      puts("File Write Error!");
    fclose(v0);
  }
  sprintf(s, "/sys/class/gpio/gpio%d/value", 943);
  v2 = fopen64(s, "r");
  v3 = (FILE *)v2;
  if ( v2 )
  {
    _isoc99_fscanf(v2, "%d", &v5);
    fclose(v3);
    result = v5;
    if ( v5 )
      return 1;
  }
  else
  {
    puts("Open read recovery button failure");
    return 1;
  }
  return result;
}
