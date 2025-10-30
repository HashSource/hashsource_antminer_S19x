int sub_5CD38()
{
  char *v0; // r0
  int result; // r0

  v0 = getenv("PATH");
  if ( !v0 )
    v0 = "";
  result = sub_327254(v0);
  dword_474830 = result;
  return result;
}
