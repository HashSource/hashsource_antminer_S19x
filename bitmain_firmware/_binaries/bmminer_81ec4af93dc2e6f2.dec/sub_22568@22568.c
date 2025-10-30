int __fastcall sub_22568(int a1)
{
  int v3; // r0
  int v4; // r1
  char *v5; // r3
  char *v6; // r12
  int v7; // r0
  int v8; // t1

  if ( dword_AFE58 != 2 )
    return dword_B1070[a1 + 4];
  if ( !sub_26EB8() )
    return dword_B1070[a1];
  v3 = sub_26540();
  v4 = v3;
  if ( v3 <= 0 )
    return 0;
  v5 = (char *)&unk_52FE68 + 1024 * a1;
  v6 = (char *)&unk_52FE68 + 1024 * a1 + 4 * v3;
  v7 = 0;
  do
  {
    v8 = *(_DWORD *)v5;
    v5 += 4;
    v7 += v8;
  }
  while ( v6 != v5 );
  return sub_8C218(v7, v4);
}
