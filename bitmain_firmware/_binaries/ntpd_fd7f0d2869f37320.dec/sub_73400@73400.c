void __fastcall sub_73400(const char *ident, int option, int facility)
{
  openlog(ident, option, facility);
}
