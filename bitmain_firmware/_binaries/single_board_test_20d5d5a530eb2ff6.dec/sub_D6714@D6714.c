int __fastcall sub_D6714(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // r8
  int v9; // r5
  int v10; // r11
  int v11; // r9
  int v12; // r6
  int v13; // r0
  unsigned int v15; // [sp+Ch] [bp-8h]

  v8 = *(_DWORD *)(sub_D8920(a1) + 4);
  if ( v8 <= a4 )
  {
    v9 = a3;
    v15 = a4 - v8;
    do
    {
      v10 = sub_D8934(a1);
      v11 = sub_D8934(a1);
      v12 = sub_D8934(a1);
      v13 = sub_D8924(a1);
      sub_13EF84(v9, a2, v10, v11 + 128, v12 + 256, v13);
      v9 += v8;
      a2 += v8;
    }
    while ( v15 >= v9 - a3 );
  }
  return 1;
}
