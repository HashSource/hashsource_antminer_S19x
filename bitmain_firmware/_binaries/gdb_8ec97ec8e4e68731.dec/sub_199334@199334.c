void __fastcall sub_199334(int a1, int a2, int *a3, const char *a4, int a5)
{
  int *v6; // r5
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  _DWORD *v20; // r9
  int v21; // r3
  char *v22; // r2
  int v23; // r5
  char *v24; // r4
  int v25; // r0
  int v26; // r2
  int v27; // r0

  v6 = *(int **)(a2 + 4);
  if ( v6 == *(int **)(a2 + 8) )
  {
    sub_DFC48((char **)a2, *(char **)(a2 + 4), a3);
  }
  else
  {
    if ( v6 )
    {
      v10 = a3;
      v11 = *a3;
      v12 = a3[1];
      v13 = a3[2];
      v14 = v10[3];
      v10 += 4;
      *v6 = v11;
      v6[1] = v12;
      v6[2] = v13;
      v6[3] = v14;
      v15 = *v10;
      v16 = v10[1];
      v17 = v10[2];
      v18 = v10[3];
      v10 += 4;
      v6[4] = v15;
      v6[5] = v16;
      v6[6] = v17;
      v6[7] = v18;
      v19 = v10[1];
      v6[8] = *v10;
      v6[9] = v19;
    }
    *(_DWORD *)(a2 + 4) = v6 + 10;
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    v20 = sub_93050(*(void **)(a1 + 32), 1717986920 * ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3));
    v21 = *(_DWORD *)(a2 + 4);
    v22 = *(char **)a2;
    *(_DWORD *)(a1 + 32) = v20;
    v23 = -858993459 * ((v21 - (int)v22) >> 3) + 0x1FFFFFFF;
    v24 = (char *)&v20[2 * v23];
    if ( a5 || (v25 = a3[1]) == 0 )
    {
      if ( a4 )
        v27 = (int)a4;
      else
        v27 = 2328;
      if ( !a4 )
        HIWORD(v27) = 58;
      v20[2 * v23] = sub_327254(v27);
      *((_DWORD *)v24 + 1) = 0;
    }
    else
    {
      sub_204308(v25);
      if ( a4 )
      {
        v26 = a3[4];
        if ( v26 && *(_DWORD *)(*(_DWORD *)a1 + 8) == 14 )
          v20[2 * v23] = sub_93140("%s:%d", a4, v26);
        else
          v20[2 * v23] = sub_327254(a4);
      }
      else
      {
        v20[2 * v23] = sub_93140("%d", a3[4]);
      }
      *((_DWORD *)v24 + 1) = a3[1];
    }
  }
}
