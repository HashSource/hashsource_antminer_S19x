int __fastcall sub_2E4C0(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r8
  int v10; // r4
  int v11; // r5
  int v12; // r1
  _DWORD v14[5]; // [sp+Ch] [bp-18h] BYREF

  v7 = sub_15ECAC(a1, 13);
  v8 = a4 + v7;
  v9 = v7;
  v10 = 0;
  v11 = v8;
  do
  {
    v12 = v10++;
    sub_250D40(a2, v12, v11);
    v11 += 4;
  }
  while ( v10 != 16 );
  sub_250D40(a2, 25, v8 + 64);
  sub_15CD0C(v14, v9, a3);
  return sub_250DF8(a2, v14[0], v14[1], v14[2], v14[3], v14[4]);
}
