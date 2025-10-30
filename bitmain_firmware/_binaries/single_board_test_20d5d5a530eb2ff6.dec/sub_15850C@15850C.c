int __fastcall sub_15850C(int *a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r3

  if ( !sub_B89E4(a1[10], a2) )
    return 0;
  if ( (sub_1759E8(a1[10], a1 + 11, 6) & 0xFFFFFFFD) != 4 )
  {
    sub_D0048(16, 195, 131, (int)"crypto/ec/ec2_smpl.c", 106);
    return 0;
  }
  if ( !sub_174D98(a1[17], a3, a1 + 11) )
    return 0;
  v8 = a1[11];
  v9 = v8 + 126;
  v10 = v8 + 63;
  if ( v10 >= 0 )
    v9 = v10;
  if ( !sub_B89D8(a1[17], v9 >> 6) )
    return 0;
  sub_133580((_DWORD *)a1[17]);
  if ( !sub_174D98(a1[18], a4, a1 + 11) )
    return 0;
  v11 = a1[11];
  v12 = v11 + 126;
  v13 = v11 + 63;
  if ( v13 >= 0 )
    v12 = v13;
  if ( !sub_B89D8(a1[18], v12 >> 6) )
    return 0;
  sub_133580((_DWORD *)a1[18]);
  return 1;
}
