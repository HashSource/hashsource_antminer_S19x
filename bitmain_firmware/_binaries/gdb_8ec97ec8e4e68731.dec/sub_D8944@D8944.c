_DWORD *__fastcall sub_D8944(_DWORD *a1, int a2, int (__fastcall **a3)(_DWORD *), char a4)
{
  int v7; // r8
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  int v11; // r1
  int v12; // r2
  char *v13; // r0
  bool v14; // zf
  int v15; // r1
  _DWORD *v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r1
  int v22; // r3
  int v24; // r0
  _DWORD *v25; // [sp+4h] [bp-8h] BYREF

  v7 = a1[22];
  v9 = sub_CCB74(&v25, a2);
  v10 = v25;
  if ( !a3 )
  {
    ((void (__fastcall *)(_DWORD *))loc_15C9C)(v9);
    v24 = (int)v25;
    if ( v25 )
      v24 = (*(int (__fastcall **)(_DWORD *))(*v25 + 4))(v25);
    sub_338FFC(v24);
  }
  v11 = dword_478348;
  v12 = dword_46DE54;
  v13 = off_46D5A4[0][2];
  v14 = dword_478348 == 0;
  v25[1] = a3;
  v10[3] = a2;
  v10[22] = v7;
  v10[23] = v13;
  v10[27] = v10;
  v10[24] = v12;
  if ( v14 )
  {
    dword_478348 = (int)v10;
  }
  else
  {
    while ( *(_DWORD *)(v11 + 8) )
      v11 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v10;
  }
  v10[7] = (*a3)(v10);
  ((void (*)(void))loc_CA0D0)();
  *(_DWORD *)(v10[7] + 44) = *(_DWORD *)(a1[7] + 44);
  *(_DWORD *)(v10[7] + 68) = *(_DWORD *)(a1[7] + 68);
  *(_DWORD *)(v10[7] + 52) = *(_DWORD *)(a1[7] + 52);
  *(_DWORD *)(v10[7] + 64) = *(_DWORD *)(a1[7] + 64);
  *(_DWORD *)(v10[7] + 48) = *(_DWORD *)(a1[7] + 48);
  v15 = *(_DWORD *)(a1[7] + 80);
  v16 = (_DWORD *)(v10[7] + 76);
  *v16 = *(_DWORD *)(a1[7] + 76);
  v16[1] = v15;
  *(_DWORD *)(v10[7] + 228) = *(_DWORD *)(a1[7] + 228);
  *(_DWORD *)(v10[7] + 232) = *(_DWORD *)(a1[7] + 232);
  *(_BYTE *)(v10[7] + 38) = a4 & 1;
  v17 = a1[14];
  v18 = a1[15];
  v19 = a1[16];
  v10[13] = a1[13];
  v10[14] = v17;
  v10[15] = v18;
  v10[16] = v19;
  v20 = a1[18];
  v21 = a1[28];
  v22 = dword_46C098;
  v10[17] = a1[17];
  v10[18] = v20;
  v10[28] = v21;
  v10[6] = v22;
  v10[4] = 1;
  v10[5] = 3;
  dword_46C098 = v22 - 1;
  sub_D88D8(0);
  return v10;
}
