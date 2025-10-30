int __fastcall sub_2B0110(int a1, _DWORD *a2)
{
  unsigned __int8 v4; // [sp+7h] [bp-1h] BYREF

  if ( sub_2A87D8((int)&v4, 1u, a1) == 1 )
    return v4;
  if ( sub_2A6910() == 18 )
    return -1;
  *a2 = 1;
  return -1;
}
