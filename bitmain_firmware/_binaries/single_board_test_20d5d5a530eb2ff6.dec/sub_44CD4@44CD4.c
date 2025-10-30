int __fastcall sub_44CD4(int a1)
{
  int v1; // r4
  int v3; // r0
  unsigned int v4; // r7
  unsigned int v5; // r7
  int v6; // r3
  int result; // r0
  unsigned int v8; // r8
  unsigned int v9; // r4
  unsigned int v10; // r6
  int v11; // r4
  void (**v12)(void); // r5
  char v13[52]; // [sp+20h] [bp-34h] BYREF

  v1 = dword_705300;
  v3 = sub_189090(dword_6E4870, *(_DWORD *)(dword_705300 + 8));
  v4 = sub_189090(v3, *(_DWORD *)(v1 + 16));
  sub_1E938(v13, 0x30u);
  printf("%s ", v13);
  printf(
    "%s : nonce_num_chain:%d,domains:%d,asic_domain_num:%d\n",
    "sw_pt_is_unbalance_happen",
    dword_6E4870,
    *(_DWORD *)(dword_705300 + 8),
    *(_DWORD *)(dword_705300 + 16));
  snprintf(
    byte_642CDC,
    0x100u,
    "nonce_num_chain:%d,domains:%d,asic_domain_num:%d",
    dword_6E4870,
    *(_DWORD *)(dword_705300 + 8),
    *(_DWORD *)(dword_705300 + 16));
  sub_3CC5C((int)byte_642CDC, v13);
  v5 = v4 >> 1;
  if ( v5 )
  {
    v6 = dword_705300;
    result = *(_DWORD *)(dword_705300 + 8);
    if ( result )
    {
      v8 = 0;
      result = 0;
      do
      {
        v9 = *(_DWORD *)(v6 + 16);
        if ( v9 )
        {
          v10 = 0;
          do
          {
            while ( 1 )
            {
              v11 = v10 + v9 * v8;
              ++v10;
              v12 = &dword_6E3468[v11 + 1282];
              if ( v5 > (unsigned int)v12[1] )
                break;
              v6 = dword_705300;
              v9 = *(_DWORD *)(dword_705300 + 16);
              if ( v9 <= v10 )
                goto LABEL_9;
            }
            sub_1E938(v13, 0x30u);
            printf("%s ", v13);
            printf(
              "%s : Domain unbalance happen, chain = %d,  coredomain = %d, nonce_num_domain = %d, threshold = %d.\n\n",
              "sw_pt_is_unbalance_happen",
              a1,
              v11,
              v12[1],
              v5);
            snprintf(
              byte_642EDC,
              0x100u,
              "Domain unbalance happen, chain = %d,  coredomain = %d, nonce_num_domain = %d, threshold = %d.\n",
              a1,
              v11,
              v12[1],
              v5);
            sub_3CC5C((int)byte_642EDC, v13);
            v6 = dword_705300;
            result = 1;
            v9 = *(_DWORD *)(dword_705300 + 16);
          }
          while ( v9 > v10 );
        }
LABEL_9:
        ++v8;
      }
      while ( *(_DWORD *)(v6 + 8) > v8 );
    }
  }
  else
  {
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : Domain unbalance happen: nonce is 0\n", "sw_pt_is_unbalance_happen");
    strcpy(byte_642DDC, "Domain unbalance happen: nonce is 0");
    sub_3CC5C((int)byte_642DDC, v13);
    return 1;
  }
  return result;
}
