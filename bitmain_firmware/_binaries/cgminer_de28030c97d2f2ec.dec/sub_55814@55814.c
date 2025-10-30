int __fastcall sub_55814(int a1, size_t *a2)
{
  *a2 = strcspn((const char *)(a1 + 1), "|= ");
  return a1 + 1;
}
