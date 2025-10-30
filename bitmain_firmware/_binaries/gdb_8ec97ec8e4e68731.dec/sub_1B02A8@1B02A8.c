int __fastcall sub_1B02A8(int a1, int a2, int *a3, int a4)
{
  _QWORD *v6; // r5
  _QWORD *v7; // r6
  int v8; // r0
  int v9; // lr
  int *v10; // r0
  int v11; // r1
  int v12; // r2
  __int64 v13; // kr08_8
  int result; // r0
  int v15; // r4
  int v16; // [sp+Ch] [bp-10h] BYREF
  __int64 v17; // [sp+10h] [bp-Ch] BYREF

  v6 = *(_QWORD **)(sub_273FA0(a4, "start") + 4);
  v7 = *(_QWORD **)(sub_273FA0(a4, "length") + 4);
  v8 = sub_273FA0(a4, "type");
  v9 = *a3;
  v10 = *(int **)(v8 + 4);
  v11 = *(_DWORD *)(*a3 + 4);
  v12 = *(_DWORD *)(*a3 + 8);
  v13 = *v6 + *v7;
  v17 = v13;
  result = *v10;
  v16 = result;
  if ( v11 == v12 )
    return sub_1B039C(v9, v11, v6, &v17, &v16);
  if ( v11 )
  {
    v15 = *(_DWORD *)v6;
    *(_DWORD *)(v11 + 4) = v13;
    *(_DWORD *)(v11 + 16) = result;
    *(_DWORD *)v11 = v15;
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
    *(_BYTE *)(v11 + 12) = 1;
    *(_DWORD *)(v11 + 36) = -1;
  }
  *(_DWORD *)(v9 + 4) = v11 + 40;
  return result;
}
