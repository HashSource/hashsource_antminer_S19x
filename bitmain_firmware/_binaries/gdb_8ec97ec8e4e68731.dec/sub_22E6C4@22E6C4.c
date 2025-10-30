va_list sub_22E6C4(int a1, int a2, int a3, int a4, ...)
{
  va_list result; // r0
  va_list va; // [sp+10h] [bp+Ch] BYREF

  va_start(va, a4);
  va_copy(result, va);
  return result;
}
