int __fastcall sub_2AD3E4(int a1, int a2)
{
  bool v2; // zf
  const char *v4; // r6
  int v5; // r4
  size_t v6; // r0

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 || (v4 = (const char *)sub_3245A4(a2), sub_2AD7AC(a1, ".gnu_debuglink")) )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    v5 = sub_2ADBE8(a1, ".gnu_debuglink");
    if ( v5 && (v6 = strlen(v4), sub_2ADDBC(a1, v5, ((v6 + 4) & 0xFFFFFFFC) + 4)) )
    {
      *(_DWORD *)(v5 + 64) = 2;
      return v5;
    }
    else
    {
      return 0;
    }
  }
}
