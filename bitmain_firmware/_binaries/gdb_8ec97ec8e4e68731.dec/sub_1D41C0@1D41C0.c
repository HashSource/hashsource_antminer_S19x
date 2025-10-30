char *__fastcall sub_1D41C0(int *a1)
{
  int v2; // r0

  if ( !a1 )
    return "??";
  v2 = a1[1];
  if ( !v2 )
  {
    v2 = *a1;
    if ( !*a1 )
      return "??";
  }
  if ( dword_46D448 )
    return (char *)sub_21B3C4(v2);
  return *(char **)v2;
}
