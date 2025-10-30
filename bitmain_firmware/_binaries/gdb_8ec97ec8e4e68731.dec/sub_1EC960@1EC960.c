bool __fastcall sub_1EC960(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  char *v7; // r8
  int v8; // r0

  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  v5 = dword_488C94;
  v6 = sub_1E3660(a2, a3, a4);
  if ( v6 )
    return 1;
  v7 = *(char **)v5;
  v8 = sub_1E2890(0);
  *v7 = 84;
  sub_1E29EC((int)(v7 + 1), (int)&v7[v8], a2, a3, a4);
  sub_1E7DEC(*(const char **)v5);
  sub_1E4EB8((char **)v5, (size_t *)(v5 + 4), 0, 0, 0);
  if ( **(_BYTE **)v5 == 79 )
    return *(_BYTE *)(*(_DWORD *)v5 + 1) == 75;
  return v6;
}
