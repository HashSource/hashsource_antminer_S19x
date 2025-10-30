int __fastcall sub_B59C8(int a1, int a2)
{
  char *v2; // r0
  int v3; // r3
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h] BYREF

  v9 = a1;
  v8 = a2;
  sub_B5774(&v9, &v8);
  sub_B57B4((int)&v9, &v8);
  v6 = !sub_A0C94(v8);
  v2 = *(char **)(v8 + 24);
  v3 = *v2;
  if ( !v6 && v3 == 23 )
    return 1;
  if ( v3 == 2 )
    return sub_B55AC(v9, v8);
  if ( (unsigned __int8)(v3 - 3) <= 1u )
    return ((int (__fastcall *)(int))loc_B58B0)(v9);
  if ( v3 != 1 )
    return 0;
  v5 = **(char **)(*((_DWORD *)v2 + 5) + 24);
  v6 = v5 == 10;
  if ( v5 != 10 )
    v6 = v5 == 7;
  v7 = v6;
  return v7 ^ 1;
}
