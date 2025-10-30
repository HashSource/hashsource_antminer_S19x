int __fastcall sub_EC1C4(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r4
  int v12; // r0

  v4 = sub_EBF3C(a1);
  v5 = sub_EBFDC(a2);
  if ( (((unsigned int)v4 >> 31) & ((unsigned int)v5 >> 31)) != 0 )
    return 2;
  if ( v4 >= 0 )
    v7 = (unsigned int)v5 >> 31;
  else
    v7 = 0;
  if ( v7 )
    return -1;
  if ( v5 >= 0 )
    v8 = (unsigned int)v4 >> 31;
  else
    v8 = 0;
  if ( v8 )
    return 3;
  v9 = sub_EBF54(a1);
  v10 = sub_EBFF4(a2);
  v11 = sub_11054C(v9);
  v12 = sub_11054C(v10);
  return sub_1280A0(v11, v12) == 0;
}
