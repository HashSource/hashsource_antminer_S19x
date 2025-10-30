int __fastcall sub_5EB5C(int a1, char **a2, int a3)
{
  int v5; // r6
  bool v6; // zf
  char *v7; // r4
  const char *v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r2

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( (unsigned int)(a3 - 1) > 1 )
    sub_946E0("-var-delete: Usage: [-c] EXPRESSION.");
  v6 = a3 == 1;
  v7 = *a2;
  v8 = *a2;
  if ( v6 )
  {
    if ( !strcmp(v8, "-c") )
      sub_946E0("-var-delete: Missing required argument after '-c': variable object name");
    if ( *v7 == 45 )
      sub_946E0("-var-delete: Illegal variable object name");
    v9 = 0;
  }
  else
  {
    if ( strcmp(v8, "-c") )
      sub_946E0("-var-delete: Invalid option.");
    v7 = a2[1];
    v9 = 1;
  }
  v10 = sub_26FBAC(v7);
  v11 = sub_27049C(v10, v9);
  return sub_257504(v5, "ndeleted", v11);
}
