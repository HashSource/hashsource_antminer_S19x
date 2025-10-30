int __fastcall sub_BD058(int a1, unsigned int a2)
{
  if ( a2 <= 1 )
    *(_DWORD *)(a1 + 52) = a2;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a2 <= 1 )
    return 1;
  sub_D0048(50, 102, 102, "crypto/ct/ct_sct.c", 76);
  return 0;
}
