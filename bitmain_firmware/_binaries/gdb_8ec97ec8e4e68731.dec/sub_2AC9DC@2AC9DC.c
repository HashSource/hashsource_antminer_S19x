int __fastcall sub_2AC9DC(int a1)
{
  int result; // r0

  if ( (*(_BYTE *)(a1 + 40) & 0x10) == 0 )
    return sub_2AC914((void **)a1);
  result = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 4 * (*(_BYTE *)(a1 + 40) & 7) + 132))();
  if ( result )
    return sub_2AC914((void **)a1);
  return result;
}
