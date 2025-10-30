int sub_6268C()
{
  int v2; // [sp+8h] [bp-834h] BYREF
  int v3; // [sp+Ch] [bp-830h]
  int v4; // [sp+10h] [bp-82Ch]
  int v5; // [sp+14h] [bp-828h]
  int v6; // [sp+18h] [bp-824h]
  int v7; // [sp+1Ch] [bp-820h]
  int v8; // [sp+20h] [bp-81Ch]
  int v9; // [sp+24h] [bp-818h]
  char v10[2048]; // [sp+28h] [bp-814h] BYREF
  int v11; // [sp+828h] [bp-14h] BYREF
  __int16 v12; // [sp+82Ch] [bp-10h]
  __int16 v14; // [sp+836h] [bp-6h]

  if ( !sub_6197C() )
    return -1;
  v11 = 84191829;
  v12 = 1284;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v14 = 0;
  if ( !sub_61724(dword_536348, (unsigned __int8 *)&v11, 6u, (unsigned __int8 *)&v2, 8u) )
    return (unsigned __int8)v3 == 1;
  strcpy(v10, "power 0x05 cmd failed\n");
  sub_3B6AC(3, v10, 0, (int)v10);
  return -1;
}
