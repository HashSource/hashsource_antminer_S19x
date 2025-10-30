unsigned int __fastcall sub_2E064(unsigned int *a1, unsigned int *a2)
{
  unsigned int result; // r0

  *a1 = sub_2DF70(a2[7]);
  a1[1] = sub_2DF70(a2[6]);
  a1[2] = sub_2DF70(a2[5]);
  a1[3] = sub_2DF70(a2[4]);
  a1[4] = sub_2DF70(a2[3]);
  a1[5] = sub_2DF70(a2[2]);
  a1[6] = sub_2DF70(a2[1]);
  result = sub_2DF70(*a2);
  a1[7] = result;
  return result;
}
