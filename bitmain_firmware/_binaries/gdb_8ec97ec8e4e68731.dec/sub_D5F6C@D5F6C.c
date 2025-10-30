_DWORD *__fastcall sub_D5F6C(_DWORD *a1, int a2, int a3)
{
  _DWORD *v5; // r6
  unsigned int v6; // r12
  unsigned int v7; // r4
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  _DWORD *result; // r0
  int v19; // [sp+4h] [bp-8h] BYREF

  v19 = *(_DWORD *)(sub_19CD08(a3) + 4);
  sub_D5DA8((int)a1, &v19);
  v5 = (_DWORD *)*a1;
  v6 = *(_DWORD *)(a2 + 164);
  v7 = -858993459 * ((a1[1] - *a1) >> 3);
  if ( v6 >= v7 )
    sub_946E0("marker %s not found", *(const char **)(a2 + 160));
  v8 = &v5[10 * v6];
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  *v5 = v9;
  v5[1] = v10;
  v5[2] = v11;
  v5[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v5[4] = v13;
  v5[5] = v14;
  v5[6] = v15;
  v5[7] = v16;
  v17 = v8[1];
  v5[8] = *v8;
  v5[9] = v17;
  if ( v7 )
  {
    result = a1;
    if ( v7 > 1 )
      a1[1] = v5 + 10;
  }
  else
  {
    sub_DFF0C(a1, 1);
    return a1;
  }
  return result;
}
