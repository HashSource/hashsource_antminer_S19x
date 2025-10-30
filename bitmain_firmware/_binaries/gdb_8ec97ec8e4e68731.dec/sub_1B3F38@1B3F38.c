int __fastcall sub_1B3F38(const char ***a1, const char ***a2)
{
  const char **v2; // r0
  const char *v4; // r5
  const char *v5; // r4
  bool v6; // zf
  char *v7; // r5
  char *v8; // r0
  bool v9; // zf

  v2 = *a1;
  if ( !dword_46D448 )
  {
    v4 = *v2;
LABEL_4:
    v5 = **a2;
    goto LABEL_5;
  }
  v4 = (const char *)sub_21B3C4(v2);
  if ( !dword_46D448 )
    goto LABEL_4;
  v5 = (const char *)sub_21B3C4(*a2);
LABEL_5:
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  if ( v6 )
    sub_946E0("internal: compare_selectors(1)");
  v7 = strchr(v4, 32);
  v8 = strchr(v5, 32);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v7 == 0;
  if ( v9 )
    sub_946E0("internal: compare_selectors(2)");
  return sub_1B3E2C((unsigned __int8 *)v7 + 1, (unsigned __int8 *)v8 + 1);
}
