char *__fastcall sub_6FF98(int a1)
{
  char *result; // r0

  result = strerror(a1);
  if ( !result )
  {
    sub_93170(&unk_4748C8, 32, "(undocumented errno %d)", a1);
    return (char *)&unk_4748C8;
  }
  return result;
}
