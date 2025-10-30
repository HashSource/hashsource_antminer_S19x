void __fastcall sub_72424(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
