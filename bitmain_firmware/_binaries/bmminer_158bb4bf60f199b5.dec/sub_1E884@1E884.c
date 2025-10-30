int __fastcall sub_1E884(char *a1)
{
  int v2; // r8
  int v3; // r5
  int v4; // r4
  char *v5; // r0
  int v6; // r3
  int v7; // r5
  int v8; // r5
  int v9; // r5
  char *v10; // r0
  int v12; // [sp+4h] [bp-8h]

  v2 = 0;
  v3 = 0;
  v12 = sub_1A1B0();
  v4 = 0;
  v5 = a1;
  do
  {
    while ( 1 )
    {
      v6 = dword_A0D68 + 4 * v4++;
      if ( *(_DWORD *)(v6 + 4) )
        break;
      if ( v4 == 16 )
        goto LABEL_5;
    }
    ++v2;
    v7 = sprintf(v5, "chain%d_voltage=%d;", v4, v12) + v3;
    v8 = v7 + sprintf(&a1[v7], "chain%d_voladded=%d;", v4, 0);
    v9 = v8 + sprintf(&a1[v8], "chain%d_basefreq=%d;", v4, 300);
    v3 = v9 + sprintf(&a1[v9], "chain%d_badcore=%d;", v4, 0);
    v5 = &a1[v3];
  }
  while ( v4 != 16 );
LABEL_5:
  v10 = &a1[v3 + sprintf(v5, "chainnum=%d;", v2)];
  return sprintf(v10, "version=%s;", byte_1B07E4);
}
