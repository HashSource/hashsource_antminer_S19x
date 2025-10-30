bool __fastcall sub_1F6310(const char *a1)
{
  unsigned int v2; // r0
  _BOOL4 result; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  if ( !a1 || (v2 = strtoul(a1, &endptr, 10), !*a1) || *endptr )
    sub_946E0("Illegal argument for \"set remote system-call-allowed\" command");
  result = v2 != 0;
  dword_489348 = result;
  return result;
}
