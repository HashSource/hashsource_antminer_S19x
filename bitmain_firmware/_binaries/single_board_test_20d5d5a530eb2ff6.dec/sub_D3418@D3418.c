int __fastcall sub_D3418(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v13; // r5
  int v14; // r0

  v7 = sub_D8920(a1);
  v8 = sub_D8928(v7);
  if ( a4 || (v8 & 0xF0007u) - 1 > 1 )
  {
    v9 = sub_D8AD4(a1);
    v10 = sub_D8934(a1);
    v11 = sub_124B24(a2, 8 * v9, v10);
  }
  else
  {
    v13 = sub_D8AD4(a1);
    v14 = sub_D8934(a1);
    v11 = sub_1255E0(a2, 8 * v13, v14);
  }
  if ( v11 >= 0 )
    return 1;
  sub_D0048(6, 185, 176, (int)"crypto/evp/e_aria.c", 73);
  return 0;
}
