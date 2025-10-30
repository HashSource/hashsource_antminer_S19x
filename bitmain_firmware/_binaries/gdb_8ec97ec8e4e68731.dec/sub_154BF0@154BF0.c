bool __fastcall sub_154BF0(int a1, int a2, const char *a3, int a4, int a5, const char *a6)
{
  const char *v6; // r0
  const char *v7; // r1

  v6 = a3;
  v7 = a6;
  if ( !a3 )
    v6 = "";
  if ( !a6 )
    v7 = "";
  return a1 == a4 && a2 == a5 && strcmp(v6, v7) == 0;
}
