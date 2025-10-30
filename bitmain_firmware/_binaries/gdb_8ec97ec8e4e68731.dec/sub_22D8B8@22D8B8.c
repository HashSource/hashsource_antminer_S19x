int sub_22D8B8()
{
  int result; // r0
  int i; // r4

  result = sub_259F10("The current target stack is:\n");
  for ( i = dword_489F70; i; i = *(_DWORD *)i )
    result = sub_259F10("  - %s (%s)\n", *(const char **)(i + 4), *(const char **)(i + 8));
  return result;
}
