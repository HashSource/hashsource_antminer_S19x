void __fastcall sub_1EDA34(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  char *v7; // r5
  int v8; // r0
  char *v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r0

  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  v5 = dword_488C94;
  v6 = ((int (__fastcall *)(int))loc_1E2198)(5);
  if ( v6 == 2 )
  {
    sub_1AE8DC();
  }
  else
  {
    v7 = *(char **)v5;
    v8 = sub_1E2890(v6);
    v9 = &v7[v8];
    v10 = sub_16F654(v8);
    if ( !((int (__fastcall *)(int))loc_16D8FC)(v10) )
      sub_1E831C(0);
    *v7 = 122;
    v7[1] = 48;
    v7[2] = 44;
    v11 = sub_1E1C80(*(_DWORD *)(a3 + 4));
    v12 = sub_1E0F74((int)(v7 + 3), (unsigned int)v11);
    sub_93170(&v7[v12 + 3], v9 - &v7[v12 + 3], ",%d", *(_DWORD *)(a3 + 36));
    sub_1E7DEC(*(const char **)v5);
    sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
  }
}
