int __fastcall sub_195B70(const char **a1, const char **a2)
{
  int result; // r0

  result = strcmp(a1[1], a2[1]);
  if ( !result )
    return strcmp(*a1, *a2);
  return result;
}
