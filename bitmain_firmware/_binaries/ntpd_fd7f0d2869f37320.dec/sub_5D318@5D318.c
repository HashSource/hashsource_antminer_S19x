int __fastcall sub_5D318(int a1, int a2)
{
  int v3; // r5
  _DWORD *v4; // r4
  int v5; // r3
  _BOOL4 v6; // r2
  int *v7; // r4
  int result; // r0

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  if ( (*(_BYTE *)(v3 + 768) & 2) == 0 && v4[5] <= (unsigned int)current_time )
  {
    v4[3] = -1;
    v4[6] = 1;
    sub_65D40(5, "ARCRON: unit %d: sending resync command", a1);
    sub_5D260((int)v4, "h\r");
    v4[5] = current_time + 3420;
  }
  v5 = v4[3];
  v6 = v5 <= 2;
  if ( v5 == -1 )
    v6 = 0;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 184) = 0;
  }
  else
  {
    v7 = *(int **)(a2 + 84);
    result = sub_5D260(*v7, "o\r");
    if ( result )
    {
      ++v7[194];
      return result;
    }
    v7[46] = 0;
  }
  return sub_39C88(a2, 3);
}
