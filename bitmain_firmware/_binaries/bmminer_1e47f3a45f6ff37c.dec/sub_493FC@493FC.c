void *sub_493FC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v1, "[DEBUG] HW sweep clear stats.\n");
    sub_3B6AC(4, v1, 0, *(int *)".\n");
  }
  return memset((void *)(dword_535D8C + 8), 0, (size_t)&unk_80A8A4);
}
