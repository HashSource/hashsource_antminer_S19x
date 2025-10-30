void __fastcall sub_19237C(int a1, int a2, int a3, int *a4)
{
  _DWORD *v7; // r0
  int *v8; // r3
  _DWORD *v9; // r12
  int v10; // r1
  int v11; // t1

  if ( a3 > 0 )
  {
    v7 = sub_93028(8 * a3 + 4);
    v8 = a4;
    v9 = v7;
    *(_DWORD *)(a2 + 8) = v7;
    *v7 = a3;
    do
    {
      v10 = v8[2];
      v9 += 2;
      v11 = *v8;
      v8 += 4;
      *v9 = v10;
      *(v9 - 1) = v11;
    }
    while ( v8 != &a4[4 * a3] );
  }
}
