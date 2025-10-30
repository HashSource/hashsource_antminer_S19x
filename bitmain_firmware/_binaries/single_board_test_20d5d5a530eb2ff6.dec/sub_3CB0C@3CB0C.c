DIR *sub_3CB0C()
{
  DIR *result; // r0
  DIR *v1; // r5
  struct dirent *v2; // r0
  const char *d_name; // r4
  char s[132]; // [sp+8h] [bp-84h] BYREF

  result = opendir(off_21C0F4);
  if ( result )
  {
    v1 = result;
    while ( 1 )
    {
      v2 = readdir(v1);
      if ( !v2 )
        break;
      while ( 1 )
      {
        d_name = v2->d_name;
        if ( strstr(v2->d_name, ".lz4") || strstr(d_name, ".64") )
          break;
        v2 = readdir(v1);
        if ( !v2 )
          return (DIR *)closedir(v1);
      }
      snprintf(s, 0x80u, "%s%s", off_21C0F4, d_name);
      remove(s);
      unlink(s);
    }
    return (DIR *)closedir(v1);
  }
  return result;
}
