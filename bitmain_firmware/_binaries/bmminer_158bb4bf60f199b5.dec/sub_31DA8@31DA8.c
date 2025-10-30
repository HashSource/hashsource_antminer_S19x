void *sub_31DA8()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] HW sweep clear stats.\n");
    sub_47AB4(4, v1, 0);
  }
  return memset((void *)(dword_1AEA64 + 8), 0, 0x3B7C84u);
}
