int __fastcall sub_160EE0(int *a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r6
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD v13[7]; // [sp+0h] [bp-1Ch] BYREF

  v4 = sub_15DB40(a1);
  v5 = ((int (__fastcall *)(int, int))loc_1DD3B4)(v4, a2);
  v6 = sub_26BB08(v5);
  sub_26BF58(v6, 0);
  sub_26BF84(v6, 0, *(_DWORD *)(v5 + 20));
  *(_DWORD *)nullsub_31(v6) = 2;
  *(_DWORD *)sub_26C1B8(v6) = a2;
  v7 = ((int (__fastcall *)(int *))loc_15D6F4)(a1);
  v8 = (_DWORD *)sub_26C19C(v6);
  ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v13, v7);
  v9 = v13[1];
  v10 = v13[2];
  v11 = v13[3];
  *v8 = v13[0];
  v8[1] = v9;
  v8[2] = v10;
  v8[3] = v11;
  v8[4] = v13[4];
  return v6;
}
