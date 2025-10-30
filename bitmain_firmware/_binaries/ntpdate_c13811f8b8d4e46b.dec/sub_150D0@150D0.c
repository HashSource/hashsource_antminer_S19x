void __fastcall __noreturn sub_150D0(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_1103C((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_1507C(a1, a2, (int)"RUNTIME_CHECK(%s) %s", a3, v6);
}
