int __fastcall sub_D60F0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // r6
  unsigned int v9; // r8
  int v10; // r4
  int v11; // r10
  int v12; // r3
  int v13; // r1
  int v14; // r0

  v8 = *(_DWORD *)(sub_D8920(a1) + 4);
  if ( v8 <= a4 )
  {
    v9 = a4 - v8;
    v10 = a3;
    do
    {
      v11 = sub_D8934(a1);
      v12 = sub_D8924(a1);
      v13 = a2;
      v14 = v10;
      v10 += v8;
      a2 += v8;
      sub_13F000(v14, v13, v11, v12);
    }
    while ( v9 >= v10 - a3 );
  }
  return 1;
}
