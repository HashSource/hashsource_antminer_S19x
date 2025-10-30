char *__fastcall sub_1204D0(int a1)
{
  int v1; // r0
  char *result; // r0
  char *v3; // [sp+Ch] [bp-4h] BYREF

  v1 = sub_110544(a1);
  result = sub_EAC84(v1);
  v3 = result;
  if ( result )
    return (char *)(sub_EAC70((int)&v3, (int)"G", 14, 4, (int (__fastcall *)(int, int))sub_11FDAC) != 0);
  return result;
}
