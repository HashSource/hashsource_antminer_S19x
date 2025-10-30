int __fastcall sub_120294(int a1)
{
  int v1; // r0
  _DWORD v3[7]; // [sp+4h] [bp-24h] BYREF

  if ( (unsigned int)(a1 - 1) <= 8 )
    return a1 - 1;
  if ( !dword_6E1C5C )
    return -1;
  v3[0] = a1;
  v1 = sub_10BC4C(dword_6E1C5C, (int)v3);
  if ( v1 < 0 )
    return -1;
  else
    return v1 + 9;
}
