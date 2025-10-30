int __fastcall sub_147E70(int a1, char *a2)
{
  int result; // r0
  int v4; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+4h] [bp-14h]
  int v6; // [sp+8h] [bp-10h]
  int v7; // [sp+Ch] [bp-Ch]
  int v8; // [sp+10h] [bp-8h]
  int v9; // [sp+14h] [bp-4h]

  result = ((int (*)(void))loc_11EB1C)();
  if ( *(_DWORD *)(dword_4872D8 + 424) )
  {
    v4 = *(_DWORD *)(dword_4872D8 + 424);
    v5 = 0;
    v6 = 0;
    v7 = 1;
    v8 = 3;
    v9 = sub_12B490(v4, a2);
    while ( 1 )
    {
      result = sub_12B72C(&v4);
      if ( !result )
        break;
      sub_147398(result);
    }
  }
  return result;
}
