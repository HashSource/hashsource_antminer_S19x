char *__fastcall sub_547D0(const char *a1, _DWORD *a2)
{
  int v6; // [sp+8h] [bp-Ch] BYREF
  char *v7; // [sp+Ch] [bp-8h]

  v7 = sub_54718(a1, &v6);
  if ( v7 )
    return v7;
  *a2 = v6;
  if ( v6 >= 0 )
    return 0;
  else
    return sub_54310("'%s' is negative", a1);
}
