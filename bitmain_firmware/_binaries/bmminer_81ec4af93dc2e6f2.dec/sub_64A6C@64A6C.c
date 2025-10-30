int __fastcall sub_64A6C(int a1)
{
  char v3[2048]; // [sp+14h] [bp-820h] BYREF
  int v4; // [sp+814h] [bp-20h] BYREF
  __int16 v5; // [sp+818h] [bp-1Ch]
  int v6; // [sp+81Ch] [bp-18h] BYREF
  int v7; // [sp+820h] [bp-14h]
  int v8; // [sp+824h] [bp-10h]
  char v9; // [sp+829h] [bp-Bh]
  char v10; // [sp+82Ah] [bp-Ah]
  char v11; // [sp+82Bh] [bp-9h]
  int v12; // [sp+82Ch] [bp-8h]

  v12 = -2147482880;
  v11 = 4;
  v10 = 1;
  v6 = 0;
  v7 = 0;
  v4 = 17082965;
  v5 = 260;
  v8 = -1;
  v9 = 6;
  if ( sub_62DA0(a1, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
  {
    strcpy(v3, "get power fw ver failed\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v7) << 8) | (unsigned __int8)v7;
  }
}
