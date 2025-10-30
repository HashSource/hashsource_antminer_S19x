int *__fastcall sub_10E568(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0
  unsigned int v9; // r4
  int v10; // r4
  int v12; // r0

  v8 = sub_10E0BC(a1, a2, a3);
  if ( v8 != -1 )
  {
    v9 = v8;
    if ( a3 >= -1 )
    {
      v10 = sub_10E124(a1, v8);
      return sub_10E524(v10, 0, a4);
    }
    if ( sub_10E0BC(a1, a2, v8) == -1 )
    {
      v12 = sub_10E124(a1, v9);
      v10 = v12;
      if ( a3 == -2 || sub_10E504(v12) == 1 )
        return sub_10E524(v10, 0, a4);
    }
  }
  return 0;
}
