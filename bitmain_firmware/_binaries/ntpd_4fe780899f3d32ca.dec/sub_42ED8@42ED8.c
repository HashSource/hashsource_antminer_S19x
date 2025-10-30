ssize_t __fastcall sub_42ED8(int a1, int a2)
{
  int *v2; // r12
  int v3; // r4
  ssize_t result; // r0

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  result = write(*(_DWORD *)(*v2 + 4), &dword_BCD50, 6u);
  if ( result != 6 )
    perror("TIME_REQUEST");
  *(_BYTE *)(v3 + 73) = 0;
  return result;
}
