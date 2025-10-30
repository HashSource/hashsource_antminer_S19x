bool __fastcall sub_EA12C(int a1, char *a2, size_t a3)
{
  return _xpg_strerror_r(a1, a2, a3) == 0;
}
