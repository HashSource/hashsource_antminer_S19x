void *sub_78868()
{
  void *result; // r0

  result = pthread_getspecific(dword_5BA78C);
  if ( result )
    return (void *)sub_87E68(result);
  return result;
}
