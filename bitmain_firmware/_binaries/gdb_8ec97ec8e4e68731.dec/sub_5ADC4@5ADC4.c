int __fastcall sub_5ADC4(unsigned __int8 **a1, int a2, int a3)
{
  int result; // r0
  unsigned __int8 *v5; // [sp+4h] [bp-4h] BYREF

  v5 = *a1;
  result = sub_5AB7C(&v5, 0, a3, v5);
  *a1 = v5;
  return result;
}
