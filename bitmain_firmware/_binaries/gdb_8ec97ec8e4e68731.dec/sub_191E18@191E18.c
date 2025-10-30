_DWORD *__fastcall sub_191E18(int a1, int a2)
{
  int v3; // r7
  int v4; // r4
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r4

  v3 = *(_DWORD *)(a1 + 12);
  v4 = sub_15ECB4(*(_DWORD *)(v3 + 4));
  v5 = ((int (__fastcall *)(int, int))loc_167704)(v4, a2);
  v6 = ((int (__fastcall *)(int, int))loc_1DD420)(v4, v5);
  v7 = sub_93028(v6 + 15);
  v7[1] = sub_15E918(*(_DWORD *)(v3 + 4), v5, (int)(v7 + 3));
  *v7 = v6;
  v7[2] = sub_191D5C;
  return v7;
}
