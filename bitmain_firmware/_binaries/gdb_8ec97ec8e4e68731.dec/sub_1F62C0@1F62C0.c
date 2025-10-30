int __fastcall sub_1F62C0(const char *a1)
{
  char *v1; // r1

  if ( a1 )
    sub_946E0("Garbage after \"show remote system-call-allowed\" command: `%s'", a1);
  if ( dword_489348 )
    v1 = "";
  else
    v1 = "not ";
  return sub_259858("Calling host system(3) call from target is %sallowed\n", v1, "", "not ");
}
