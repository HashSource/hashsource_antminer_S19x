int __fastcall sub_25F2C0(int a1)
{
  int v1; // r7
  _DWORD *v2; // r0
  int v3; // r11
  int v4; // r1
  int v5; // r6
  int v6; // r10
  __int64 v7; // r4
  int v8; // r0
  void *v9; // r11
  const void *v10; // r0
  int v12; // r0
  int v13; // [sp+4h] [bp-18h]
  __int64 v14; // [sp+8h] [bp-14h] BYREF
  __int64 v15; // [sp+10h] [bp-Ch] BYREF

  v1 = sub_26EA24(a1);
  v2 = (_DWORD *)sub_26BC70(v1);
  v3 = sub_171258(v2);
  if ( sub_1736DC((_DWORD *)v3) || sub_173720((_DWORD *)v3) )
  {
    v12 = sub_26DAF4(v3, v4, 0, 0);
    return sub_25E4EC(v12, v1, 2u);
  }
  if ( (**(_DWORD **)(v3 + 24) & 0x100FF) != 0x10002 )
    sub_946E0("Argument to negate operation not a number.");
  v5 = sub_26BB80(v3);
  v6 = sub_171258(*(_DWORD **)(*(_DWORD *)(v3 + 24) + 20));
  if ( !sub_171B30(v3, &v14, &v15) )
    sub_946E0("Could not determine the vector bounds");
  if ( (((unsigned __int64)(v15 - v14) >> 32) & 0x80000000) != 0LL )
    return v5;
  v7 = 0;
  do
  {
    v8 = sub_25CE0C(v1, v7);
    v13 = sub_25F2C0(v8);
    v9 = (void *)(sub_26E954(v5) + *(_DWORD *)(v6 + 20) * v7);
    v10 = (const void *)sub_26E738(v13);
    memcpy(v9, v10, *(_DWORD *)(v6 + 20));
    ++v7;
  }
  while ( v15 - v14 >= v7 );
  return v5;
}
