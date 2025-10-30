_DWORD *__fastcall sub_1E8E5C(int a1, char *a2, char *a3, char *a4, _DWORD *a5)
{
  int v5; // r0
  int v6; // r0
  _BYTE **v7; // r7
  char *v8; // r10
  int v9; // r0
  size_t v10; // r11
  int *v11; // r8
  int v12; // r3
  int v13; // r0
  int v14; // r0
  size_t *v15; // r9
  const char *v16; // r0
  _DWORD *v17; // r4
  void *v18; // r5
  const char *v20; // r0
  char *v21; // [sp+10h] [bp-24h]
  char *v25[3]; // [sp+24h] [bp-10h] BYREF

  v5 = sub_16F654(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2770)(v5);
  v7 = (_BYTE **)dword_488C94;
  v8 = *(char **)dword_488C94;
  v9 = sub_1E2890(v6);
  v10 = v9;
  if ( *a5 == 1 )
  {
    v11 = &dword_488B1C;
  }
  else
  {
    if ( *a5 != 2 )
LABEL_37:
      sub_946E0("Target does not support branch tracing.");
    v11 = (int *)&unk_488B2C;
  }
  v12 = v11[2];
  if ( v12 == 1 )
    goto LABEL_37;
  if ( v12 )
  {
    if ( v12 != 2 )
      goto LABEL_36;
    if ( v11[3] != 1 )
      goto LABEL_37;
  }
  v13 = sub_16F654(v9);
  v14 = ((int (__fastcall *)(int))loc_1E2770)(v13);
  v15 = (size_t *)dword_488C94;
  v25[0] = *(char **)dword_488C94;
  v21 = &v25[0][sub_1E2890(v14)];
  if ( dword_488BD4 == 1 )
    goto LABEL_13;
  if ( dword_488BD4 )
  {
    if ( dword_488BD4 == 2 )
    {
      if ( dword_488BD8 != 1 )
        goto LABEL_13;
      goto LABEL_22;
    }
LABEL_36:
    ((void (*)(void))loc_162E4)();
    goto LABEL_37;
  }
LABEL_22:
  if ( a5[1] != v15[104] )
  {
    sub_93170(v25[0], v21 - v25[0], "%s=0x%x", (const char *)dword_488BCC, a5[1]);
    sub_1E7DEC(v25[0]);
    sub_1E4EB8(v25, v15 + 1, 0, 0, 0);
    if ( !sub_1E1768(v25[0], &dword_488BCC) )
    {
      if ( *v25[0] != 69 || v25[0][1] != 46 )
        sub_946E0("Failed to configure the BTS buffer size.");
      sub_946E0("Failed to configure the BTS buffer size: %s", v25[0] + 2);
    }
    v15[104] = a5[1];
  }
LABEL_13:
  if ( dword_488C24 == 1 )
    goto LABEL_17;
  if ( dword_488C24 )
  {
    if ( dword_488C24 == 2 )
    {
      if ( dword_488C28 != 1 )
        goto LABEL_17;
      goto LABEL_27;
    }
    goto LABEL_36;
  }
LABEL_27:
  if ( a5[2] != v15[105] )
  {
    sub_93170(v25[0], v21 - v25[0], "%s=0x%x", (const char *)dword_488C1C, a5[2]);
    sub_1E7DEC(v25[0]);
    sub_1E4EB8(v25, v15 + 1, 0, 0, 0);
    if ( !sub_1E1768(v25[0], &dword_488C1C) )
    {
      if ( *v25[0] != 69 || v25[0][1] != 46 )
        sub_946E0("Failed to configure the trace buffer size.");
      sub_946E0("Failed to configure the trace buffer size: %s", v25[0] + 2);
    }
    v15[105] = a5[2];
  }
LABEL_17:
  v25[0] = a2;
  v25[1] = a3;
  v25[2] = a4;
  sub_1E8188((int)a2, (int)a3, (int)a4, 1);
  sub_93170(v8, v10, "%s", (const char *)*v11);
  sub_1E7DEC(*v7);
  sub_1E4EB8(v7, (size_t *)v7 + 1, 0, 0, 0);
  if ( !sub_1E1768(*v7, v11) )
  {
    if ( **v7 == 69 && (*v7)[1] == 46 )
    {
      v20 = (const char *)sub_23095C(a2, a3, a4);
      sub_946E0("Could not enable branch tracing for %s: %s", v20, *v7 + 2);
    }
    v16 = (const char *)sub_23095C(a2, a3, a4);
    sub_946E0("Could not enable branch tracing for %s.", v16);
  }
  v17 = sub_93094(1u, 0x18u);
  *v17 = a2;
  v17[1] = a3;
  v17[2] = a4;
  v18 = sub_92E28();
  sub_1E1E38((int)(v17 + 3));
  sub_92E40((int)v18);
  return v17;
}
