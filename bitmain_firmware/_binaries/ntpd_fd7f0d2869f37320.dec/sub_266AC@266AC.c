int sub_266AC(int a1, int a2, int a3, ...)
{
  int v5; // r8
  char v7[512]; // [sp+4h] [bp-204h] BYREF
  va_list varg_r3; // [sp+224h] [bp+1Ch] BYREF

  va_start(varg_r3, a3);
  v5 = sub_65AFC(v7, 512, a3, (char *)varg_r3, (char *)varg_r3);
  sub_26294(a1, a2, v7);
  return v5;
}
