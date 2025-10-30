int __fastcall sub_2E120(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5
  int v5; // r8
  char *v6; // r0
  int v8; // r5
  int v9; // r5
  int v10; // r5

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = sub_226A8();
  do
  {
    if ( sub_26C0C(v3 - 1) )
    {
      ++v2;
      v8 = sprintf((char *)(a1 + v4), "chain%d_voltage=%d;", v3, v5) + v4;
      v9 = sprintf((char *)(a1 + v8), "chain%d_voladded=%d;", v3, 0) + v8;
      v10 = sprintf((char *)(a1 + v9), "chain%d_basefreq=%d;", v3, 300) + v9;
      v4 = sprintf((char *)(a1 + v10), "chain%d_badcore=%d;", v3, 0) + v10;
    }
    ++v3;
  }
  while ( v3 != 5 );
  v6 = (char *)(a1 + v4 + sprintf((char *)(a1 + v4), "chainnum=%d;", v2));
  return sprintf(v6, "version=%s;", dest);
}
