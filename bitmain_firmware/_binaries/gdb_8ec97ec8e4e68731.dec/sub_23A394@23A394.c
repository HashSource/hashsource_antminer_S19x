int sub_23A394(int a1, int a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  if ( !*(_BYTE *)(a1 + 34) )
  {
    sub_259858("  tdesc_type *field_type;\n");
    *(_BYTE *)(a1 + 34) = 1;
  }
  sub_259858("  field_type = ");
  return sub_259834(a2, (char *)varg_r2);
}
