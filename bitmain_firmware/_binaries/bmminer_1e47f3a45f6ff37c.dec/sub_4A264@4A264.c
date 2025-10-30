int __fastcall sub_4A264(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r4
  int v5; // r0
  unsigned int v6; // r6
  int v7; // r9
  int v8; // r5
  unsigned int v9; // r4
  int v10; // r7
  unsigned int v11; // r1
  int v12; // r3
  int v14; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = *(_DWORD *)(dword_535D90 + 4 * ((_DWORD)&unk_202802 + a1));
  v3 = sub_26A34();
  v4 = sub_8F588(v2, v3);
  v5 = sub_26AA4();
  v6 = (unsigned int)sub_8F588(v4, v5) >> 1;
  v14 = sub_26A34();
  if ( !v14 )
    return 0;
  v8 = 0;
  v7 = 0;
  do
  {
    v9 = 0;
    v10 = a1 << 6;
    while ( v9 < sub_26AA4() )
    {
      v11 = v9 + v8 * sub_26AA4();
      if ( v6 > *(_DWORD *)(dword_535D90 + 4 * ((_DWORD)&unk_202806 + v10 + v11)) )
      {
        v7 = 1;
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(
            s,
            0x800u,
            "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n",
            a1,
            v11,
            *(_DWORD *)(dword_535D90 + 4 * ((_DWORD)&unk_202806 + v10 + v11)),
            v6);
          sub_3B6AC(3, s, 0, v12);
        }
      }
      ++v9;
    }
    ++v8;
  }
  while ( v14 != v8 );
  return v7;
}
