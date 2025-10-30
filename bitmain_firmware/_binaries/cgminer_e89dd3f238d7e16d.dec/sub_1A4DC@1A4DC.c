int *__fastcall sub_1A4DC(int *result)
{
  int *v1; // [sp+Ch] [bp-8h]

  byte_865B8 = 1;
  v1 = result;
  if ( *result != -1 )
  {
    shutdown(*result, 2);
    result = (int *)close(*v1);
    *v1 = -1;
  }
  return result;
}
