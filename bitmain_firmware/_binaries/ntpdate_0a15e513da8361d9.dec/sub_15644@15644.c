void __fastcall __noreturn sub_15644(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_11534((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_155F0(a1, a2, (int)"RUNTIME_CHECK(%s) %s", a3, v6);
}
