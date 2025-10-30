void __fastcall sub_154578(const char *a1)
{
  int v1; // r4
  unsigned __int8 *v2; // r0

  v1 = dword_487668;
  v2 = (unsigned __int8 *)sub_1542C0((int *)(dword_487668 + 8), a1, 1, (int)"prompt");
  if ( v2 == (unsigned __int8 *)-1 )
  {
    sub_259858("quit\n");
    sub_2435B0("quit", 1);
  }
  else if ( v2 )
  {
    *(_DWORD *)(v1 + 68) = 1;
    sub_15421C(v2);
    if ( *(_DWORD *)(v1 + 68) != 2 )
      sub_153DE0(0);
  }
  else
  {
    sub_153DE0("");
  }
}
