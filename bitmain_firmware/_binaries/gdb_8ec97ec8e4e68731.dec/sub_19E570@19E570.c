void __fastcall __noreturn sub_19E570(_DWORD *a1, int a2, int a3)
{
  int v5; // r6
  const char *v6; // r0
  const char *v7; // r2

  v5 = sub_171258(a1);
  sub_25A418(a3, "TYPE ");
  v6 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 24) + 8);
  if ( v6 && !strcmp(v6, *(const char **)a2) )
  {
    sub_25A418(a3, "<builtin> = ");
  }
  else
  {
    if ( dword_46D448 )
      v7 = (const char *)sub_21B3C4(a2);
    else
      v7 = *(const char **)a2;
    sub_25A418(a3, "%s = ", v7);
  }
  sub_255DB0(v5, "", a3, 0);
}
