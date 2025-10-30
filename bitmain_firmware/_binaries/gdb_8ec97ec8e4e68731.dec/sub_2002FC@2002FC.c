char *__fastcall sub_2002FC(int a1)
{
  int v2; // r0
  int v3; // r5
  char *result; // r0
  int (__fastcall *v5)(int); // r3

  v2 = sub_16F654(a1);
  v3 = *(_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(v2, dword_4893A0);
  if ( *(_DWORD *)(a1 + 1048) )
  {
    free(*(void **)(a1 + 1048));
    *(_DWORD *)(a1 + 1052) = 0;
    *(_DWORD *)(a1 + 1048) = 0;
  }
  ((void (__fastcall *)(_DWORD))loc_1625A8)(*(_DWORD *)(a1 + 1036));
  *(_DWORD *)(a1 + 1036) = 0;
  *(_BYTE *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1044) = 0;
  *(_DWORD *)(a1 + 1060) = 0;
  *(_DWORD *)(a1 + 1056) = 0;
  result = strcpy((char *)(a1 + 520), (const char *)(a1 + 8));
  v5 = *(int (__fastcall **)(int))(v3 + 8);
  if ( v5 )
    return (char *)v5(a1);
  return result;
}
