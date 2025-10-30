int __fastcall sub_1F507C(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r1
  bool v5; // cc
  int *v6; // r2
  _DWORD *v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _DWORD v13[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *(_DWORD *)(a3 + 20);
  v5 = v4 > 0xF;
  if ( v4 != 15 )
    v5 = v4 - 4 > 1;
  if ( v5 )
    return 1;
  v6 = (int *)(a3 + 24);
  v7 = (_DWORD *)*a4;
  v8 = *v6;
  v9 = v6[1];
  v10 = v6[2];
  v13[0] = v8;
  v13[1] = v9;
  v13[2] = v10;
  v11 = sub_1F5D00(*v7, v7[1], v13);
  if ( v11 != v7[1] )
    sub_1F5268(v7, v11);
  return 1;
}
