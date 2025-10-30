int sub_4A140()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] check if is unqualified happen.\n");
    sub_3AF5C(4, v2, 0, *(int *)"ied happen.\n");
  }
  v0 = 0;
  while ( !sub_266F0(v0) || !sub_4A06C(v0) )
  {
    if ( ++v0 == 4 )
      return 0;
  }
  return 1;
}
