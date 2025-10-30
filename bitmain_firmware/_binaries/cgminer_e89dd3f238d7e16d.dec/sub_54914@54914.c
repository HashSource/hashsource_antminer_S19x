char *__fastcall sub_54914(char *a1, _BYTE *a2)
{
  const char *v2; // r3

  if ( *a2 )
    v2 = "true";
  else
    v2 = "false";
  return strncpy(a1, v2, 0x50u);
}
