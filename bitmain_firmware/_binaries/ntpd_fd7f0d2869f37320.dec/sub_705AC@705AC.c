void __fastcall __noreturn sub_705AC(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_7487C(isc_msgcat, 1, 101, "failed");
  sub_70558(a1, a2, (int)"RUNTIME_CHECK(%s) %s", a3, v6);
}
