int __fastcall sub_23D98(unsigned __int16 *a1, int a2, int a3, char a4)
{
  char *v8; // r0
  char *v9; // r12
  int v11; // r11
  int v12; // r3
  unsigned int v13; // lr
  char *v14; // r1
  char v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r2
  int v23; // [sp+4h] [bp-18h]

  v8 = sub_1E710(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( a3 == 1 )
    {
      if ( (v8[50] & 4) == 0 )
      {
        v8[50] = 1;
        goto LABEL_6;
      }
    }
    else
    {
      if ( a3 != 2 )
      {
        if ( !a3 )
          v8[50] = 5;
        goto LABEL_6;
      }
      if ( (v8[50] & 4) == 0 )
      {
        v8[50] = 3;
LABEL_6:
        ++*((_DWORD *)v8 + 11);
        *((_DWORD *)v8 + 8) = current_time;
        return 1;
      }
    }
    return 1;
  }
  v11 = 0;
  v12 = 0;
  v13 = current_time;
  v14 = (char *)&ctl_traps;
  v23 = num_ctl_traps;
  do
  {
    v15 = *((_BYTE *)&ctl_traps + 52 * v12 + 50);
    if ( (v15 & 5) == 1 && *((_DWORD *)v14 + 8) + 3600 > v13 )
    {
      v11 = v15 & 5;
      v14[50] = 0;
      v9 = v14;
      --v23;
      goto LABEL_18;
    }
    if ( (*((_BYTE *)&ctl_traps + 52 * v12 + 50) & 1) == 0 )
      goto LABEL_36;
    if ( (*((_BYTE *)&ctl_traps + 52 * v12 + 50) & 4) != 0 )
      goto LABEL_18;
    if ( a3 )
    {
      if ( a3 != 1 || (*((_BYTE *)&ctl_traps + 52 * v12 + 50) & 2) == 0 )
        goto LABEL_18;
      if ( !v9 )
        goto LABEL_36;
      if ( (v9[50] & 1) == 0 )
        goto LABEL_18;
    }
    else
    {
      if ( !v9 )
        goto LABEL_36;
      v22 = v15 & 2;
      if ( (v9[50] & 2) != 0 )
      {
        if ( !v22 )
          goto LABEL_18;
      }
      else if ( v22 )
      {
LABEL_36:
        v9 = v14;
        goto LABEL_18;
      }
    }
    if ( *((_DWORD *)v9 + 10) < *((_DWORD *)v14 + 10) )
      v9 = v14;
LABEL_18:
    ++v12;
    v14 += 52;
  }
  while ( v12 != 3 );
  if ( v11 )
    num_ctl_traps = v23;
  if ( !v9 )
    return 0;
  *((_WORD *)v9 + 24) = 1;
  v16 = *(_DWORD *)a1;
  v17 = *((_DWORD *)a1 + 1);
  v18 = *((_DWORD *)a1 + 2);
  v19 = *((_DWORD *)a1 + 3);
  *((_DWORD *)v9 + 10) = v13;
  *((_DWORD *)v9 + 8) = v13;
  *((_DWORD *)v9 + 11) = 0;
  *((_DWORD *)v9 + 9) = 0;
  *(_DWORD *)v9 = v16;
  *((_DWORD *)v9 + 1) = v17;
  *((_DWORD *)v9 + 2) = v18;
  *((_DWORD *)v9 + 3) = v19;
  if ( !a3 )
    LOBYTE(v19) = 5;
  v20 = *((_DWORD *)a1 + 5);
  v21 = *((_DWORD *)a1 + 6);
  *((_DWORD *)v9 + 4) = *((_DWORD *)a1 + 4);
  *((_DWORD *)v9 + 5) = v20;
  *((_DWORD *)v9 + 6) = v21;
  *((_DWORD *)v9 + 7) = a2;
  v9[51] = a4;
  if ( a3 )
  {
    if ( a3 == 2 )
      LOBYTE(v19) = 3;
    else
      v9[50] = 1;
    if ( a3 == 2 )
      v9[50] = v19;
  }
  else
  {
    v9[50] = v19;
  }
  ++num_ctl_traps;
  return 1;
}
