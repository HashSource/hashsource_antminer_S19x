bool __fastcall sub_9F418(const char *a1, _DWORD *a2)
{
  char *v4; // r0
  bool v5; // zf
  int v6; // r4

  v4 = sub_9EB80(a1);
  v5 = a1 == v4;
  if ( a1 != v4 )
    v5 = v4 == 0;
  v6 = !v5;
  *a2 = 0;
  if ( v5 )
    return v6;
  else
    return *v4 != 60;
}
