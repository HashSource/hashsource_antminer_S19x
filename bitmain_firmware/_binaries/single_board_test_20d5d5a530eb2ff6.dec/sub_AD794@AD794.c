unsigned int __fastcall sub_AD794(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r3
  unsigned int result; // r0
  int v7; // r2
  _DWORD *v8; // [sp+4h] [bp-8h] BYREF

  v3 = a1;
  v8 = a1;
  result = *a1 & 0xFFFFFFFB;
  if ( result != 1 && v3[1] )
  {
    result = sub_B14D4(&v8, 0);
    v3 = v8;
  }
  *v3 = a2;
  if ( a2 == 1 )
  {
    if ( a3 )
      v7 = 255;
    else
      v7 = 0;
    v3[1] = v7;
  }
  else
  {
    v3[1] = a3;
  }
  return result;
}
