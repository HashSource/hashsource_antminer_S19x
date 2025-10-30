int sub_46EB0()
{
  FILE *v0; // r4
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = fopen("/config/scanfreqdone", "r");
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Check if sweep is already done.\n");
    sub_3AF5C(4, v2, 0, *(int *)"ready done.\n");
  }
  result = (int)v0;
  if ( v0 )
  {
    fclose(v0);
    return 1;
  }
  return result;
}
