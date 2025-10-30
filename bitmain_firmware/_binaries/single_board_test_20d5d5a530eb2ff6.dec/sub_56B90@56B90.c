char *__fastcall sub_56B90(int a1, _BYTE *a2, signed int a3, int a4, int a5)
{
  char *result; // r0
  char *v10; // r5
  char *v11; // r4

  result = (char *)malloc((size_t)&loc_40036 + 2);
  v10 = result;
  if ( result )
  {
    v11 = sub_56B50(result, a1, a2, a3, a4, a5);
    free(v10);
    return v11;
  }
  return result;
}
