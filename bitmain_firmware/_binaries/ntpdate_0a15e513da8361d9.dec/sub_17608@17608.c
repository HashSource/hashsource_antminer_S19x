void __fastcall sub_17608(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
