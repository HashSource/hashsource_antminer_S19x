int __fastcall sub_12C288(int a1, char *a2, _DWORD *a3, int a4)
{
  char *v4; // r4
  char *v5; // r9
  int v9; // r5
  char *v10; // r0
  int v11; // r3
  int v12; // r6
  const char *v13; // r0
  char *v15; // [sp+Ch] [bp-4h] BYREF

  v4 = 0;
  v5 = a2;
  v15 = a2;
  v9 = 0;
  while ( 1 )
  {
    v10 = sub_12820C(a1, a2, &v15, a4);
    if ( !v10 )
      break;
    if ( v9 )
      *((_DWORD *)v4 + 4) = v10;
    else
      v9 = (int)v10;
    a2 = v15;
    v4 = v10;
  }
  v11 = dword_487310;
  *a3 = v15;
  if ( v11 )
  {
    v12 = *(_DWORD *)sub_242FC8(0);
    v13 = (const char *)((int (__fastcall *)(_DWORD))loc_11E0F8)(*(_DWORD *)(a1 + 12));
    sub_2594B0(
      v12,
      "Read die from %s@0x%x of %s:\n",
      v13,
      &v5[-*(_DWORD *)(*(_DWORD *)(a1 + 12) + 4)],
      **(const char ***)a1);
    sub_12C260(v9);
  }
  return v9;
}
