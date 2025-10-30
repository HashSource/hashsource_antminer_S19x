int __fastcall sub_2DB00(char *a1)
{
  int v1; // r7
  int v2; // r5
  int v3; // r4
  char *v5; // r8
  int v6; // r0
  char *v7; // r0
  int v9; // r5
  int v10; // r5
  int v11; // r5
  int v12; // [sp+4h] [bp-8h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v5 = a1;
  v12 = sub_22178();
  do
  {
    v6 = v3++;
    if ( sub_266F0(v6) )
    {
      v9 = sprintf(v5, "chain%d_voltage=%d;", v3, v12) + v2;
      ++v1;
      v10 = v9 + sprintf(&a1[v9], "chain%d_voladded=%d;", v3, 0);
      v11 = v10 + sprintf(&a1[v10], "chain%d_basefreq=%d;", v3, 300);
      v2 = v11 + sprintf(&a1[v11], "chain%d_badcore=%d;", v3, 0);
      v5 = &a1[v2];
    }
  }
  while ( v3 != 4 );
  v7 = &a1[v2 + sprintf(v5, "chainnum=%d;", v1)];
  return sprintf(v7, "version=%s;", byte_B3D78);
}
