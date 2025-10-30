int __fastcall sub_646C4(int a1)
{
  char v3[2048]; // [sp+10h] [bp-824h] BYREF
  int v4; // [sp+810h] [bp-24h] BYREF
  __int16 v5; // [sp+814h] [bp-20h]
  int v6; // [sp+818h] [bp-1Ch] BYREF
  int v7; // [sp+81Ch] [bp-18h]
  int v8; // [sp+820h] [bp-14h]
  __int16 v9; // [sp+826h] [bp-Eh]
  char v10; // [sp+829h] [bp-Bh]
  char v11; // [sp+82Ah] [bp-Ah]
  char v12; // [sp+82Bh] [bp-9h]
  int v13; // [sp+82Ch] [bp-8h]

  v13 = -2147482880;
  v12 = 4;
  v11 = 1;
  v6 = 0;
  v7 = 0;
  v4 = 17082965;
  v8 = -1;
  v9 = 5;
  v5 = 5;
  v10 = 6;
  if ( sub_62C28(a1, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6, 8u) )
  {
    strcpy(v3, "get power version failed\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v7) << 8) | (unsigned __int8)v7;
  }
}
