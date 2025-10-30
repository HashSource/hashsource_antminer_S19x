int __fastcall sub_3EA4C(int a1, int a2, int a3)
{
  int v5; // r4
  float *v6; // r5
  float *v7; // r7
  float v8; // s15
  int v11; // [sp+8h] [bp-44h]
  int v12; // [sp+Ch] [bp-40h]
  char v15[52]; // [sp+18h] [bp-34h] BYREF

  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : ============matrix freq==============\n\n", "dump_matrix_freq");
  strcpy(byte_636BCC, "============matrix freq==============\n");
  sub_3CCE0((int)byte_636BCC);
  if ( a2 > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( a3 > 0 )
      {
        v5 = 0;
        v6 = (float *)(a1 + 4 * v11);
        do
        {
          v7 = v6;
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          v8 = *v6++;
          printf("%s : %4.2f \n", "dump_matrix_freq", v8);
          snprintf(byte_636CCC, 0x100u, "%4.2f ", *v7);
          sub_3CCE0((int)byte_636CCC);
          if ( v5++ == a3 - 1 )
          {
            sub_1E938(v15, 0x30u);
            printf("%s ", v15);
            printf("%s : \n\n", "dump_matrix_freq");
            word_636DCC = 10;
            sub_3CCE0((int)&word_636DCC);
          }
        }
        while ( a3 != v5 );
      }
      v11 += a3;
      ++v12;
    }
    while ( a2 != v12 );
  }
  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : ============matrix freq==============\n\n", "dump_matrix_freq");
  strcpy(byte_636ECC, "============matrix freq==============\n");
  return sub_3CCE0((int)byte_636ECC);
}
