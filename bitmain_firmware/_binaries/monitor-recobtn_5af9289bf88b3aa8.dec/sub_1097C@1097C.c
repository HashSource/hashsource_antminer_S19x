int sub_1097C()
{
  FILE *v0; // r4
  int result; // r0
  int v2; // r0
  FILE *v3; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( access("/sys/class/gpio/gpio921", 0) )
  {
    v0 = (FILE *)fopen64("/sys/class/gpio/export", "w");
    if ( v0 )
    {
      if ( fwrite("921", 3u, 1u, v0) != 1 )
        puts("File Write Error!");
      fclose(v0);
      return -1;
    }
    else
    {
      puts("Open read gpio/export");
      return -1;
    }
  }
  else
  {
    v2 = fopen64("/sys/class/gpio/gpio921/value", "r");
    v3 = (FILE *)v2;
    if ( v2 )
    {
      _isoc99_fscanf(v2, "%d", &v4);
      fclose(v3);
      result = v4;
      if ( v4 )
        return 1;
    }
    else
    {
      puts("Open read recovery button failure");
      return -1;
    }
  }
  return result;
}
