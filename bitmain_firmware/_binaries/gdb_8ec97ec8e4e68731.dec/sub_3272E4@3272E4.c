char *sub_3272E4()
{
  char *result; // r0
  char *v1; // r0
  const char *v2; // r5
  size_t v3; // r6
  size_t v4; // r0
  int v5; // r7
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0

  if ( dword_48FEE0 )
    return (char *)dword_48FEE0;
  v1 = getenv("TMPDIR");
  v2 = v1;
  if ( v1 && !access(v1, 7) )
  {
    getenv("TMP");
LABEL_6:
    getenv("TEMP");
    goto LABEL_7;
  }
  v7 = getenv("TMP");
  v2 = v7;
  if ( v7 && !access(v7, 7) )
    goto LABEL_6;
  v8 = getenv("TEMP");
  v2 = v8;
  if ( !v8 || access(v8, 7) )
  {
    if ( access("/tmp", 7) )
    {
      if ( access("/var/tmp", 7) )
      {
        if ( access("/usr/tmp", 7) )
        {
          if ( access("/tmp", 7) )
          {
            v2 = ".";
            v5 = 2;
            v4 = 3;
            v3 = 1;
          }
          else
          {
            v2 = "/tmp";
            v3 = strlen("/tmp");
            v4 = v3 + 2;
            v5 = v3 + 1;
          }
        }
        else
        {
          v3 = strlen("/usr/tmp");
          v2 = "/usr/tmp";
          v4 = v3 + 2;
          v5 = v3 + 1;
        }
      }
      else
      {
        v3 = strlen("/var/tmp");
        v2 = "/var/tmp";
        v4 = v3 + 2;
        v5 = v3 + 1;
      }
    }
    else
    {
      v2 = "/tmp";
      v5 = 5;
      v4 = 6;
      v3 = 4;
    }
    goto LABEL_8;
  }
LABEL_7:
  v3 = strlen(v2);
  v4 = v3 + 2;
  v5 = v3 + 1;
LABEL_8:
  v6 = (char *)sub_93028(v4);
  result = strcpy(v6, v2);
  result[v3] = 47;
  dword_48FEE0 = (int)result;
  result[v5] = 0;
  return result;
}
