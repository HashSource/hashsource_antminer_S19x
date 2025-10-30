bool __fastcall sub_23FD8(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  int v5; // r5
  int v7; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  _BYTE v9[4]; // [sp+Ch] [bp-4h] BYREF

  v3 = sub_15DE14(a2);
  v4 = sub_15DDFC(a2);
  if ( sub_1B859C(v3, ".plt") )
    return 1;
  v5 = sub_230020(v4, &v7, 4);
  if ( v5 )
    return 1;
  if ( !sub_C37B8(v4, v9, v8, 0) && sub_2376C(a2) )
    return sub_20B10(a2, v4) != 0;
  return v5;
}
