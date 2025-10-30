int __fastcall sub_13FC38(_DWORD *a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  int *v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r7
  int v12; // r0
  char **v13; // r0
  const void *v14; // r0
  void *v15; // r0
  int v17; // [sp+Ch] [bp-8h]

  v4 = sub_E0740((void *)0x40);
  v5 = v4;
  if ( v4 )
  {
    v4[40] = 1;
    *(_DWORD *)v4 = 2048;
    *((_DWORD *)v4 + 1) = 2;
    *((_DWORD *)v4 + 3) = -1;
    a1[5] = v4;
    v6 = *(int **)(a2 + 20);
    a1[8] = v4 + 32;
    a1[9] = 2;
    v7 = *v6;
    v8 = v6[3];
    v17 = v6[4];
    v9 = v6[1];
    v10 = v6[2];
    *((_DWORD *)v5 + 5) = v6[5];
    *(_DWORD *)v5 = v7;
    v11 = v6[6];
    *((_DWORD *)v5 + 3) = v8;
    v12 = v6[7];
    *((_DWORD *)v5 + 1) = v9;
    *((_DWORD *)v5 + 2) = v10;
    *((_DWORD *)v5 + 7) = v12;
    *((_DWORD *)v5 + 4) = v17;
    *((_DWORD *)v5 + 6) = v11;
    v5[40] = *((_BYTE *)v6 + 40);
    v13 = sub_EB288((char **)v6[11]);
    *((_DWORD *)v5 + 11) = v13;
    if ( v13 )
    {
      v14 = (const void *)v6[13];
      *((_DWORD *)v5 + 12) = v6[12];
      if ( !v14 )
      {
LABEL_6:
        *((_DWORD *)v5 + 15) = v6[15];
        return 1;
      }
      v15 = sub_E9E68(v14, (void *)v6[14]);
      *((_DWORD *)v5 + 13) = v15;
      if ( v15 )
      {
        *((_DWORD *)v5 + 14) = v6[14];
        goto LABEL_6;
      }
    }
    return 0;
  }
  else
  {
    sub_D0048(5, 125, 65, (int)"crypto/dh/dh_pmeth.c", 54);
    return 0;
  }
}
