void *__fastcall sub_6DD44(void *result)
{
  void *v1; // r4

  if ( result )
  {
    v1 = result;
    sub_6DB00();
    return j_memcpy(v1, dword_65DE48, 0x124u);
  }
  return result;
}
