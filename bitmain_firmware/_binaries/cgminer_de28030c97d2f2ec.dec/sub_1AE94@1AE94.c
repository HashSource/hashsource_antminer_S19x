int *__fastcall sub_1AE94(int *result)
{
  int *v1; // [sp+Ch] [bp-8h]

  byte_87750 = 1;
  v1 = result;
  if ( *result != -1 )
  {
    shutdown(*result, 2);
    result = (int *)close(*v1);
    *v1 = -1;
  }
  return result;
}
