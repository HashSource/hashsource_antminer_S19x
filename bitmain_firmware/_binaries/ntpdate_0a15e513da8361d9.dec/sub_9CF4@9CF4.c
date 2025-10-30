int __fastcall sub_9CF4(int a1, char **a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r5
  int v5; // lr
  int result; // r0
  int v7; // r12
  bool v8; // zf
  unsigned __int8 *v9; // r3
  bool v10; // zf
  char *v11; // r5
  bool v12; // zf
  int v13; // r3
  int v14; // r2

  off_31030 = *a2;
  ntp_optarg = 0;
  if ( ntp_optind )
  {
    v4 = (unsigned __int8 *)dword_33300;
    if ( dword_33300 )
    {
      v5 = *(unsigned __int8 *)dword_33300;
      if ( *(_BYTE *)dword_33300 )
        goto LABEL_4;
    }
  }
  else
  {
    ntp_optind = 1;
    dword_33300 = 0;
  }
  if ( ntp_optind >= a1 )
    return -1;
  v11 = a2[ntp_optind];
  if ( *v11 != 45 || !v11[1] )
    return -1;
  if ( v11[1] == 45 && !v11[2] )
  {
    ++ntp_optind;
    return -1;
  }
  ++ntp_optind;
  v4 = (unsigned __int8 *)(v11 + 1);
  v5 = *v4;
LABEL_4:
  dword_33300 = (int)(v4 + 1);
  result = v5;
  ntp_optopt = v5;
  if ( !a3 )
    goto LABEL_13;
  v7 = *a3;
  v8 = v7 == 0;
  if ( *a3 )
    v8 = v7 == v5;
  if ( !v8 )
  {
    v9 = a3 + 1;
    while ( 1 )
    {
      a3 = v9;
      if ( !v9 )
        break;
      v7 = *v9++;
      v10 = v7 == v5;
      if ( v7 != v5 )
        v10 = v7 == 0;
      if ( v10 )
        goto LABEL_22;
    }
LABEL_13:
    if ( ntp_opterr )
    {
      sub_9C60(": unknown option -", v5);
      return 63;
    }
    return 63;
  }
LABEL_22:
  if ( !v7 )
    goto LABEL_13;
  v12 = v5 == 63;
  if ( v5 != 63 )
    v12 = v5 == 58;
  v13 = v12;
  if ( v12 )
    goto LABEL_13;
  if ( a3[1] == 58 )
  {
    if ( v4[1] )
    {
      ntp_optarg = (int)(v4 + 1);
      dword_33300 = v13;
      return result;
    }
    if ( a1 > ntp_optind )
    {
      v14 = (int)a2[ntp_optind++];
      ntp_optarg = v14;
      return result;
    }
    if ( ntp_opterr )
    {
      sub_9C60(": option requires argument -", v5);
      return 63;
    }
    return 63;
  }
  return result;
}
