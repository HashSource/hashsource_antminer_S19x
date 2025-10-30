bool __fastcall sub_1130B8(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r6
  int v7; // r7
  int v8; // r1
  time_t *v9; // r7
  _DWORD *v10; // r0
  int v11; // r0
  int (__fastcall *v12)(_DWORD, int); // r3
  _DWORD *v13; // r0
  int v14; // r0
  int (__fastcall *v15)(_DWORD, int); // r3
  int *v16; // r0
  int *v17; // r6
  int v18; // r0
  int (__fastcall *v20)(_DWORD, int); // r3
  int v21; // r3
  int (__fastcall *v22)(_DWORD, int); // r3
  int (__fastcall *v23)(_DWORD, int); // r3
  int (__fastcall *v24)(_DWORD, int); // r3
  int (__fastcall *v25)(_DWORD, int); // r3
  int (__fastcall *v26)(_DWORD, int); // r3
  int v27; // r1
  int v28; // r3
  _DWORD *v29; // r9
  _DWORD *v30; // r8
  int v31; // r0
  int v32; // r9
  int v33; // r0
  int v34; // r0
  int v35; // r8
  _DWORD v36[35]; // [sp+0h] [bp-8Ch] BYREF

  v4 = *(_DWORD *)(a1 + 92);
  v5 = sub_10C010(*(_DWORD *)(a1 + 80));
  v6 = *(_DWORD *)(a1 + 104);
  if ( v6 )
    goto LABEL_2;
  if ( v4 < v5 - 1 )
  {
    v6 = sub_10C01C(*(_DWORD **)(a1 + 80), v4 + 1);
    goto LABEL_24;
  }
  v6 = sub_10C01C(*(_DWORD **)(a1 + 80), v5 - 1);
  if ( (*(int (__fastcall **)(int, int, int))(a1 + 36))(a1, v6, v6) )
  {
LABEL_24:
    if ( !v6 )
      return 1;
    goto LABEL_2;
  }
  v24 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
  *(_DWORD *)(a1 + 96) = 33;
  if ( !v24(0, a1) )
    return 0;
  if ( !v6 )
    return 1;
LABEL_2:
  if ( *(_DWORD *)(a2 + 96) )
    goto LABEL_3;
  if ( (*(_DWORD *)(v6 + 128) & 2) != 0 && (*(_DWORD *)(v6 + 132) & 2) == 0 )
  {
    *(_DWORD *)(a1 + 96) = 35;
    if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      return 0;
  }
  v21 = *(_DWORD *)(a1 + 112);
  if ( (v21 & 0x80) == 0 )
  {
    *(_DWORD *)(a1 + 96) = 44;
    if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
      return 0;
    v21 = *(_DWORD *)(a1 + 112);
  }
  if ( (v21 & 8) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 120) && sub_112DA0(v36, *(_DWORD **)a1, *(_DWORD *)(a1 + 104), *(_DWORD *)(a1 + 8)) )
    {
      v27 = *(_DWORD *)(a1 + 16);
      v36[3] = *(_DWORD *)(a1 + 12);
      sub_1130A8((int)v36, v27);
      v28 = *(_DWORD *)(a1 + 28);
      v36[30] = a1;
      v36[7] = v28;
      if ( sub_112694((int)v36) <= 0 )
      {
        sub_112D28(v36);
      }
      else
      {
        v29 = *(_DWORD **)(a1 + 80);
        v30 = (_DWORD *)v36[20];
        v31 = sub_10C010((int)v29);
        v32 = sub_10C01C(v29, v31 - 1);
        v33 = sub_10C010((int)v30);
        v34 = sub_10C01C(v30, v33 - 1);
        v35 = sub_10E66C(v32, v34);
        sub_112D28(v36);
        if ( !v35 )
          goto LABEL_30;
      }
    }
    v26 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 54;
    if ( !v26(0, a1) )
      return 0;
  }
LABEL_30:
  if ( (*(_DWORD *)(a2 + 84) & 2) != 0 )
  {
    v22 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 41;
    if ( !v22(0, a1) )
      return 0;
  }
LABEL_3:
  if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
    goto LABEL_13;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(v7 + 12);
  if ( (v8 & 2) != 0 )
  {
    v9 = (time_t *)(v7 + 4);
  }
  else
  {
    v9 = (time_t *)(v8 & 0x200000);
    if ( (v8 & 0x200000) != 0 )
      goto LABEL_13;
  }
  *(_DWORD *)(a1 + 108) = a2;
  v10 = (_DWORD *)sub_113BB4(a2);
  v11 = sub_110DC0(v10, v9);
  if ( v11 )
  {
    if ( v11 > 0 )
    {
      v20 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
      *(_DWORD *)(a1 + 96) = 11;
      if ( !v20(0, a1) )
        return 0;
    }
  }
  else
  {
    v12 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 15;
    if ( !v12(0, a1) )
      return 0;
  }
  if ( sub_113BB8(a2) )
  {
    v13 = (_DWORD *)sub_113BB8(a2);
    v14 = sub_110DC0(v13, v9);
    if ( v14 )
    {
      if ( v14 < 0 && (*(_DWORD *)(a1 + 112) & 2) == 0 )
      {
        *(_DWORD *)(a1 + 96) = 12;
        if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
          return 0;
      }
      goto LABEL_12;
    }
    v15 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 16;
    if ( !v15(0, a1) )
      return 0;
  }
LABEL_12:
  *(_DWORD *)(a1 + 108) = 0;
LABEL_13:
  v16 = (int *)sub_10E89C(v6);
  v17 = v16;
  if ( v16 )
  {
    v18 = sub_10EB44(a2, v16, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
    if ( v18 )
    {
      *(_DWORD *)(a1 + 96) = v18;
      if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
        return 0;
    }
    if ( sub_1154C8(a2, v17) > 0 )
      return 1;
    v23 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 8;
    return v23(0, a1) != 0;
  }
  else
  {
    v25 = *(int (__fastcall **)(_DWORD, int))(a1 + 28);
    *(_DWORD *)(a1 + 96) = 6;
    return v25(0, a1) != 0;
  }
}
