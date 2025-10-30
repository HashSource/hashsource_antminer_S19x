void __fastcall sub_B9660(const char *a1, int a2, int a3)
{
  char *v3; // r5

  if ( !a1 || (a3 = *(unsigned __int8 *)a1, !*a1) )
    sub_946E0("Directory argument required.", a2, a3, a1);
  v3 = sub_93140("%s%c%s", (const char *)dword_47822C, 58, a1);
  if ( dword_47822C )
    free((void *)dword_47822C);
  dword_47822C = (int)v3;
}
