int *__fastcall sub_348D3C(int *a1)
{
  int *v5; // r0

  _T1 = *a1;
  v5 = a1 + 1;
  __asm { LDC             p1, c8, [R0],#4 }
  _T1 = *v5++;
  __asm { LDC             p1, c9, [R0],#4 }
  _T1 = *v5++;
  __asm { LDC             p1, c10, [R0],#4 }
  _T1 = *v5;
  __asm { LDC             p1, c11, [R0],#4 }
  return v5 + 1;
}
