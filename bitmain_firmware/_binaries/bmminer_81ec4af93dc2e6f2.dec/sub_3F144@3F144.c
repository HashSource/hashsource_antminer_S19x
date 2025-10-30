int sub_3F144()
{
  int v0; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_4B6CAC - 10;
  dword_4B6CAC -= 10;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "level down voltage 10");
    sub_3AF5C(3, v2, 0, *(int *)"oltage 10");
    v0 = dword_4B6CAC;
  }
  sub_21E80(v0);
  return 0;
}
