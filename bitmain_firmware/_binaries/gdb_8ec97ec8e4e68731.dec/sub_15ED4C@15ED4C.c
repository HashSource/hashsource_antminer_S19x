int __fastcall sub_15ED4C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v11; // r4
  int v12; // r0
  int v13; // [sp+14h] [bp-18h] BYREF
  int v14; // [sp+18h] [bp-14h] BYREF
  _BYTE v15[4]; // [sp+1Ch] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-Ch] BYREF
  int v17; // [sp+24h] [bp-8h] BYREF

  v6 = sub_15DB40(*(int **)(a1 + 76));
  v7 = ((int (__fastcall *)(int, int, int *, _BYTE *, int *, int *, int *, _DWORD))loc_15E7F8)(
         a1,
         a2,
         &v14,
         v15,
         &v16,
         &v17,
         &v13,
         0);
  if ( v14 )
    sub_946E0("Attempt to assign to a register that was not saved.");
  if ( v16 == 1 )
  {
    v11 = v17;
    v12 = ((int (__fastcall *)(int, int))loc_1DD420)(v6, a2);
    return sub_FAAE0(v11, a3, v12);
  }
  else
  {
    if ( v16 != 2 )
      sub_946E0("Attempt to assign to an unmodifiable value.");
    v8 = sub_1DDBBC(v7);
    return sub_1DE614(v8, v13, a3, v9);
  }
}
