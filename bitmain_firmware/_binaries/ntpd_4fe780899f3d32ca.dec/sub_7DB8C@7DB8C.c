int __fastcall sub_7DB8C(int a1, int a2)
{
  char *v4; // r7

  if ( *(unsigned __int16 *)(a2 + 8) == 0x8000 )
    v4 = (char *)&unk_9F3D8;
  else
    v4 = off_B84C4[0];
  fprintf(stderr, off_B8560[0], *(_DWORD *)(a1 + 28));
  if ( *(unsigned __int16 *)(a2 + 12) <= 1u )
    fprintf(stderr, off_B8528[0], *(_DWORD *)(a2 + 52), v4);
  else
    fprintf(stderr, off_B84AC[0]);
  return (*(int (__fastcall **)(int, int))(a1 + 84))(a1, 1);
}
