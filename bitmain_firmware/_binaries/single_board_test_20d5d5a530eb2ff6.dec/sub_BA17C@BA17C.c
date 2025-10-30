int __fastcall sub_BA17C(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int v5; // r4
  int v10; // r1
  int v11; // r3
  int v12; // r2
  int v13; // r0
  int v14; // r5
  int v15; // r6

  v5 = a4 / 2;
  sub_B9930(a1, a2, a3, a4 / 2, 0, 0, a5);
  if ( v5 > 31 )
  {
    v14 = a5 + 4 * a4;
    v15 = a1 + 4 * v5;
    sub_BA17C(a5, a2, &a3[v5], v5, v14);
    bn_add_words(v15, v15, a5, v5);
    sub_BA17C(a5, &a2[v5], a3, v5, v14);
    v10 = v15;
    v11 = v5;
    v12 = a5;
    v13 = v15;
  }
  else
  {
    sub_BA0E0(a5, (int)a2, &a3[v5], v5);
    sub_BA0E0(a5 + 4 * v5, (int)&a2[v5], a3, v5);
    bn_add_words(a1 + 4 * v5, a1 + 4 * v5, a5, v5);
    v10 = a1 + 4 * v5;
    v11 = v5;
    v12 = a5 + 4 * v5;
    v13 = v10;
  }
  return bn_add_words(v13, v10, v12, v11);
}
