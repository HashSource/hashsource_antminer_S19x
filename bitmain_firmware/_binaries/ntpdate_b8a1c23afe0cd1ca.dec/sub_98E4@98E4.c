int __fastcall sub_98E4(int a1, char **a2, unsigned __int8 *a3)
{
  int v3; // r3
  char *v4; // r12
  int v5; // r3
  int v6; // r7
  int v7; // lr
  int v8; // r9
  int v9; // r12
  bool v10; // zf
  unsigned __int8 *v11; // r3
  int v12; // t1
  bool v13; // zf
  bool v15; // zf
  int v16; // r3
  int v17; // r2

  off_31030 = *a2;
  ntp_optarg = 0;
  v3 = ntp_optind;
  if ( ntp_optind )
  {
    v6 = dword_332FC;
    if ( dword_332FC )
    {
      v7 = *(unsigned __int8 *)dword_332FC;
      if ( *(_BYTE *)dword_332FC )
        goto LABEL_8;
    }
  }
  else
  {
    ntp_optind = 1;
    dword_332FC = 0;
    v3 = 1;
  }
  if ( a1 <= v3 )
    return -1;
  v4 = a2[v3];
  if ( *v4 != 45 || !v4[1] )
    return -1;
  v5 = v3 + 1;
  if ( v4[1] == 45 && !v4[2] )
  {
    ntp_optind = v5;
    return -1;
  }
  ntp_optind = v5;
  v6 = (int)(v4 + 1);
  v7 = (unsigned __int8)v4[1];
LABEL_8:
  v8 = v7;
  dword_332FC = v6 + 1;
  ntp_optopt = v7;
  if ( !a3 )
    goto LABEL_19;
  v9 = *a3;
  v10 = v7 == v9;
  if ( v7 != v9 )
    v10 = v9 == 0;
  if ( !v10 )
  {
    v11 = a3 + 1;
    while ( 1 )
    {
      a3 = v11;
      if ( !v11 )
        break;
      v12 = *v11++;
      v9 = v12;
      v13 = v12 == v7;
      if ( v12 != v7 )
        v13 = v9 == 0;
      if ( v13 )
        goto LABEL_18;
    }
LABEL_19:
    if ( ntp_opterr )
    {
      v8 = 63;
      sub_9850(": unknown option -", v7);
      return v8;
    }
    return 63;
  }
LABEL_18:
  if ( !v9 )
    goto LABEL_19;
  v15 = v7 == 63;
  if ( v7 != 63 )
    v15 = v7 == 58;
  v16 = v15;
  if ( v15 )
    goto LABEL_19;
  if ( a3[1] != 58 )
    return v8;
  if ( *(_BYTE *)(v6 + 1) )
  {
    ntp_optarg = v6 + 1;
    dword_332FC = v16;
    return v8;
  }
  if ( ntp_optind < a1 )
  {
    v17 = (int)a2[ntp_optind++];
    ntp_optarg = v17;
    return v8;
  }
  if ( ntp_opterr )
  {
    v8 = 63;
    sub_9850(": option requires argument -", v7);
    return v8;
  }
  return 63;
}
