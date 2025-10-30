int __fastcall sub_16EC6C(int a1)
{
  int v1; // r0
  _DWORD v3[6]; // [sp+0h] [bp-20h] BYREF

  if ( (unsigned int)(a1 - 1) <= 7 )
    return a1 - 1;
  if ( !dword_6E2F8C )
    return -1;
  v3[0] = a1;
  v1 = sub_10BC4C(dword_6E2F8C, (int)v3);
  if ( v1 < 0 )
    return -1;
  else
    return v1 + 8;
}
