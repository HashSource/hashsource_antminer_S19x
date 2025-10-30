int __fastcall sub_D6EB0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // r6
  unsigned int v9; // r7
  int v10; // r4
  int v11; // r2
  int v12; // r0

  v8 = *(_DWORD *)(sub_D8920(a1) + 4);
  if ( v8 <= a4 )
  {
    v9 = a4 - v8;
    v10 = a3;
    do
    {
      v11 = sub_D8934(a1);
      v12 = v10;
      v10 += v8;
      sub_DD774(v12, a2, v11);
      a2 += v8;
    }
    while ( v9 >= v10 - a3 );
  }
  return 1;
}
