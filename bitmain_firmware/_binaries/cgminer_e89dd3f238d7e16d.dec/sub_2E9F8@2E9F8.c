const char *__fastcall sub_2E9F8(int a1, _DWORD *a2, int a3, int a4)
{
  int v9; // [sp+14h] [bp-8h]

  v9 = sub_54560(a1, a2);
  if ( v9 )
    return (const char *)v9;
  if ( a3 <= *a2 && a4 >= *a2 )
    return 0;
  return "Value out of range";
}
