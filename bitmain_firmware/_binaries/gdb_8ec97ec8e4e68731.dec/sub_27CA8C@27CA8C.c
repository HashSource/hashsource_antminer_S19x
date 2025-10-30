int __fastcall sub_27CA8C(int *a1)
{
  int result; // r0

  result = *a1;
  if ( (*(_BYTE *)(result + 44) & 4) != 0 )
  {
    (*(void (**)(void))(*(_DWORD *)(result + 156) + 36))();
    result = *a1;
  }
  *(_DWORD *)(result + 156) = a1[1];
  return result;
}
