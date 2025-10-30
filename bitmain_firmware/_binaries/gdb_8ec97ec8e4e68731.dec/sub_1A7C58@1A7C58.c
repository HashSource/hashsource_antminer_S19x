int *__fastcall sub_1A7C58(int *result, int a2)
{
  int *v3; // r4
  int v4; // r3
  const char *v5; // r6
  int v6; // r1
  int *v7; // r7
  int *v8; // r6
  int **v9; // r12
  _DWORD *v10; // r4
  int *v11; // r0
  int *v12; // r1
  int *v13; // r2
  int *v14; // r3
  int v15; // r6
  int *v16; // r0
  int *v17; // r1
  int *v18; // r2
  int *v19; // r3
  int *v20; // r0
  int *v21; // r1
  int *v22; // r2
  int *v23; // r3
  int *v24; // r1
  _DWORD v25[6]; // [sp+4h] [bp-18h] BYREF

  v3 = result;
  v4 = result[1];
  if ( *(_DWORD *)(dword_487AB4 + 4) != -1 )
  {
    (*(void (__fastcall **)(int, int, _DWORD *))(dword_487AA8 + 52))(
      dword_487AAC,
      *(_DWORD *)(dword_487AA4 + 108) + *(_DWORD *)(dword_487AA8 + 20) * (v4 + *(_DWORD *)(dword_487AB4 + 16)),
      v25);
    v5 = (const char *)(*(_DWORD *)(dword_487AA4 + 120) + *(_DWORD *)(dword_487AB4 + 8) + v25[0]);
    goto LABEL_3;
  }
  if ( v4 != -1 )
  {
    (*(void (__fastcall **)(int, int, _DWORD *))(dword_487AA8 + 68))(
      dword_487AAC,
      *(_DWORD *)(dword_487AA4 + 136) + *(_DWORD *)(dword_487AA8 + 36) * v4,
      v25);
    v5 = (const char *)(*(_DWORD *)(dword_487AA4 + 124) + v25[2]);
LABEL_3:
    if ( a2 )
      v6 = *(_DWORD *)(a2 + 32);
    else
      v6 = dword_487AC4;
    result = (int *)sub_1A75D0(v5, *(_DWORD **)(v6 + 12), 1, 10);
    v7 = result;
    if ( result )
    {
      v8 = (int *)result[2];
      result = (int *)sub_1A75D0("__GDB_EFI_INFO__", v8, 4, 1);
      if ( result )
      {
        v9 = (int **)v3;
        v10 = (_DWORD *)result[2];
        v11 = *v9;
        v12 = v9[1];
        v13 = v9[2];
        v14 = v9[3];
        v9 += 4;
        v15 = *v8;
        v10[1] = v11;
        v10[2] = v12;
        v10[3] = v13;
        v10[4] = v14;
        v16 = *v9;
        v17 = v9[1];
        v18 = v9[2];
        v19 = v9[3];
        v9 += 4;
        v10[5] = v16;
        v10[6] = v17;
        v10[7] = v18;
        v10[8] = v19;
        v20 = *v9;
        v21 = v9[1];
        v22 = v9[2];
        v23 = v9[3];
        v9 += 4;
        v10[9] = v20;
        v10[10] = v21;
        v10[11] = v22;
        v10[12] = v23;
        result = *v9;
        v24 = v9[1];
        v10[13] = *v9;
        v10[14] = v24;
        v10[1] = v15;
      }
      if ( !byte_47898D && !dword_487ACC && **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v7[6] + 24) + 20) + 24) == 10 )
      {
        result = (int *)sub_1780C4(dword_487ABC);
        v7[6] = result[17];
      }
    }
    else if ( dword_47AC88 > 0 )
    {
      return sub_F43B4(&off_46D334, "PDR for %s, but no symbol", v5);
    }
    return result;
  }
  if ( dword_47AC88 > 0 )
    return sub_F43B4(&off_46D334, "can't handle PDR for static proc at 0x%lx", *result);
  return result;
}
