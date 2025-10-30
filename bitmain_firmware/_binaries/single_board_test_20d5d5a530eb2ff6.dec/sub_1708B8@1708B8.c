void **__fastcall sub_1708B8(int a1, int *a2, void **a3)
{
  int v3; // r4
  _DWORD *v5; // r4
  int v6; // r1
  char *v7; // r0
  void **v9; // [sp+4h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 52);
  v9 = a3;
  if ( *(_DWORD *)(v3 + 4) )
  {
    v5 = (_DWORD *)(v3 + 88);
    do
    {
      while ( 1 )
      {
        v6 = *(v5 - 22);
        __pld(v5);
        if ( sub_125ADC(a2, v6) )
          break;
        v5 += 3;
        if ( !*(v5 - 21) )
          return v9;
      }
      v7 = (char *)*(v5 - 21);
      v5 += 3;
      sub_121F9C(v7, 0, &v9);
    }
    while ( *(v5 - 21) );
  }
  return v9;
}
