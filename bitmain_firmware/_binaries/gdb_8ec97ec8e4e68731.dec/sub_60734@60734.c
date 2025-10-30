int __fastcall sub_60734(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int *v7; // r4
  int v8; // r0
  int v9; // r7

  v4 = sub_191664(a1);
  v5 = sub_2573D8(v4, *(_DWORD *)(a1 + 32));
  v6 = sub_92E28(v5);
  v7 = (int *)sub_242FDC(v6);
  v8 = a2;
  v9 = *v7;
  *v7 = v4;
  sub_D54D8(v8);
  *v7 = v9;
  sub_92E40(v6);
  return sub_2573D8(v4, 0);
}
