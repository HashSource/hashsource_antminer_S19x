void __fastcall sub_17094(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
