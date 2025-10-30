int __fastcall sub_293B90(int a1, int a2)
{
  int v3; // r7
  int v4; // r9
  char *v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int result; // r0
  int v11; // r3
  int v12; // r0
  char *v13; // r0
  unsigned __int16 v14; // [sp+0h] [bp-Ch] BYREF
  unsigned __int16 v15; // [sp+2h] [bp-Ah]

  if ( ioctl(a1, 0x5413u, &v14) )
  {
    if ( !a2 )
    {
      if ( dword_48BAC4 )
      {
        v3 = -1;
        v4 = -1;
LABEL_5:
        dword_49014C = -1;
        dword_490144 = -1;
        goto LABEL_6;
      }
      v3 = -1;
      dword_490144 = -1;
      v4 = -1;
      dword_49014C = -1;
LABEL_6:
      v5 = j_getenv("COLUMNS");
      if ( v5 )
      {
        v6 = strtol(v5, 0, 10);
        dword_490144 = v6;
      }
      else
      {
        v6 = dword_490144;
      }
      if ( v6 > 0 )
        goto LABEL_9;
      dword_490144 = v3;
      if ( v3 > 0 )
        goto LABEL_9;
      goto LABEL_31;
    }
    v3 = -1;
    v4 = -1;
    dword_49014C = -1;
LABEL_30:
    dword_490144 = v3;
LABEL_31:
    if ( dword_48BAC8 )
    {
      v12 = tgetnum("co");
      v7 = dword_49014C;
      dword_490144 = v12;
LABEL_21:
      if ( v7 > 0 )
        goto LABEL_22;
LABEL_10:
      if ( !a2 )
      {
        v13 = j_getenv("LINES");
        if ( v13 )
        {
          v7 = strtol(v13, 0, 10);
          dword_49014C = v7;
        }
        else
        {
          v7 = dword_49014C;
        }
        if ( v7 > 0 )
          goto LABEL_22;
      }
      goto LABEL_11;
    }
LABEL_9:
    v7 = dword_49014C;
    if ( dword_49014C > 0 )
      goto LABEL_22;
    goto LABEL_10;
  }
  v3 = v15;
  v7 = v14;
  if ( !a2 )
  {
    v4 = v14;
    if ( dword_48BAC4 )
      goto LABEL_5;
    dword_490144 = v15;
    dword_49014C = v14;
    if ( v15 )
      goto LABEL_21;
    goto LABEL_6;
  }
  dword_490144 = v15;
  dword_49014C = v14;
  if ( !v15 )
  {
    v4 = v14;
    goto LABEL_30;
  }
  if ( v14 )
    goto LABEL_22;
  v4 = 0;
LABEL_11:
  dword_49014C = v4;
  if ( v4 <= 0 )
  {
    if ( dword_48BAC8 )
    {
      v8 = tgetnum("li");
      v9 = dword_490144;
      v7 = v8;
      dword_49014C = v8;
      if ( dword_490144 > 1 )
        goto LABEL_16;
    }
    else
    {
      v9 = dword_490144;
      if ( dword_490144 > 1 )
      {
LABEL_17:
        v7 = 24;
        dword_49014C = 24;
        goto LABEL_23;
      }
      v7 = v4;
    }
LABEL_15:
    v9 = 80;
    dword_490144 = 80;
LABEL_16:
    if ( v7 > 0 )
      goto LABEL_23;
    goto LABEL_17;
  }
  v7 = v4;
LABEL_22:
  v9 = dword_490144;
  if ( dword_490144 <= 1 )
    goto LABEL_15;
LABEL_23:
  result = sub_29B118(v7, v9);
  v11 = dword_490144;
  if ( !dword_4707A0 )
    v11 = --dword_490144;
  dword_490130 = v11 * dword_49014C;
  return result;
}
