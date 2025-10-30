char *__fastcall sub_54560(const char *a1, _DWORD *a2)
{
  int v6; // [sp+8h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-8h]

  v7 = sub_54718(a1, &v6);
  if ( v7 )
    return (char *)v7;
  *a2 = v6;
  if ( *a2 == v6 )
    return (char *)v7;
  else
    return sub_54310("value '%s' does not fit into an integer", a1);
}
