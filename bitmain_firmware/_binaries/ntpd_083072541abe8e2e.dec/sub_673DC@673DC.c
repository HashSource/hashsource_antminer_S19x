unsigned int sub_673DC()
{
  unsigned int result; // r0

  if ( worker_per_query )
    return sub_67318();
  result = dword_B7CEC;
  if ( dword_B7CEC == -1 )
  {
    result = sub_67318();
    dword_B7CEC = result;
  }
  return result;
}
