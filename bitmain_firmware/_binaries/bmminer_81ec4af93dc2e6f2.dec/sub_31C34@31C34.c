int __fastcall sub_31C34(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r2
  int v8; // t1
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r2
  int v14; // r1
  int v15; // t1
  double v16; // r0

  v4 = sub_26540();
  if ( v4 > 0 )
  {
    v5 = 0;
    v6 = 0;
    v7 = a2 + (a1 << 10) - 4;
    do
    {
      ++v6;
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      v5 += v8;
    }
    while ( v4 != v6 );
  }
  else
  {
    v5 = 0;
  }
  sub_26540();
  v9 = sub_8C490(v5);
  v10 = sub_26540();
  if ( v10 <= 0 )
    return sub_26540();
  v11 = a2 + (a1 << 10);
  v12 = 0;
  v13 = 0;
  v14 = v11 - 4;
  do
  {
    v15 = *(_DWORD *)(v14 + 4);
    v14 += 4;
    ++v13;
    v12 += (v15 - v9) * (v15 - v9);
  }
  while ( v10 != v13 );
  sub_26540();
  LODWORD(v16) = sub_8C490(v12);
  if ( (double)SLODWORD(v16) < 0.0 )
    v16 = sqrt(v16);
  return LODWORD(v16);
}
