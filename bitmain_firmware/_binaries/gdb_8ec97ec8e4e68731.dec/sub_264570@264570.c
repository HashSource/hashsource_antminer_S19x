int __fastcall sub_264570(int a1, int a2, unsigned int a3)
{
  _DWORD *v6; // r0
  int v7; // r0
  char *v8; // r2
  int v9; // r3
  bool v10; // zf
  int v11; // r10
  _DWORD *v12; // r11
  __int64 v13; // r8
  int v14; // r6
  __int64 v15; // r4
  int v16; // r5
  _DWORD *v17; // r11
  __int64 v18; // kr08_8
  int v19; // r0
  _DWORD *v20; // r2
  __int64 v21; // r4
  int v22; // r8
  int v23; // r6
  int v24; // r0
  __int64 v25; // r0
  int v27; // [sp+4h] [bp-28h]
  __int64 v28; // [sp+18h] [bp-14h] BYREF
  __int64 v29; // [sp+20h] [bp-Ch] BYREF

  v6 = (_DWORD *)sub_26BC70(a1);
  v7 = sub_171258(v6);
  v8 = *(char **)(v7 + 24);
  v9 = *v8;
  v10 = v9 == 2;
  if ( v9 != 2 )
    v10 = v9 == 13;
  if ( !v10 )
    sub_946E0("cannot take slice of non-array");
  v11 = v7;
  v12 = *(_DWORD **)(*((_DWORD *)v8 + 6) + 12);
  if ( sub_17195C(v12, &v28, &v29) < 0 )
    sub_946E0("slice from bad array or bitstring");
  v13 = a2;
  v14 = a3 >> 31;
  if ( a2 < v28 )
    v14 = 1;
  if ( v14 || (v15 = (int)(a2 + a3 - 1), v29 < (int)v15) )
    sub_946E0("slice out of range");
  v16 = sub_171928(0, *(_DWORD **)(v12[6] + 20), v13, SHIDWORD(v13), v15, SHIDWORD(v15));
  v17 = *(_DWORD **)(*(_DWORD *)(v11 + 24) + 20);
  v18 = v13 - v28;
  v19 = sub_171258(v17);
  v20 = (_DWORD *)v16;
  v21 = v18 * *(unsigned int *)(v19 + 20);
  v22 = sub_172124(0, v17, v20);
  **(_BYTE **)(v22 + 24) = **(_BYTE **)(v11 + 24);
  if ( *(_DWORD *)nullsub_31(a1) == 1 && sub_26BF4C(a1) )
  {
    v23 = sub_26BB08(v22);
  }
  else
  {
    v23 = sub_26BB80(v22);
    v24 = sub_170058(v22);
    sub_26E83C(v23, 0, 0, 0, a1, v27, v21, HIDWORD(v21), v24, 0);
  }
  ((void (__fastcall *)(int, int))loc_26C744)(v23, a1);
  v25 = sub_26BC80(a1);
  sub_26BC88(v23, HIDWORD(v25), v21 + v25, (unsigned __int64)(v21 + v25) >> 32);
  return v23;
}
