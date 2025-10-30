int __fastcall sub_18C174(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v3; // r0
  _DWORD *v4; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r9
  int *v12; // r0
  int v13; // r4
  int v14; // r0
  const char *v15; // r7
  int v16; // r0
  const char *v17; // r0
  int v18; // r8
  int v19; // r0
  int v20; // r1
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD v23[3]; // [sp+Ch] [bp-48h] BYREF
  _DWORD v24[15]; // [sp+18h] [bp-3Ch] BYREF

  v1 = a1 + 2;
  v3 = sub_23F1C4(a1[2], a1[3], a1[4]);
  if ( v3 || (v3 = sub_231E70(*v1, v1[1], v1[2])) == 0 )
  {
    if ( dword_487930 )
    {
      v4 = (_DWORD *)sub_242FC8(v3);
      sub_2594B0(*v4, "infrun: not resuming previously  stepped thread, it has vanished\n");
    }
    sub_23E38C(*v1, v1[1], v1[2]);
    return 0;
  }
  else
  {
    if ( dword_487930 )
    {
      v21 = (_DWORD *)sub_242FC8(v3);
      sub_2594B0(*v21, "infrun: resuming previously stepped thread\n");
    }
    memset(&v24[4], 0, 0x28u);
    v6 = *v1;
    v7 = v1[1];
    v8 = v1[2];
    v24[3] = a1;
    v24[0] = v6;
    v24[1] = v7;
    v24[2] = v8;
    sub_23F9F0(v6, v7, v8);
    v9 = sub_1DDB40(*v1, v1[1], v1[2]);
    dword_4878F8 = sub_1DFB3C(v9);
    v10 = sub_15F70C(dword_4878F8);
    v11 = v10;
    if ( a1[46] == dword_4878F8 )
    {
      if ( dword_487930 )
      {
        v22 = (_DWORD *)sub_242FC8(v10);
        sub_2594B0(*v22, "infrun: expected thread still hasn't advanced\n");
      }
      sub_18B478(v24);
    }
    else
    {
      if ( dword_487930 )
      {
        v12 = (int *)sub_242FC8(v10);
        v13 = *v12;
        v14 = sub_16F654((int)v12);
        v15 = (const char *)sub_25AC8C(v14, a1[46]);
        v16 = sub_16F654((int)v15);
        v17 = (const char *)sub_25AC8C(v16, dword_4878F8);
        v10 = sub_2594B0(v13, "infrun: expected thread advanced also (%s -> %s)\n", v15, v17);
      }
      sub_184B80(v10);
      a1[29] = 0;
      v18 = sub_15ECB4(v11);
      v19 = sub_15DB08(v11);
      sub_DC8EC(v18, v19, dword_4878F8);
      v20 = a1[35];
      a1[10] = 1;
      sub_187D1C(v23, v20);
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_1873D0)(v23[0], v23[1], v23[2], 0, 0);
    }
    return 1;
  }
}
