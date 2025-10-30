void __fastcall sub_1C36A0(int a1, int a2)
{
  int v4; // r2

  sub_1C3654();
  v4 = dword_487C9C;
  if ( dword_487C9C > a1 )
  {
    memmove((void *)(dword_487C98 + 4 * a1 + 4), (const void *)(dword_487C98 + 4 * a1), 4 * (dword_487C9C - a1));
    v4 = dword_487C9C;
  }
  *(_DWORD *)(dword_487C98 + 4 * a1) = a2;
  dword_487C9C = v4 + 1;
}
