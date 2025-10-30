int sub_92788()
{
  char *v0; // r5
  int v1; // r4
  int result; // r0

  v0 = "gdb_agent_helper_thread_id";
  v1 = 0;
  dword_4751F0 = 0;
  while ( 1 )
  {
    v1 += 2;
    result = sub_1B1C04(v0);
    if ( result )
      break;
    if ( v1 == 6 )
    {
      dword_4751F0 = 1;
      return result;
    }
    v0 = (&off_36E864)[v1];
  }
  sub_92724((int)"symbol `%s' not found\n", v0);
  return -1;
}
