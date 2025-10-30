int sub_63C04()
{
  unsigned __int8 v2[32]; // [sp+8h] [bp-834h] BYREF
  char v3[2048]; // [sp+28h] [bp-814h] BYREF
  int v4; // [sp+828h] [bp-14h] BYREF
  __int16 v5; // [sp+82Ch] [bp-10h]
  __int16 v7; // [sp+836h] [bp-6h]

  if ( !sub_62FF4() )
    return -1;
  v4 = 84191829;
  v5 = 1284;
  memset(v2, 0, sizeof(v2));
  v7 = 0;
  if ( !sub_62DA0(dword_531538, (unsigned __int8 *)&v4, 6u, v2, 8u) )
    return v2[4] == 1;
  strcpy(v3, "power 0x05 cmd failed\n");
  sub_3AF5C(3, v3, 0, (int)v3);
  return -1;
}
