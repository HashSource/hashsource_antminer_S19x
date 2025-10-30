int __fastcall sub_D4AD0(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // r6
  int v9; // r0
  int v10; // r7
  unsigned int v11; // r8
  int v12; // r4
  int v13; // r1
  int v14; // r0

  v8 = sub_D8904(a1);
  v9 = sub_D8934(a1);
  if ( v8 <= a4 )
  {
    v10 = v9;
    v11 = a4 - v8;
    v12 = a3;
    do
    {
      v13 = a2;
      v14 = v12;
      v12 += v8;
      a2 += v8;
      (*(void (__fastcall **)(int, int, int))(v10 + 280))(v14, v13, v10);
    }
    while ( v11 >= v12 - a3 );
  }
  return 1;
}
