int __fastcall sub_F5D94(int a1, _DWORD *a2)
{
  int v4; // r2

  if ( (_DWORD *)a1 != a2 )
  {
    sub_F5D2C((void **)a1);
    v4 = a2[1];
    *(_DWORD *)a1 = *a2;
    *a2 = 0;
    *(_DWORD *)(a1 + 4) = v4;
    a2[1] = 0;
  }
  return a1;
}
