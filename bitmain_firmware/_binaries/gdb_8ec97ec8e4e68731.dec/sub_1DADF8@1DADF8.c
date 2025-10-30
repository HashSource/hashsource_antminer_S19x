void __fastcall sub_1DADF8(int *a1, int a2)
{
  int v3; // r2
  int v5; // r11
  void *v6; // r0
  int *v7; // r4
  int *v8; // r9
  int *v9; // r3
  int v10; // r3
  void *v11; // r5
  char *v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r1
  unsigned int v16; // r3
  int *v17; // r2
  int v18; // r0
  int v19; // r3
  size_t v20; // r2
  void *v21; // r0
  void *v22; // r5
  void *v23; // r0
  const char *v24; // r0
  int v25; // r3
  int v26; // r0
  unsigned int v27; // r2
  int *v28; // r1
  int v29; // r3
  const char *v30; // r0
  int v31; // r3
  size_t v32; // r2
  void *v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r4
  unsigned __int64 v37; // r0
  char *v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  char *v43; // r0
  int v44; // [sp+Ch] [bp-20h]
  void *v45; // [sp+Ch] [bp-20h]
  int v46; // [sp+14h] [bp-18h]
  int v47; // [sp+18h] [bp-14h]
  int v48; // [sp+20h] [bp-Ch]
  char *v49; // [sp+24h] [bp-8h]

  v3 = dword_48809C;
  dword_48809C = 1;
  v47 = v3;
  v5 = sub_1DDBBC(a1);
  v6 = (void *)sub_1DD58C(v5);
  v7 = off_46DAB8;
  LOWORD(v8) = (unsigned __int16)&dword_487D4C;
  v46 = (int)v6;
  if ( !a2 )
    v7 = (int *)off_46DAB8[1];
  HIWORD(v8) = (unsigned int)&dword_487D4C >> 16;
  if ( !a2 )
    off_46DAB8 = v7;
  while ( 1 )
  {
    v10 = v7[2];
    if ( v10 == 1 )
    {
      v11 = (void *)*((unsigned __int16 *)v7 + 9);
      if ( *((_WORD *)v7 + 9) )
      {
        v6 = sub_9836C(*((unsigned __int16 *)v7 + 9));
        v11 = v6;
      }
      if ( (unsigned int)*v8 > 1 )
      {
        v44 = *(_DWORD *)sub_242FC8(v6);
        v12 = sub_98EEC((int)v7);
        sub_2594B0(
          v44,
          "Process record: record_full_reg %s to inferior num = %d.\n",
          v12,
          *((unsigned __int16 *)v7 + 8));
      }
      v13 = sub_1DE030(v5, *((unsigned __int16 *)v7 + 8), v11);
      v14 = v7[2];
      v15 = *((unsigned __int16 *)v7 + 8);
      if ( v14 == 1 )
      {
        v16 = *((unsigned __int16 *)v7 + 9);
        if ( v16 <= 8 )
          v17 = v7 + 5;
        else
          v17 = (int *)v7[5];
      }
      else
      {
        if ( v14 != 2 )
        {
          v26 = ((int (__fastcall *)(int, int))loc_161F0)(v13, v15);
LABEL_68:
          v34 = ((int (__fastcall *)(int))loc_161F0)(v26);
          goto LABEL_66;
        }
        v16 = v7[5];
        if ( v16 <= 4 )
          v17 = v7 + 7;
        else
          v17 = (int *)v7[7];
      }
      v18 = sub_1DE614(v5, v15, v17, v16);
      v19 = v7[2];
      if ( v19 == 1 )
      {
        v20 = *((unsigned __int16 *)v7 + 9);
        if ( v20 <= 8 )
          v21 = v7 + 5;
        else
          v21 = (void *)v7[5];
        goto LABEL_27;
      }
      if ( v19 == 2 )
      {
        v20 = *((unsigned __int16 *)v7 + 9);
        if ( (unsigned int)v7[5] <= 4 )
          v21 = v7 + 7;
        else
          v21 = (void *)v7[7];
LABEL_27:
        memcpy(v21, v11, v20);
        sub_339E64(v11);
        goto LABEL_28;
      }
      v34 = ((int (__fastcall *)(int))loc_161F0)(v18);
      if ( v11 )
        sub_339E64(v11);
LABEL_66:
      dword_48809C = v47;
      sub_338FFC(v34);
    }
    if ( v10 == 2 && !v7[6] )
      break;
LABEL_8:
    v9 = (int *)*v7;
    v7 = (int *)v7[1];
    if ( a2 == 1 )
    {
      v7 = v9;
      off_46DAB8 = v9;
    }
    else
    {
      off_46DAB8 = v7;
    }
    if ( a1 == v7 )
    {
      dword_48809C = v47;
      return;
    }
  }
  v22 = sub_93028(v7[5]);
  v23 = sub_9253C((int)sub_1D87E8, (int)v22);
  v45 = v23;
  if ( (unsigned int)*v8 > 1 )
  {
    v48 = *(_DWORD *)sub_242FC8(v23);
    v49 = sub_98EEC((int)v7);
    v24 = (const char *)sub_25AC8C(v46, v7[4]);
    sub_2594B0(v48, "Process record: record_full_mem %s to inferior addr = %s len = %d.\n", v49, v24, v7[5]);
  }
  if ( sub_1D38B4(v46, v7[4], (int)v22, v7[5]) )
  {
    v7[6] = 1;
    goto LABEL_41;
  }
  v25 = v7[2];
  v26 = v7[4];
  if ( v25 == 1 )
  {
    v27 = v7[5];
    if ( *((unsigned __int16 *)v7 + 9) > 8u )
      v28 = (int *)v7[5];
    else
      v28 = v7 + 5;
  }
  else
  {
    if ( v25 != 2 )
      goto LABEL_68;
    v27 = v7[5];
    if ( v27 <= 4 )
      v28 = v7 + 7;
    else
      v28 = (int *)v7[7];
  }
  if ( sub_230484(v26, v28, v27) )
  {
    v29 = *v8;
    v7[6] = 1;
    if ( v29 )
    {
      v30 = (const char *)sub_25AC8C(v46, v7[4]);
      sub_946B0("Process record: error writing memory at addr = %s len = %d.", v30, v7[5]);
    }
    goto LABEL_41;
  }
  v31 = v7[2];
  if ( v31 == 1 )
  {
    v32 = v7[5];
    if ( *((unsigned __int16 *)v7 + 9) > 8u )
      v33 = (void *)v7[5];
    else
      v33 = v7 + 5;
LABEL_58:
    memcpy(v33, v22, v32);
    if ( sub_CDE94(*(_DWORD *)(v5 + 4), v7[4], v7[5]) )
      dword_488088 = 3;
LABEL_41:
    sub_92620(v45);
LABEL_28:
    v7 = off_46DAB8;
    goto LABEL_8;
  }
  if ( v31 == 2 )
  {
    v32 = v7[5];
    if ( v32 <= 4 )
      v33 = v7 + 7;
    else
      v33 = (void *)v7[7];
    goto LABEL_58;
  }
  v35 = ((int (*)(void))loc_161F0)();
  v36 = v35;
  if ( !v35 )
    sub_946E0("Target insn not found.");
  if ( off_46DAB8 == (int *)v35 )
    sub_946E0("Already at target insn.");
  v37 = *(_QWORD *)(v35 + 24);
  if ( v37 > *((_QWORD *)off_46DAB8 + 3) )
  {
    v43 = sub_98880(v37, SHIDWORD(v37));
    sub_259F10("Go forward to insn number %s\n", v43);
    v39 = sub_1DADF8(v36, 0);
  }
  else
  {
    v38 = sub_98880(v37, SHIDWORD(v37));
    sub_259F10("Go backward to insn number %s\n", v38);
    v39 = sub_1DADF8(v36, 1);
  }
  sub_1DDCF4(v39);
  v40 = sub_15D778();
  v41 = sub_1DDBBC(v40);
  dword_4878F8 = sub_1DFB3C(v41);
  v42 = sub_15F7E8(0);
  sub_20E7E8(v42, 1, 1);
}
