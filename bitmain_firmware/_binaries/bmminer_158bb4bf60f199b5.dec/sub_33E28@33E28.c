int __fastcall sub_33E28(int a1)
{
  unsigned int v2; // r6
  _DWORD *v4; // r7
  char *v5; // lr
  char *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // lr
  char *v12; // r12
  int v13; // r1
  int v14; // r2
  char v15[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = a1 - 160;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v15, 0x800u, "[DEBUG] Sweep init, sweep_type = 0x%X.\n", a1);
    sub_47AB4(4, v15, 0);
    if ( v2 > 1 )
      goto LABEL_3;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v15, "[DEBUG] Allocate memory for sweep.\n");
      sub_47AB4(4, v15, 0);
    }
  }
  else if ( v2 > 1 )
  {
LABEL_3:
    sub_31794(20, 255);
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    v5 = "Sweep type error, exit.\n";
    v6 = v15;
LABEL_14:
    v7 = *(_DWORD *)v5;
    v8 = *((_DWORD *)v5 + 1);
    v9 = *((_DWORD *)v5 + 2);
    v10 = *((_DWORD *)v5 + 3);
    v11 = v5 + 16;
    *(_DWORD *)v6 = v7;
    *((_DWORD *)v6 + 1) = v8;
    *((_DWORD *)v6 + 2) = v9;
    *((_DWORD *)v6 + 3) = v10;
    v12 = v6 + 16;
    v13 = v11[1];
    v14 = v11[2];
    *(_DWORD *)v12 = *v11;
    *((_DWORD *)v12 + 1) = v13;
    v12[8] = v14;
    sub_47AB4(3, v15, 0);
    return -1;
  }
  v4 = (_DWORD *)dword_1AEA6C;
  if ( !dword_1AEA6C )
  {
    v4 = calloc(0x2148u, 1u);
    dword_1AEA6C = (int)v4;
    if ( !v4 )
    {
      sub_31794(13, 255);
      if ( (unsigned int)dword_9E31C <= 3 )
        return -1;
      v5 = " memory for sweep ctxt.\n";
      qmemcpy(v15, "Fail to allocate", 16);
      v6 = &v15[16];
      goto LABEL_14;
    }
  }
  *v4 = a1;
  v4[1] = 1199570688;
  if ( sub_3C4FC(0) )
  {
    if ( dword_1AEA70 )
    {
      *(_DWORD *)(dword_1AEA6C + 8) = dword_1AEA70;
      return 0;
    }
    sub_31794(15, 255);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v15, 0x800u, "Unknown miner type(%d).\n", 1);
      sub_47AB4(3, v15, 0);
      return -1;
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v15, "board adapt failed, exit\n");
    sub_47AB4(3, v15, 0);
  }
  return -1;
}
