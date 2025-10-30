int __fastcall sub_74ADC(int a1, const void *a2, size_t a3)
{
  size_t v4; // r6
  const void *v6; // [sp+0h] [bp-1Ch] BYREF
  size_t n; // [sp+4h] [bp-18h]

  v6 = a2;
  n = a3;
  v4 = a3 + 1;
  memcpy((char *)&v6 + 1, a2, a3);
  v6 = &v6;
  n = v4;
  return sub_1C4F0C(a1, &v6, v4);
}
