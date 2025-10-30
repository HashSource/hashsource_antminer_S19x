size_t __fastcall sub_29509C(const char *a1, int a2, int a3)
{
  size_t v6; // r4

  sub_2926F8();
  if ( a2 <= a3 )
    sub_294F5C(a2, a3 + 1);
  dword_4900D8 = a2;
  if ( *a1 )
    v6 = sub_294748(a1);
  else
    v6 = *(unsigned __int8 *)a1;
  sub_292748();
  return v6;
}
