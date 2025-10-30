int __fastcall sub_16F73C(int *a1, int a2)
{
  int result; // r0

  result = GENERAL_NAME_free(*a1);
  *a1 = a2;
  return result;
}
