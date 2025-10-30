int __fastcall sub_7444C(int a1, __int16 a2)
{
  unsigned __int8 v3[4]; // [sp+8h] [bp-14h] BYREF
  __int16 v4; // [sp+Ch] [bp-10h]
  __int16 v5; // [sp+Eh] [bp-Eh]
  int v6; // [sp+10h] [bp-Ch] BYREF
  int v7; // [sp+14h] [bp-8h]

  v4 = (unsigned __int8)a2;
  v5 = a2 + 135;
  v6 = 0;
  v7 = 0;
  v3[0] = 85;
  v3[1] = -86;
  v3[2] = 6;
  v3[3] = -127;
  if ( sub_73B38(a1, v3, 8u, (unsigned __int8 *)&v6, 8u) )
    return sub_74414();
  else
    return (unsigned __int16)v7;
}
