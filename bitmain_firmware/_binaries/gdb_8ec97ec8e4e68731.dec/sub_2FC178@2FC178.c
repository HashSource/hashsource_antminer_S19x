int __fastcall sub_2FC178(int a1, int a2)
{
  unsigned int v4; // r5
  unsigned int v5; // r0
  bool v7; // cc
  char *v8; // r0
  int v9; // r2
  int v10; // r1
  bool v11; // cc

  v4 = sub_2A678C(a1);
  v5 = sub_2A678C(a2);
  if ( !v5 || !v4 )
    goto LABEL_2;
  if ( v4 == v5 )
    return 1;
  if ( v4 != 11 )
  {
    if ( v5 == 11 )
    {
      v11 = v4 > 0xA;
      if ( v4 != 10 )
        v11 = v4 - 12 > 1;
      if ( !v11 )
      {
        LOWORD(v8) = -10520;
        v9 = a1;
        v10 = a2;
        goto LABEL_13;
      }
    }
    goto LABEL_7;
  }
  v7 = v5 > 0xA;
  if ( v5 != 10 )
    v7 = v5 - 12 > 1;
  if ( v7 )
  {
    if ( v5 == 11 )
      return 1;
LABEL_7:
    if ( v4 <= v5 )
      return 1;
LABEL_2:
    (*(void (__fastcall **)(int, int, unsigned int))(*(_DWORD *)(a2 + 4) + 340))(a2, 39, v4);
    return 1;
  }
  LOWORD(v8) = (unsigned __int16)"error: %B is compiled for the EP9312, whereas %B is compiled for XScale";
  v9 = a2;
  v10 = a1;
LABEL_13:
  HIWORD(v8) = (unsigned int)"error: %B is compiled for the EP9312, whereas %B is compiled for XScale" >> 16;
  sub_2A6A5C(v8, v10, v9);
  ((void (__fastcall *)(int))loc_2A6C48)(3);
  return 0;
}
