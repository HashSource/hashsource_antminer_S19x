int __fastcall sub_17B78(const struct sockaddr *a1)
{
  int result; // r0
  int *v3; // r3

  result = sub_17818(a1, 128, 0);
  if ( !result )
  {
    if ( a1->sa_family == 2 )
      v3 = &any_interface;
    else
      v3 = &any6_interface;
    return *v3;
  }
  return result;
}
