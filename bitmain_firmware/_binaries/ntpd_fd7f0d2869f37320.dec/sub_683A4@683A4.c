unsigned int sub_683A4()
{
  unsigned int result; // r0

  if ( worker_per_query )
    return sub_682DC();
  result = dword_B8CEC;
  if ( dword_B8CEC == -1 )
  {
    result = sub_682DC();
    dword_B8CEC = result;
  }
  return result;
}
