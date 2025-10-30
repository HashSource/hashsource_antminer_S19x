int __fastcall sub_B9450(_DWORD *a1)
{
  int result; // r0

  *a1 = 0;
  sub_B8210(a1 + 1);
  sub_B8210(a1 + 6);
  result = sub_B8210(a1 + 11);
  a1[17] = 0;
  a1[16] = 0;
  a1[18] = 0;
  return result;
}
