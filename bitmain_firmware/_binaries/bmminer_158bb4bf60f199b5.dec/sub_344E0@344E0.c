int sub_344E0()
{
  FILE *v0; // r4
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = (FILE *)fopen64("/config/scanfreqdone", "r");
  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v2, "[DEBUG] Check if sweep is already done.\n");
    sub_47AB4(4, v2, 0);
  }
  result = (int)v0;
  if ( v0 )
  {
    fclose(v0);
    return 1;
  }
  return result;
}
