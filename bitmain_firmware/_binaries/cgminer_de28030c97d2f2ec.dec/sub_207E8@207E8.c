int __fastcall sub_207E8(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v4; // r3
  _BYTE *v5; // r3
  char v10[2048]; // [sp+14h] [bp-810h] BYREF
  int v11; // [sp+814h] [bp-10h]
  int v12; // [sp+818h] [bp-Ch]
  unsigned __int8 v13; // [sp+81Eh] [bp-6h]
  unsigned __int8 v14; // [sp+81Fh] [bp-5h]

  v14 = 0;
  while ( 1 )
  {
    if ( !*a2 || !a3 )
    {
      if ( !a3 && !*a2 )
        return 1;
      return v14;
    }
    if ( !a2[1] )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        strcpy(v10, "hex2bin str truncated");
        sub_1E4EC(3, v10, 0);
      }
      return v14;
    }
    v13 = *a2;
    v12 = dword_6A934[v13];
    v4 = a2 + 1;
    a2 += 2;
    v13 = *v4;
    v11 = dword_6A934[v13];
    if ( v12 < 0 || v11 < 0 )
      break;
    v5 = a1++;
    *v5 = (16 * v12) | v11;
    --a3;
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    strcpy(v10, "hex2bin scan failed");
    sub_1E4EC(3, v10, 0);
  }
  return v14;
}
