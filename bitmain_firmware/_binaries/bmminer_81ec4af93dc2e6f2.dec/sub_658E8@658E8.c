int __fastcall sub_658E8(int a1, unsigned __int8 a2)
{
  char v4[2048]; // [sp+14h] [bp-820h] BYREF
  int v5; // [sp+814h] [bp-20h] BYREF
  int v6; // [sp+818h] [bp-1Ch]
  int v7; // [sp+81Ch] [bp-18h] BYREF
  unsigned __int8 v8; // [sp+820h] [bp-14h]
  char v9; // [sp+821h] [bp-13h]
  __int16 v10; // [sp+822h] [bp-12h]
  __int16 v11; // [sp+826h] [bp-Eh]
  int v12; // [sp+828h] [bp-Ch]
  char v13; // [sp+82Dh] [bp-7h]
  char v14; // [sp+82Eh] [bp-6h]
  char v15; // [sp+82Fh] [bp-5h]

  v15 = 6;
  v14 = -127;
  v7 = -2130269611;
  v5 = 0;
  v6 = 0;
  v12 = -2147482880;
  v11 = a2 + 135;
  v8 = a2;
  v9 = 0;
  v10 = v11;
  v13 = 8;
  if ( sub_62C28(a1, (unsigned __int8 *)&v7, 8u, (unsigned __int8 *)&v5, 8u) )
  {
    strcpy(v4, "set watchdog failed\n");
    sub_3AF5C(0, v4, 0, (int)v4);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v6) << 8) | (unsigned __int8)v6;
  }
}
