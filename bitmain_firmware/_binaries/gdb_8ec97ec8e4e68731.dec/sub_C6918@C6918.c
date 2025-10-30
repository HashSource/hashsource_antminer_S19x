int __fastcall sub_C6918(int a1, int a2, int a3, int *a4)
{
  _DWORD *v4; // r12
  int v5; // r2
  int v6; // lr

  v5 = *a4;
  if ( *a4 == 4 )
  {
    v4 = *(_DWORD **)(a1 + 16);
    v6 = 1;
    a1 = a4[1];
    a2 = a4[2];
    v5 = a4[3];
  }
  else
  {
    v6 = 0;
  }
  if ( *a4 == 4 )
  {
    v4[34] = a1;
    v4[35] = a2;
    v4[36] = v5;
  }
  return v6;
}
