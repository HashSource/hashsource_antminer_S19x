int __fastcall sub_63AF4(int a1, char a2)
{
  unsigned __int8 v4[32]; // [sp+810h] [bp-34h] BYREF
  int v5; // [sp+830h] [bp-14h] BYREF
  int v6; // [sp+834h] [bp-10h]
  int v7; // [sp+838h] [bp-Ch]
  unsigned __int16 i; // [sp+83Ch] [bp-8h]
  __int16 v9; // [sp+83Eh] [bp-6h]

  v7 = 0;
  v5 = -2130269611;
  v6 = 0;
  memset(v4, 0, sizeof(v4));
  v9 = 0;
  BYTE1(v6) = a2;
  for ( i = 2; i <= 5u; i += 2 )
  {
    v9 += *((unsigned __int8 *)&v5 + i);
    v9 += *((unsigned __int8 *)&v5 + i + 1) << 8;
  }
  HIWORD(v6) = v9;
  v7 = sub_61724(a1, (unsigned __int8 *)&v5, 8u, v4, 8u);
  if ( v7 )
    return -1;
  else
    return BYTE1(v6);
}
