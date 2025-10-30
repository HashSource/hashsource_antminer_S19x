int __fastcall sub_1BAC58(_DWORD *a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  int v9; // r12
  int v10; // r0
  _DWORD *v11; // r2

  v6 = a4;
  v9 = (int)a1;
  if ( a4 > 0 )
  {
    v10 = sub_171258(a1);
    v11 = *(_DWORD **)(v10 + 24);
    v9 = v10;
    if ( (int *)(((unsigned int)off_100FC + 3) & *v11) == (int *)((char *)&dword_10000 + 2) )
    {
      if ( v11[2] )
        v6 = 0;
    }
  }
  return sub_E9398(v9, a2, a3, v6, a5, a6);
}
