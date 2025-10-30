int __fastcall sub_11C194(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r9
  int v5; // r10
  unsigned __int64 v7; // r6
  int v9; // r8
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r5
  int v13; // r11
  int v14; // r0
  __int64 v15; // r6
  int v16; // r3
  __int64 v17; // r8
  int v18; // r0
  int v19; // r10
  int result; // r0
  int v21; // r0
  int v22; // [sp+4h] [bp-10h]
  int v23; // [sp+4h] [bp-10h]
  int v24; // [sp+Ch] [bp-8h] BYREF

  v7 = __PAIR64__(a3, a2);
  v9 = ((int (__fastcall *)(_DWORD))loc_15FA88)(*(_DWORD *)(a1 + 76));
  v10 = (_DWORD *)sub_11B2C0(*(_DWORD *)(a1 + 76), v7, SHIDWORD(v7), &v24);
  v11 = a4 == -1;
  if ( a4 == -1 )
    v12 = v10[2];
  else
    v12 = v10[4];
  if ( v11 )
    v13 = v10[3];
  else
    v13 = v10[5];
  if ( !v12 )
  {
    v21 = sub_92F64(11, "Cannot resolve DW_AT_call_data_value");
    *(_DWORD *)(a1 + 28) = v5;
    *(_DWORD *)(a1 + 20) = v4;
    *(_DWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 80) = v7;
    *(_DWORD *)(a1 + 76) = v22;
    sub_338FFC(v21);
  }
  v14 = v24;
  v15 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 84) = 0;
  v16 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 80) = v14;
  *(_DWORD *)(a1 + 76) = v9;
  v23 = v16;
  LODWORD(v17) = *(_DWORD *)(a1 + 16);
  v18 = sub_1322B4(v14);
  *(_DWORD *)(a1 + 16) = sub_1B7250(v18);
  HIDWORD(v17) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = sub_1322C8(*(_DWORD *)(a1 + 80));
  v19 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = sub_132388(*(_DWORD *)(a1 + 80));
  result = ((int (__fastcall *)(int, int, int))loc_114908)(a1, v12, v13);
  *(_DWORD *)(a1 + 28) = v19;
  *(_QWORD *)(a1 + 16) = v17;
  *(_QWORD *)(a1 + 80) = v15;
  *(_DWORD *)(a1 + 76) = v23;
  return result;
}
