int sub_173DC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v1, "Note: rear fan is power on!\n");
    sub_3AF5C(3, v1, 0, *(_DWORD *)"");
  }
  return sub_52824(1);
}
