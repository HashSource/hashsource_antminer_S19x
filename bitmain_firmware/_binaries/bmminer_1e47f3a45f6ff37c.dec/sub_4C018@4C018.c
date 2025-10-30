int sub_4C018()
{
  int v0; // r4
  int v1; // r1
  int v2; // r2
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v4, "[DEBUG] check if is unqualified happen.\n");
    sub_3B6AC(4, v4, 0, *(int *)"ied happen.\n");
  }
  v0 = 0;
  while ( !sub_26C0C(v0) || !sub_4BF20(v0, v1, v2) )
  {
    if ( ++v0 == 4 )
      return 0;
  }
  return 1;
}
