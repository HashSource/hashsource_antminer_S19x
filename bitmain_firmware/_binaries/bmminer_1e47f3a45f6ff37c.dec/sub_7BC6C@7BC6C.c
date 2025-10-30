void *sub_7BC6C()
{
  void *result; // r0

  result = pthread_getspecific(dword_5BF648);
  if ( result )
    return (void *)sub_8B204(result);
  return result;
}
