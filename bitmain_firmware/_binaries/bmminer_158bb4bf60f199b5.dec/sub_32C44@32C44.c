int __fastcall sub_32C44(int a1)
{
  int v1; // r1
  int v2; // r12
  unsigned int v3; // r3
  int result; // r0
  int v6; // r6
  unsigned int v7; // r7
  int v8; // r4
  int v9; // r5
  int v10; // [sp+10h] [bp-80Ch]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v1 = dword_1AEA68;
  v2 = 3 * a1;
  v3 = *(_DWORD *)(dword_1AEA68 + 4 * (a1 + 479234));
  result = 0;
  v6 = 0;
  v10 = a1 + 4 * v2;
  v7 = v3 / 0x68;
  while ( 1 )
  {
    v8 = 0;
    v9 = 4 * (v10 + v6);
    while ( 1 )
    {
      if ( *(_DWORD *)(v1 + 4 * ((_DWORD)&loc_76390 + v9 + v8 + 2)) < v7 )
      {
        result = 1;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(
            s,
            0x800u,
            "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n",
            a1,
            4 * v6 + v8,
            *(_DWORD *)(v1 + 4 * ((_DWORD)&loc_76390 + v9 + v8 + 2)),
            v7);
          sub_47AB4(3, s, 0);
          result = 1;
        }
      }
      if ( ++v8 == 4 )
        break;
      v1 = dword_1AEA68;
    }
    if ( ++v6 == 13 )
      break;
    v1 = dword_1AEA68;
  }
  return result;
}
