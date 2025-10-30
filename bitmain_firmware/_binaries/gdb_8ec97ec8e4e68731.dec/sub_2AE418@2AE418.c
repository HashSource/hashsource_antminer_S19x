int __fastcall sub_2AE418(char *name)
{
  int result; // r0

  if ( off_470AA4 && !strcmp(name, *off_470AA4) )
    return 1;
  result = (int)sub_2AE2E0(name);
  if ( result )
  {
    off_470AA4 = (char **)result;
    return 1;
  }
  return result;
}
