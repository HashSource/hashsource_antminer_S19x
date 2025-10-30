int __fastcall sub_A8574(int *a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v6; // r0
  int v7; // r5
  int v9; // r3
  int v10; // [sp+Ch] [bp-8h] BYREF

  if ( !a2 )
    return 0;
  v3 = a3 - 1;
  *a1 = a2;
  a1[1] = 0;
  if ( a3 - 1 > 2 )
    v3 = -1;
  else
    a2 = 1 << (8 * a3);
  a1[2] = 0;
  if ( a3 - 1 <= 2 )
    v3 += a2;
  a1[4] = v3;
  a1[3] = 0;
  v6 = sub_E0740(20, "ssl/packet.c", 97);
  v7 = v6;
  a1[5] = v6;
  if ( !v6 )
  {
    sub_D0048(20, 633, 65, "ssl/packet.c", 98);
    return v7;
  }
  if ( !a3 )
    return 1;
  *(_DWORD *)(v6 + 12) = a3;
  *(_DWORD *)(v6 + 8) = a3;
  v7 = sub_A82B8((int)a1, a3, &v10);
  if ( !v7 )
  {
    CRYPTO_free(a1[5], "ssl/packet.c", 109);
    a1[5] = 0;
    return v7;
  }
  v9 = a1[1];
  if ( !v9 )
    v9 = *(_DWORD *)(*a1 + 4);
  *(_DWORD *)(a1[5] + 4) = v10 - v9;
  return 1;
}
