int __fastcall sub_15B6A4(int a1, int a2, int a3)
{
  int v6; // r8
  int v7; // r9
  int v8; // r5
  int v9; // r11
  _DWORD *v10; // r10
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v17; // r5
  _DWORD v18[6]; // [sp+10h] [bp-34h] BYREF
  int v19; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v20[5]; // [sp+2Ch] [bp-18h] BYREF

  v6 = sub_15ECB4(a3);
  v7 = sub_171258(a1);
  if ( ((int (__fastcall *)(int, int, int))loc_168548)(v6, a2, v7) )
  {
    v8 = sub_26BB80(a1);
    *(_DWORD *)nullsub_31(v8) = 2;
    v9 = ((int (__fastcall *)(int))loc_15D6F4)(a3);
    v10 = (_DWORD *)sub_26C19C(v8);
    ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v18, v9);
    v11 = v18[1];
    v12 = v18[2];
    v13 = v18[3];
    *v10 = v18[0];
    v10[1] = v11;
    v10[2] = v12;
    v10[3] = v13;
    v10[4] = v18[4];
    *(_DWORD *)sub_26C1B8(v8) = a2;
    v15 = sub_26BCB8(v8, v14);
    if ( !((int (__fastcall *)(int, int, int, int, int, int *, _DWORD *))loc_168610)(v6, a3, a2, v7, v15, &v19, v20) )
    {
      if ( v19 )
        sub_26BF84(v8, 0, *(_DWORD *)(a1 + 20));
      if ( v20[0] )
        sub_26B440(v8, *(_DWORD *)(a1 + 20));
    }
    return v8;
  }
  else
  {
    ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v20, a3);
    v17 = ((int (__fastcall *)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_1687C8)(
            v6,
            a1,
            a2,
            v20[0],
            v20[1],
            v20[2],
            v20[3],
            v20[4]);
    ((void (__fastcall *)(int, int))loc_15B554)(v17, a3);
    return v17;
  }
}
