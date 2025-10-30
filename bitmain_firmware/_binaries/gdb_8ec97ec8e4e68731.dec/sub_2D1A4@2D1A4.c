int __fastcall sub_2D1A4(int a1, int a2, int a3, int a4)
{
  int v7; // r10
  int result; // r0
  int v9; // r9
  unsigned int v10; // r8
  int i; // r4
  int v13; // r2
  int v14; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r3
  _BYTE v20[8]; // [sp+Ch] [bp-8h] BYREF

  v7 = sub_1DD58C(a2);
  result = ((int (*)(void))loc_165BB8)();
  v9 = result;
  v10 = (a3 + 1) & 0xFFFFFFEF;
  for ( i = 0; i != 15; ++i )
  {
    while ( a3 != i && a3 != -1 )
    {
      if ( ++i == 15 )
        goto LABEL_8;
    }
    v13 = a4 + 4 * i;
    v14 = i;
    result = ((int (__fastcall *)(int, int, int))loc_1DE9C8)(a2, v14, v13);
  }
LABEL_8:
  if ( a3 == 25 || a3 == -1 )
  {
    if ( dword_469618 )
      v16 = a4 + 64;
    else
      v16 = a4 + 60;
    result = ((int (__fastcall *)(int, int, int))loc_1DE9C8)(a2, 25, v16);
  }
  if ( !v10 )
  {
    v17 = sub_15C250(a4 + 60, 4, v9);
    v18 = ((int (__fastcall *)(int, int))loc_169FA0)(v7, v17);
    sub_15C34C(v20, 4, v9, v19, v18, 0);
    return ((int (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a2, 15, v20);
  }
  return result;
}
