int __fastcall sub_B068C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  _DWORD *v7; // r4
  int v8; // r0
  int i; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  v4 = *(_DWORD *)(*a2 + 20);
  v5 = sub_AFB54(dword_487D2C);
  if ( *(int *)(v5 + 52) < 0 )
    return 0;
  v7 = (_DWORD *)v5;
  sub_FA844(*a1, savedregs, v4);
  v8 = sub_15AEA8(savedregs, *a2);
  for ( i = v8; v8; i = v8 )
  {
    v10 = sub_183688(v8);
    sub_B0118(i, v10);
    v11 = sub_26DD30(v7[1], 0, i);
    v12 = sub_26F824(v11, v7[5]);
    v13 = sub_26F824(v12, v7[13]);
    v8 = sub_26EBA8(v13);
  }
  return 1;
}
