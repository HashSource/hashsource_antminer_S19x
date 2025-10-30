int __fastcall sub_7F010(int a1, int a2)
{
  char *v4; // r7

  if ( *(unsigned __int16 *)(a2 + 8) == 0x8000 )
    v4 = (char *)&unk_A09D8;
  else
    v4 = off_B94C8;
  fprintf(stderr, off_B9564, *(_DWORD *)(a1 + 28));
  if ( *(unsigned __int16 *)(a2 + 12) <= 1u )
    fprintf(stderr, off_B952C, *(_DWORD *)(a2 + 52), v4);
  else
    fprintf(stderr, off_B94B0);
  return (*(int (__fastcall **)(int, int))(a1 + 84))(a1, 1);
}
