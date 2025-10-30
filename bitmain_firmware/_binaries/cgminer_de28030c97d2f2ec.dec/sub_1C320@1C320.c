int __fastcall sub_1C320(_BYTE *a1, int a2)
{
  _BYTE *v2; // r3
  int v3; // r3
  unsigned __int16 i; // [sp+Eh] [bp-6h]

  for ( i = 0; ; i = (i << 8) ^ dword_8657C[(unsigned __int8)(*v2 ^ HIBYTE(i))] )
  {
    v3 = a2--;
    if ( v3 <= 0 )
      break;
    v2 = a1++;
  }
  return i;
}
