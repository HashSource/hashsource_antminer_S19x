__int64 __fastcall sub_2DB4C(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v11; // [sp+10h] [bp-18h] BYREF
  _DWORD v12[2]; // [sp+18h] [bp-10h] BYREF
  __int64 v13; // [sp+20h] [bp-8h] BYREF

  v5 = sub_1DDB40(a2, a3, a4);
  v6 = sub_2370C(a1);
  v13 = -1;
  ((void (__fastcall *)(int, int, int *))loc_1DFAFC)(v5, 15, &v11);
  ((void (__fastcall *)(int, int, _DWORD *))loc_1DFAFC)(v5, 25, v12);
  v7 = v6 & v12[0] | (v6 >> 31) & v12[1];
  if ( !v7 )
  {
    v8 = ((int (__fastcall *)(int))loc_165C28)(a1);
    v9 = sub_FA95C(v11 - 4, 4, v8) & 0xFFFFFF;
    if ( v9 )
      return (unsigned int)(v9 - 9437184);
  }
  ((void (__fastcall *)(int, int, __int64 *, int))loc_1DFAFC)(v5, 7, &v13, v7);
  return v13;
}
