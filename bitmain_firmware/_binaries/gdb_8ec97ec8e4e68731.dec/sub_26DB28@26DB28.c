int *__fastcall sub_26DB28(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r0
  int v7; // r1

  if ( a4 != 1 )
    sub_946E0("You must provide one argument for $_isvoid.", a2, a3, a5);
  v5 = **(char **)(*(_DWORD *)(*(_DWORD *)a5 + 64) + 24);
  sub_1780B4();
  return sub_26DAF4(*(_DWORD **)(v6 + 12), v7, v5 == 10, 0);
}
