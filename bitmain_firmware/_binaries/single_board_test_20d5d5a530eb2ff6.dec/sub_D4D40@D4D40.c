int __fastcall sub_D4D40(int a1, int a2, int a3, int a4)
{
  int v8; // r5
  int v9; // r7
  int v10; // r0
  int v12; // r7
  int v13; // r0
  _DWORD v14[2]; // [sp+14h] [bp-8h] BYREF

  v14[0] = sub_D8AC8(a1);
  v8 = sub_D8934(a1);
  if ( *(_DWORD *)(v8 + 284) )
  {
    v9 = sub_D8AC0(a1);
    v10 = sub_D8AC4(a1);
    sub_E4A90(a3, a2, a4, v8, v9, v10, v14, *(_DWORD *)(v8 + 284));
  }
  else
  {
    v12 = sub_D8AC0(a1);
    v13 = sub_D8AC4(a1);
    sub_E466C(a3, a2, a4, v8, v12, v13, v14, *(_DWORD *)(v8 + 280));
  }
  sub_D8ACC(a1, v14[0]);
  return 1;
}
