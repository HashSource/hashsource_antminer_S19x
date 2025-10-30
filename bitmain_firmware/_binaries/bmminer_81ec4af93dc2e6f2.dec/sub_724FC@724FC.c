int __fastcall sub_724FC(char *a1, unsigned int a2, int *a3)
{
  char v5; // [sp+17h] [bp-Dh]
  unsigned __int8 v6; // [sp+17h] [bp-Dh]
  int v7; // [sp+18h] [bp-Ch]
  unsigned int i; // [sp+1Ch] [bp-8h]

  v5 = *a1;
  switch ( a2 )
  {
    case 2u:
      v7 = v5 & 0x1F;
      break;
    case 3u:
      v7 = v5 & 0xF;
      break;
    case 4u:
      v7 = v5 & 7;
      break;
    default:
      return 0;
  }
  for ( i = 1; i < a2; ++i )
  {
    v6 = a1[i];
    if ( (v6 & 0x80u) == 0 || v6 > 0xBFu )
      return 0;
    v7 = (v7 << 6) + (v6 & 0x3F);
  }
  if ( v7 >= 1114112 )
    return 0;
  if ( v7 >= 55296 && v7 < 57344 )
    return 0;
  if ( a2 == 2 && v7 <= 127 || a2 == 3 && v7 < 2048 || a2 == 4 && v7 < 0x10000 )
    return 0;
  if ( a3 )
    *a3 = v7;
  return 1;
}
