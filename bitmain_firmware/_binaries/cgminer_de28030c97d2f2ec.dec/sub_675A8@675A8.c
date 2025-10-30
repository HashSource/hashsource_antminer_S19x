_DWORD *__fastcall sub_675A8(void *a1, size_t a2, int a3)
{
  _DWORD *v6; // [sp+10h] [bp-Ch]
  void *v7; // [sp+14h] [bp-8h]

  if ( !a1 )
    return 0;
  if ( a3 )
  {
    v7 = a1;
  }
  else
  {
    v7 = sub_64E60(a1, a2);
    if ( !v7 )
      return 0;
  }
  v6 = sub_64DA4(0x10u);
  if ( v6 )
  {
    sub_65E9C(v6, 2);
    v6[2] = v7;
    v6[3] = a2;
    return v6;
  }
  else
  {
    sub_64DEC(v7);
    return 0;
  }
}
