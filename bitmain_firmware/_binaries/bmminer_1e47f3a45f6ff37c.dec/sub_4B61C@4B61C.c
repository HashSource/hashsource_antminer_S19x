int __fastcall sub_4B61C(int a1, int a2)
{
  int v4; // r0
  char *v5; // r3
  int v6; // r4
  int v7; // t1
  int v8; // r6
  int v9; // r0
  char *v10; // r2
  int v11; // r4
  int v12; // t1

  v4 = sub_26A44();
  if ( v4 <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = (char *)&unk_808FFC + 1024 * a1 + a2;
    v6 = 0;
    do
    {
      v7 = *((_DWORD *)v5 + 1);
      v5 += 4;
      v6 += v7;
    }
    while ( v5 != (char *)(a2 + 4 * (v4 + (a1 << 8) + 2106367)) );
  }
  sub_26A44();
  v8 = sub_8F800(v6);
  v9 = sub_26A44();
  if ( v9 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = (char *)&unk_808FFC + 1024 * a1 + a2;
    v11 = 0;
    do
    {
      v12 = *((_DWORD *)v10 + 1);
      v10 += 4;
      v11 += (v12 - v8) * (v12 - v8);
    }
    while ( v10 != (char *)(a2 + 4 * (v9 + (a1 << 8) + 2106367)) );
  }
  sub_26A44();
  return sub_8F800(v11);
}
