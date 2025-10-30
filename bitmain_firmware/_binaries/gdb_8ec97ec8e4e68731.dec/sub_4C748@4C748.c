int sub_4C748()
{
  int result; // r0
  int *v1; // r4
  int v2; // r1
  int v3; // r3
  int stat_loc; // [sp+4h] [bp-4h] BYREF

  if ( dword_473720 )
  {
    result = getppid();
    if ( result != dword_473720 )
      exit(0);
  }
  else
  {
    v1 = (int *)sub_4CDD8();
    result = *v1;
    if ( *v1 >= 0 )
    {
      result = waitpid(result, &stat_loc, 1);
      if ( result )
      {
        if ( result == -1 )
        {
          v3 = *_errno_location();
          if ( v3 == 10 )
            result = sub_946B0("mount namespace helper vanished?");
          else
            result = sub_94720("nat/linux-namespaces.c", 741, "unhandled error %d", v3);
        }
        else if ( result == *v1 )
        {
          v2 = stat_loc & 0x7F;
          if ( (stat_loc & 0x7F) != 0 )
          {
            if ( (v2 + 1) << 24 >> 25 <= 0 )
              result = sub_94720("nat/linux-namespaces.c", 753, "unhandled status %d", stat_loc);
            else
              result = sub_946B0("mount namespace helper killed by signal %d", v2);
          }
          else
          {
            result = sub_946B0("mount namespace helper exited with status %d", BYTE1(stat_loc));
          }
        }
        else
        {
          result = sub_94720("nat/linux-namespaces.c", 757, "unknown pid %d", result);
        }
        *v1 = -1;
      }
    }
  }
  return result;
}
