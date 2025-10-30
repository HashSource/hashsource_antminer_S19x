void *__fastcall sub_30D3B8(unsigned int a1, char *s)
{
  void *result; // r0

  result = (void *)strlen(s);
  if ( result )
    return sub_30D358(__SPAIR64__((unsigned int)s, a1), (size_t)result);
  return result;
}
