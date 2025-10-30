_DWORD *__fastcall sub_D5CA0(_BYTE *a1)
{
  int v2; // r5
  int v3; // r0

  v2 = *(_DWORD *)sub_242FDC(a1);
  v3 = sub_D54F8(a1, 0, (int (__fastcall *)(_DWORD *))sub_C68E8);
  if ( !v3 )
  {
    if ( a1 && *a1 )
      v3 = sub_25738C(v2, "No tracepoint matching '%s'.\n", a1);
    else
      v3 = sub_25738C(v2, "No tracepoints.\n");
  }
  return sub_C7B18(v3);
}
