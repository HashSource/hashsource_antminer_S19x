int __fastcall sub_A82D4(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  char v4; // r6
  unsigned int v5; // r5
  bool v6; // zf
  int v7; // r4
  unsigned int v9; // r4
  int v12; // r0
  int v13; // r3
  int v14; // [sp+Ch] [bp-4h] BYREF

  if ( a4 - 1 > 2 )
  {
    v5 = -1;
  }
  else
  {
    v4 = 8 * a4;
    v5 = 1;
  }
  if ( a4 - 1 <= 2 )
    v5 = (v5 << v4) + a4 - 1;
  v6 = a2 == 0;
  if ( a2 )
    v6 = a3 == 0;
  v7 = !v6;
  if ( v6 )
    return v7;
  v9 = a3;
  if ( a3 >= v5 )
    v9 = v5;
  a1[4] = v9;
  a1[1] = a2;
  *a1 = 0;
  a1[2] = 0;
  a1[3] = 0;
  v12 = sub_E0740(20, "ssl/packet.c", 97);
  v7 = v12;
  a1[5] = v12;
  if ( !v12 )
  {
    sub_D0048(20, 633, 65, "ssl/packet.c", 98);
    return v7;
  }
  if ( !a4 )
    return 1;
  *(_DWORD *)(v12 + 12) = a4;
  *(_DWORD *)(v12 + 8) = a4;
  v7 = sub_A82B8((int)a1, a4, &v14);
  if ( !v7 )
  {
    CRYPTO_free(a1[5], "ssl/packet.c", 109);
    a1[5] = 0;
    return v7;
  }
  v13 = a1[1];
  if ( !v13 )
    v13 = *(_DWORD *)(*a1 + 4);
  *(_DWORD *)(a1[5] + 4) = v14 - v13;
  return 1;
}
