void __fastcall sub_257014(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6

  v2 = *a1;
  v3 = a1[1];
  ((void (__fastcall *)(_DWORD, int))loc_256F7C)(*a1, v3);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 28))(v2, v3);
  free(a1);
}
