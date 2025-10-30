int __fastcall sub_1C084(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r3
  FILE *v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned __int8 *v9; // r2
  unsigned __int8 *v10; // r3
  int v11; // r12

  if ( !a1 || a1[2] )
    return -1;
  v2 = a1[3];
  if ( v2 == -1 )
  {
    v6 = (FILE *)a1[1];
    if ( v6 )
    {
      while ( 1 )
      {
        v2 = fgetc(v6);
        if ( v2 == -1 )
          break;
        if ( v2 <= 127 )
        {
          ++a1[5];
          conf_file_sum += v2;
          goto LABEL_7;
        }
        v6 = (FILE *)a1[1];
        ++a1[5];
      }
    }
    else
    {
      v9 = &remote_config[dword_108D10];
      v2 = remote_config[dword_108D10];
      if ( (unsigned int)v2 > 0x7F )
      {
        v10 = v9 + 1;
        v11 = a1[5] - (_DWORD)v9;
        do
        {
          v9 = v10;
          a1[5] = &(v10++)[v11];
          v2 = *v9;
        }
        while ( (unsigned int)v2 > 0x7F );
      }
      if ( v2 )
      {
        ++a1[5];
        dword_108D10 = v9 + 1 - remote_config;
        goto LABEL_7;
      }
      dword_108D10 = v9 - remote_config;
    }
    if ( a1[5] )
      goto LABEL_17;
    return -1;
  }
  v3 = a1[1];
  a1[3] = -1;
  if ( v3 )
    conf_file_sum += v2;
  ++a1[5];
LABEL_7:
  if ( v2 == 10 )
  {
LABEL_17:
    v7 = a1[5];
    v8 = a1[4] + 1;
    v4 = 10;
    a1[6] = a1[4];
    a1[7] = v7;
    a1[4] = v8;
    a1[5] = 0;
    return v4;
  }
  return v2;
}
