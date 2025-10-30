int *__fastcall sub_D5D14(_BYTE *a1)
{
  int v2; // r5
  int *result; // r0
  int v4; // r0

  v2 = sub_D54F8(a1, 0, (int (__fastcall *)(_DWORD *))sub_C6900);
  result = (int *)sub_242FDC(v2);
  if ( !v2 )
  {
    v4 = *result;
    if ( a1 && *a1 )
      return (int *)sub_25738C(v4, "No watchpoint matching '%s'.\n");
    else
      return (int *)sub_25738C(v4, "No watchpoints.\n");
  }
  return result;
}
