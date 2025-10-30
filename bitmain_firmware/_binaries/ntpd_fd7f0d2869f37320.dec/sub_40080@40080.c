__int64 sub_40080()
{
  __int64 result; // r0
  int *v1; // r3

  result = 1712;
  numrequests = 0;
  numresppkts = 0;
  auth_timereset = 0;
  info_auth_keyid = 0;
  v1 = errorcounter;
  do
    *v1++ = 0;
  while ( v1 != &numresppkts );
  return result;
}
