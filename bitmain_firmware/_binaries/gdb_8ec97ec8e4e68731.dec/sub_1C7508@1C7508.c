int __fastcall sub_1C7508(int a1, unsigned __int8 *a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int *v8; // r0
  _BYTE v10[64]; // [sp+4h] [bp-4Ch] BYREF
  int v11; // [sp+44h] [bp-Ch]

  v4 = sub_26EEB8();
  sub_26BC70(a1);
  sub_B78E4(v4);
  sub_259F10("$%d = ", v4);
  sub_B7968();
  v5 = sub_266628(v10, a2[4]);
  v6 = a2[6];
  v7 = a2[5];
  v11 = v6;
  v8 = (int *)sub_242F8C(v5);
  sub_1C57D8(a1, v7, (int)v10, *v8);
  sub_259F10((const char *)&word_356638);
  return sub_B7988();
}
