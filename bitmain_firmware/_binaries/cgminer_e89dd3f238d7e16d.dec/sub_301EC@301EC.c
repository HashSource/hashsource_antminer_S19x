const char *__fastcall sub_301EC(int a1, float *a2)
{
  int v5; // [sp+Ch] [bp-8h]

  v5 = sub_545E4(a1, a2);
  if ( v5 )
    return (const char *)v5;
  if ( *a2 >= 125.0 && *a2 <= 500.0 )
    return 0;
  return "Value out of range";
}
