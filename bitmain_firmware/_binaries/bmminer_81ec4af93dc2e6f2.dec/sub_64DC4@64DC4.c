int __fastcall sub_64DC4(int a1, char a2)
{
  unsigned __int8 s[32]; // [sp+810h] [bp-34h] BYREF
  int v7; // [sp+830h] [bp-14h] BYREF
  int v8; // [sp+834h] [bp-10h]
  int v9; // [sp+838h] [bp-Ch]
  unsigned __int16 i; // [sp+83Ch] [bp-8h]
  __int16 v11; // [sp+83Eh] [bp-6h]

  v9 = 0;
  v7 = -2130269611;
  v8 = 0;
  memset(s, 0, sizeof(s));
  v11 = 0;
  BYTE1(v8) = a2;
  for ( i = 2; i <= 5u; i += 2 )
  {
    v11 += *((unsigned __int8 *)&v7 + i);
    v11 += *((unsigned __int8 *)&v7 + i + 1) << 8;
  }
  HIWORD(v8) = v11;
  v9 = sub_62DA0(a1, (unsigned __int8 *)&v7, 8u, s, 8u);
  if ( v9 )
    return -1;
  else
    return BYTE1(v8);
}
