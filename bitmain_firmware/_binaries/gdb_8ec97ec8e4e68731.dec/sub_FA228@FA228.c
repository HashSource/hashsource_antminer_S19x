int sub_FA228()
{
  size_t v0; // r0
  int v1; // r5
  int result; // r0

  v0 = strlen((const char *)dword_47ACA4);
  *(_BYTE *)sub_5B008(dword_47ACA4, dword_47ACA4 + v0) = 0;
  v1 = dword_47ACA4;
  if ( !strcmp((const char *)dword_47ACA4, "auto") )
    result = 0;
  else
    result = v1;
  dword_47ACA8 = result;
  return result;
}
