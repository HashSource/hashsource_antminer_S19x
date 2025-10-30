int sub_42050(int a1, int a2, ...)
{
  int v3; // r7
  char v5[512]; // [sp+4h] [bp-208h] BYREF
  va_list varg_r2; // [sp+228h] [bp+1Ch] BYREF

  va_start(varg_r2, a2);
  v3 = sub_64BBC(v5, 512, a2, (char *)varg_r2, (char *)varg_r2);
  if ( stats_control )
    sub_41F44(a1, v5);
  return v3;
}
