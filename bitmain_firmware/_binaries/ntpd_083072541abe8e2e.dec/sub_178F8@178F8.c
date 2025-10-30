char *__fastcall sub_178F8(const struct sockaddr *a1)
{
  char *result; // r0
  int *v3; // r3

  result = sub_1759C(a1, 128, 0);
  if ( !result )
  {
    if ( a1->sa_family == 2 )
      v3 = &any_interface;
    else
      v3 = &any6_interface;
    return (char *)*v3;
  }
  return result;
}
