_DWORD *__fastcall sub_1B240C(_DWORD *a1, unsigned int a2)
{
  int v4; // r2

  v4 = ((int (__fastcall *)(unsigned int))loc_1B7C78)(a2);
  if ( v4 )
  {
    sub_1B0D68(a1, a2, v4, 0);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
