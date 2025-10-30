int __fastcall sub_240BC(int *a1, int a2, int a3, char a4)
{
  char *v8; // r0
  char *v9; // r12
  int v11; // r3
  int v12; // r11
  char *v13; // r2
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _DWORD *v19; // r7
  int v20; // r1
  int v21; // r2
  char v22; // r3
  unsigned int v23; // [sp+4h] [bp-10h]

  v8 = sub_1E948((unsigned __int16 *)a1, a2);
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
  v12 = num_ctl_traps;
  v23 = current_time;
  v13 = (char *)&ctl_traps;
  do
  {
    if ( (*((_BYTE *)&ctl_traps + 52 * v11 + 50) & 5) == 1 && *((_DWORD *)v13 + 8) + 3600 > v23 )
    {
      --v12;
      v13[50] = 0;
      v9 = v13;
      goto LABEL_18;
    }
    if ( (v13[50] & 1) == 0 )
      goto LABEL_32;
    if ( (v13[50] & 4) != 0 )
      goto LABEL_18;
    if ( !a3 )
    {
      if ( !v9 )
        goto LABEL_32;
      if ( (v9[50] & 2) != 0 )
      {
        if ( (v13[50] & 2) == 0 )
          goto LABEL_18;
      }
      else if ( (v13[50] & 2) != 0 )
      {
        goto LABEL_32;
      }
LABEL_38:
      if ( *((_DWORD *)v9 + 10) < *((_DWORD *)v13 + 10) )
        v9 = v13;
      goto LABEL_18;
    }
    if ( a3 == 1 && (v13[50] & 2) != 0 )
    {
      if ( !v9 )
      {
LABEL_32:
        v9 = v13;
        goto LABEL_18;
      }
      if ( (v9[50] & 1) != 0 )
        goto LABEL_38;
    }
LABEL_18:
    ++v11;
    v13 += 52;
  }
  while ( v11 != 3 );
  num_ctl_traps = v12;
  if ( !v9 )
    return 0;
  *((_WORD *)v9 + 24) = 1;
  v14 = current_time;
  *((_DWORD *)v9 + 11) = 0;
  *((_DWORD *)v9 + 9) = 0;
  *((_DWORD *)v9 + 10) = v14;
  *((_DWORD *)v9 + 8) = v14;
  v15 = *a1;
  v16 = a1[1];
  v17 = a1[2];
  v18 = a1[3];
  v19 = a1 + 4;
  *(_DWORD *)v9 = v15;
  *((_DWORD *)v9 + 1) = v16;
  *((_DWORD *)v9 + 2) = v17;
  *((_DWORD *)v9 + 3) = v18;
  if ( !a3 )
    LOBYTE(v18) = 5;
  v20 = v19[1];
  v21 = v19[2];
  *((_DWORD *)v9 + 4) = *v19;
  *((_DWORD *)v9 + 5) = v20;
  *((_DWORD *)v9 + 6) = v21;
  *((_DWORD *)v9 + 7) = a2;
  v9[51] = a4;
  if ( a3 )
  {
    if ( a3 == 2 )
      v22 = 3;
    else
      v22 = 1;
    v9[50] = v22;
  }
  else
  {
    v9[50] = v18;
  }
  ++num_ctl_traps;
  return 1;
}
