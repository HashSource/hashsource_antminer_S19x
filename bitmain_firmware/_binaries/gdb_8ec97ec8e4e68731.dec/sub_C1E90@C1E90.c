_DWORD *__fastcall sub_C1E90(int a1)
{
  void **v2; // r4
  _DWORD *result; // r0

  v2 = (void **)sub_93094(1u, 0xCu);
  *v2 = (void *)a1;
  sub_1627C4(a1);
  sub_948C4(a1, v2 + 1, v2 + 2);
  result = sub_93094(1u, 0x2E4u);
  result[1] = "bfd";
  result[2] = "BFD backed target";
  result[3] = "You should never see this";
  result[4] = v2;
  result[77] = sub_C1DF4;
  result[97] = sub_C1E38;
  result[6] = sub_C1E00;
  result[184] = 3840;
  return result;
}
