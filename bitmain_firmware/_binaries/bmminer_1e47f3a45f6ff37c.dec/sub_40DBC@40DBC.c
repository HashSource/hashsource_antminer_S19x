int sub_40DBC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  strcpy(v1, "This is fix-freq version\n");
  return sub_3B6AC(3, v1, 0, *(int *)"freq version\n");
}
