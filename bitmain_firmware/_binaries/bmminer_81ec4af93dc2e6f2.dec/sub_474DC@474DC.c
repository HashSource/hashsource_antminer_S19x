void *sub_474DC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v1, "[DEBUG] HW sweep clear stats.\n");
    sub_3AF5C(4, v1, 0, *(int *)".\n");
  }
  return memset((void *)(dword_530F00 + 8), 0, (size_t)&unk_80A8A4);
}
