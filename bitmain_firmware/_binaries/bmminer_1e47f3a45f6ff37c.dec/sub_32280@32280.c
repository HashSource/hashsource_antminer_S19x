int __fastcall sub_32280(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r2
  int v7; // r3
  int v8; // t1
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r1
  int i; // r2
  int v15; // t1

  v4 = sub_26A44();
  if ( v4 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = a2 + (a1 << 10) - 4;
    v7 = 0;
    do
    {
      ++v7;
      v8 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      v5 += v8;
    }
    while ( v7 != v4 );
  }
  sub_26A44();
  v9 = sub_8F800(v5);
  v10 = sub_26A44();
  if ( v10 <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v11 = a2 + (a1 << 10);
    v12 = 0;
    v13 = v11 - 4;
    for ( i = 0; i != v10; ++i )
    {
      v15 = *(_DWORD *)(v13 + 4);
      v13 += 4;
      v12 += (v15 - v9) * (v15 - v9);
    }
  }
  sub_26A44();
  return sub_8F800(v12);
}
