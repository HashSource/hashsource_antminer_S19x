int __fastcall sub_482EC(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r4
  int v5; // r0
  unsigned int v6; // r7
  int v7; // r10
  int i; // r5
  unsigned int j; // r4
  unsigned int v10; // r2
  int v12; // r3
  int v13; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = *(_DWORD *)(dword_530F04 + 4 * (a1 + 2107394));
  v3 = sub_26530();
  v4 = sub_8C218(v2, v3);
  v5 = sub_265A0();
  v6 = (unsigned int)sub_8C218(v4, v5) >> 1;
  v13 = sub_26530();
  if ( !v13 )
    return 0;
  v7 = 0;
  for ( i = 0; i != v13; ++i )
  {
    for ( j = 0; sub_265A0() > j; ++j )
    {
      v10 = j + i * sub_265A0();
      if ( *(_DWORD *)(dword_530F04 + 4 * ((_DWORD)&unk_202806 + 64 * a1 + v10)) < v6 )
      {
        v7 = 1;
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(
            s,
            0x800u,
            "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n",
            a1,
            v10,
            *(_DWORD *)(dword_530F04 + 4 * ((_DWORD)&unk_202806 + 64 * a1 + v10)),
            v6);
          sub_3AF5C(3, s, 0, v12);
        }
      }
    }
  }
  return v7;
}
