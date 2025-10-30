void __fastcall sub_200A30(void *a1)
{
  int v2; // r0
  int v3; // r5

  v2 = sub_16F654((int)a1);
  v3 = *(_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(v2, dword_4893A0);
  sub_2002FC((int)a1);
  (*(void (__fastcall **)(void *))(v3 + 4))(a1);
  if ( a1 )
    free(a1);
}
