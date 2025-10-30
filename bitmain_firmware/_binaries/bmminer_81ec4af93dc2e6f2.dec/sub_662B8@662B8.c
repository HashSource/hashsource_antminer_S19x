int __fastcall sub_662B8(int a1)
{
  char v3[2048]; // [sp+10h] [bp-81Ch] BYREF
  int v4; // [sp+810h] [bp-1Ch] BYREF
  int v5; // [sp+814h] [bp-18h]
  int v6; // [sp+818h] [bp-14h] BYREF
  __int16 v7; // [sp+81Ch] [bp-10h]
  __int16 v8; // [sp+81Eh] [bp-Eh]
  int v9; // [sp+820h] [bp-Ch]
  char v10; // [sp+825h] [bp-7h]
  char v11; // [sp+826h] [bp-6h]
  char v12; // [sp+827h] [bp-5h]

  v12 = 4;
  v11 = 5;
  v6 = 84191829;
  v4 = 0;
  v5 = 0;
  v9 = -2147482880;
  v8 = 9;
  v7 = 9;
  v10 = 6;
  if ( sub_62C28(a1, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v4, 8u) )
  {
    strcpy(v3, "get power enable status failed\n");
    sub_3AF5C(0, v3, 0, (int)v3);
    return -2147482880;
  }
  else
  {
    return (BYTE1(v5) << 8) | (unsigned __int8)v5;
  }
}
