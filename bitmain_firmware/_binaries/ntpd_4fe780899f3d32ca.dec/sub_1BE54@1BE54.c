int __fastcall sub_1BE54(_DWORD *a1)
{
  int result; // r0
  FILE *v3; // r2
  int v4; // r1
  int v5; // r3
  int v6; // r3
  char *v7; // r1
  char *v8; // r3
  char *v9; // r2
  int v10; // lr
  char *v11; // r3

  if ( a1 && !a1[2] )
  {
    result = a1[3];
    v3 = (FILE *)a1[1];
    if ( result != -1 )
    {
      a1[3] = -1;
      if ( v3 )
        conf_file_sum += result;
      ++a1[5];
      goto LABEL_7;
    }
    if ( v3 )
    {
      while ( 1 )
      {
        result = fgetc(v3);
        if ( result == -1 )
        {
          v7 = (char *)a1[5];
          goto LABEL_15;
        }
        v6 = a1[5] + 1;
        if ( result <= 127 )
          break;
        v3 = (FILE *)a1[1];
        a1[5] = v6;
      }
      a1[5] = v6;
      conf_file_sum += result;
LABEL_7:
      if ( result != 10 )
        return result;
      goto LABEL_8;
    }
    v7 = (char *)a1[5];
    result = remote_config[dword_107CF0];
    v8 = (char *)&remote_config[dword_107CF0];
    if ( (unsigned int)result > 0x7F )
    {
      v10 = v7 - v8;
      v11 = v8 + 1;
      do
      {
        v7 = &v11[v10];
        v9 = v11;
        a1[5] = &(v11++)[v10];
        result = (unsigned __int8)*v9;
      }
      while ( (unsigned int)result > 0x7F );
    }
    else
    {
      v9 = (char *)&remote_config[dword_107CF0];
    }
    if ( result )
    {
      a1[5] = v7 + 1;
      dword_107CF0 = v9 + 1 - (char *)remote_config;
      goto LABEL_7;
    }
    dword_107CF0 = v9 - (char *)remote_config;
LABEL_15:
    if ( v7 )
    {
LABEL_8:
      v4 = a1[5];
      v5 = a1[4] + 1;
      a1[6] = a1[4];
      a1[7] = v4;
      a1[4] = v5;
      a1[5] = 0;
      return 10;
    }
  }
  return -1;
}
