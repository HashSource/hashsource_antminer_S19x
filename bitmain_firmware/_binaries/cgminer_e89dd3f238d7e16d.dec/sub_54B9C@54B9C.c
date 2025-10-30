int __fastcall sub_54B9C(int a1, size_t *a2)
{
  *a2 = strcspn((const char *)(a1 + 1), "|= ");
  return a1 + 1;
}
