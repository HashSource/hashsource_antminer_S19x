int sub_17440()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v1, "Note: rear fan is power off!\n");
    sub_3AF5C(3, v1, 0, *(_DWORD *)"\n");
  }
  return sub_528BC(1);
}
