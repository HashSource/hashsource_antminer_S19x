int *__fastcall sub_EBA98(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r4

  v4 = (int *)sub_EB650();
  v5 = v4;
  if ( !v4 )
    return v5;
  sub_EB60C(*v4);
  *v5 = a2;
  if ( !a1 || sub_10BD3C(*(_DWORD *)(a1 + 8), v5) )
    return v5;
  *v5 = 0;
  sub_EB664((int)v5);
  return 0;
}
