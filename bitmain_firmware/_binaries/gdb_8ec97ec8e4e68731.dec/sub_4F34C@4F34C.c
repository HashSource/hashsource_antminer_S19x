bool __fastcall sub_4F34C(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r3
  int v3; // r0
  bool v4; // zf
  bool v5; // zf
  unsigned __int8 *v6; // [sp+4h] [bp-8h] BYREF

  v6 = a1;
  if ( (unsigned int)(sub_5431C(&v6, dword_474744, 0, 1) - 1) > 0xFFFFFFFD )
    return 0;
  v2 = v6;
  v3 = *v6;
  v4 = v3 == 9;
  if ( v3 != 9 )
    v4 = v3 == 32;
  if ( v4 )
  {
    do
    {
      v6 = ++v2;
      v3 = *v2;
      v5 = v3 == 9;
      if ( v3 != 9 )
        v5 = v3 == 32;
    }
    while ( v5 );
  }
  return v3 == 0;
}
