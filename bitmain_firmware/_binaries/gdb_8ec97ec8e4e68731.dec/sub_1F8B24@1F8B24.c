void __fastcall __noreturn sub_1F8B24(_DWORD *a1, const char **a2, int a3)
{
  int v5; // r5
  const char *v6; // r2

  v5 = sub_171258(a1);
  if ( dword_46D448 )
    v6 = (const char *)sub_21B3C4(a2);
  else
    v6 = *a2;
  sub_25A418(a3, "type %s = ", v6);
  sub_255DB0(v5, "", a3, 0);
}
