int sub_10E88()
{
  int v2; // [sp+4h] [bp-10h] BYREF
  FILE *s; // [sp+8h] [bp-Ch]
  FILE *stream; // [sp+Ch] [bp-8h]

  stream = 0;
  if ( !sub_10FA8("/sys/class/gpio/gpio943") )
  {
    s = fopen("/sys/class/gpio/export", "w");
    if ( !s )
    {
      puts("Open read gpio/export");
      return -1;
    }
    if ( fwrite("943", 3u, 1u, s) != 1 )
      puts("File Write Error!");
    fclose(s);
  }
  stream = fopen("/sys/class/gpio/gpio943/value", "r");
  if ( stream )
  {
    _isoc99_fscanf(stream, "%d", &v2);
    fclose(stream);
    return v2 != 0;
  }
  else
  {
    puts("Open read recovery button failure");
    return -1;
  }
}
