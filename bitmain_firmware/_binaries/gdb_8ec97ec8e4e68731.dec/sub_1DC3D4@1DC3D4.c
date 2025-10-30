int __fastcall sub_1DC3D4(int a1, size_t a2)
{
  int v2; // r4
  int *v4; // r0
  int v5; // r5
  int v6; // r0
  const char *v7; // r0
  _DWORD *v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r0
  void *v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  __int64 v19; // kr00_8

  v2 = a1;
  if ( (unsigned int)dword_487D4C > 1 )
  {
    v4 = (int *)sub_242FC8(a1);
    v5 = *v4;
    v6 = sub_16F654((int)v4);
    v7 = (const char *)sub_25AC8C(v6, v2);
    sub_2594B0(v5, "Process record: add mem addr = %s len = %d to record list.\n", v7, a2);
  }
  if ( !v2 )
    return v2;
  v9 = sub_93094(1u, 0x20u);
  v10 = (int)v9;
  v9[4] = v2;
  v9[5] = a2;
  v9[2] = 2;
  if ( a2 > 4 )
  {
    v9 = sub_93028(a2);
    *(_DWORD *)(v10 + 28) = v9;
  }
  v11 = sub_16F654((int)v9);
  v12 = *(_DWORD *)(v10 + 8);
  if ( v12 == 1 )
  {
    if ( *(unsigned __int16 *)(v10 + 18) <= 8u )
      v13 = v10 + 20;
    else
      v13 = *(_DWORD *)(v10 + 20);
  }
  else
  {
    if ( v12 != 2 )
    {
      v14 = ((int (__fastcall *)(int))loc_161F0)(v11);
      goto LABEL_23;
    }
    if ( *(_DWORD *)(v10 + 20) <= 4u )
      v13 = v10 + 28;
    else
      v13 = *(_DWORD *)(v10 + 28);
  }
  v14 = sub_1D38B4(v11, v2, v13, a2);
  if ( !v14 )
  {
    sub_1D8780(v10);
    return 0;
  }
  if ( *(_DWORD *)(v10 + 8) == 2 )
  {
    if ( *(_DWORD *)(v10 + 20) > 4u )
    {
      v15 = *(void **)(v10 + 28);
      if ( v15 )
        free(v15);
    }
    v2 = -1;
    free((void *)v10);
    return v2;
  }
LABEL_23:
  v16 = ((int (__fastcall *)(int))loc_16224)(v14);
  if ( (unsigned int)dword_487D4C > 1 )
  {
    v17 = (_DWORD *)sub_242FC8(v16);
    sub_2594B0(*v17, "Process record: add end to arch list.\n");
  }
  v18 = sub_93094(1u, 0x20u);
  v18[2] = 0;
  v19 = qword_4880D8;
  v18[4] = 0;
  *((_QWORD *)v18 + 3) = v19 + 1;
  qword_4880D8 = v19 + 1;
  sub_1D8780((int)v18);
  return 0;
}
