bool __fastcall sub_173C2C(_DWORD *a1, int a2)
{
  __int64 v4; // r0
  _DWORD *v5; // r7
  int v6; // r8
  __int64 v7; // r0
  int v8; // r9
  int v9; // r0
  int v11; // [sp+14h] [bp-8h] BYREF

  v11 = -1;
  v4 = sub_26BC70(a2);
  v5 = (_DWORD *)v4;
  v6 = sub_26E718(a2, HIDWORD(v4));
  v7 = sub_26BFE0(a2);
  v8 = v7;
  v9 = ((int (__fastcall *)(int, _DWORD))loc_26C09C)(a2, HIDWORD(v7));
  return sub_173A80(a1, v5, &v11, v6, v8, v9, a2) == 1;
}
