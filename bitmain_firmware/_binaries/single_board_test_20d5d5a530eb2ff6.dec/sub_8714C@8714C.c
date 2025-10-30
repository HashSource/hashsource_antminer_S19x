const char *__fastcall sub_8714C(int a1)
{
  int v1; // r0

  if ( !a1 )
    return "(NONE)";
  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 == 769 )
    return "TLSv1.0";
  else
    return (const char *)sub_8A720(v1);
}
