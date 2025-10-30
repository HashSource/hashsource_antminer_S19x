int __fastcall sub_131198(unsigned int a1, int a2, int *a3)
{
  int v4; // r7
  unsigned int v6; // r3
  int v7; // r0
  int v8; // r3
  int v9; // r5
  int v10; // r0
  int result; // r0
  unsigned int v12; // r0
  _BOOL4 v13; // r2
  int v14; // r0
  char v15; // r3
  int v16; // r0
  int v17; // r0
  _DWORD v18[13]; // [sp+Ch] [bp-38h] BYREF

  v4 = *a3;
  v6 = *(unsigned __int8 *)(a3[34] + 10);
  if ( ((v6 >> 3) & 1) != a2 )
    goto LABEL_2;
  v12 = a3[8];
  v13 = a1 < v12 + a3[2] + a3[6];
  if ( a1 < v12 )
    v13 = 0;
  if ( v13 )
  {
    v14 = a3[21];
    v18[0] = a1;
    result = sub_323D18(v14, v18, a1);
    if ( result )
      return result;
    v9 = a3[34];
  }
  else
  {
LABEL_2:
    if ( (v6 & 4) != 0 )
      sub_946E0(
        "Dwarf Error: Type Unit at offset 0x%x contains external reference to offset 0x%x [in module %s].\n",
        a3[8],
        a1,
        **(const char ***)(v4 + 36));
    v7 = ((int (__fastcall *)(unsigned int))loc_122D04)(a1);
    v8 = *(_DWORD *)(v7 + 16);
    v9 = v7;
    if ( !v8 || (v10 = *(_DWORD *)(v8 + 84)) == 0 )
    {
      ((void (__fastcall *)(int, _DWORD, int, int, int (__fastcall *)(int, int, int, int), _DWORD))loc_12DAAC)(
        v9,
        0,
        1,
        1,
        sub_12EDD4,
        0);
      v8 = *(_DWORD *)(v9 + 16);
      v10 = *(_DWORD *)(v8 + 84);
    }
    *(_DWORD *)(v8 + 140) = 0;
    v18[0] = a1;
    result = sub_323D18(v10, v18, a1);
    if ( result )
      return result;
  }
  v15 = *(_BYTE *)(v9 + 10);
  v16 = v15 & 2;
  if ( (v15 & 2) == 0 )
    goto LABEL_15;
  do
  {
    v16 = sub_94700(
            (int)"dwarf2read.c",
            18730,
            "could not find partial DIE 0x%x in cache [from module %s]\n",
            a1,
            (const char *)**(_DWORD **)(v4 + 36));
LABEL_15:
    *(_BYTE *)(v9 + 10) = v15 | 2;
    ((void (__fastcall *)(int, int, int, int, int (__fastcall *)(int, int, int, int), int))loc_12DAAC)(
      v9,
      v16,
      1,
      1,
      sub_12EDD4,
      v16);
    v17 = *(_DWORD *)(*(_DWORD *)(v9 + 16) + 84);
    v18[0] = a1;
    result = sub_323D18(v17, v18, a1);
  }
  while ( !result );
  return result;
}
