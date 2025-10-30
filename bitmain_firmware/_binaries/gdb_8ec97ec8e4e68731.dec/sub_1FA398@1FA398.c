int __fastcall sub_1FA398(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(__int16 *)(v1 + 4) > 0 && *(_BYTE *)v1 == 3 )
    return sub_1F91A0((int *)(a1 + 24), 0);
  else
    return 0;
}
