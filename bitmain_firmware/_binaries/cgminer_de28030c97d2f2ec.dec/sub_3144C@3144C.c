const char *__fastcall sub_3144C(int a1, float *a2)
{
  int v5; // [sp+Ch] [bp-8h]

  v5 = sub_5527C(a1, a2);
  if ( v5 )
    return (const char *)v5;
  if ( *a2 >= 100.0 && *a2 <= 250.0 )
    return 0;
  return "Value out of range";
}
