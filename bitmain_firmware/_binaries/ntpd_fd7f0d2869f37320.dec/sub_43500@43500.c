size_t __fastcall sub_43500(const char *a1)
{
  size_t result; // r0
  size_t v3; // r5
  void *v4; // r0

  result = strlen(a1);
  if ( result )
  {
    v3 = result + 1;
    dword_BDD40 = sub_64B04(dword_BDD40, result + 1, 0, 0);
    v4 = memcpy((void *)dword_BDD40, a1, v3);
    return sub_63A58(v4);
  }
  return result;
}
