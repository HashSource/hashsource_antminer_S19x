_DWORD *__fastcall sub_275CB4(int a1)
{
  int v2; // r0
  int v3; // r4
  _DWORD *result; // r0
  _DWORD **v5; // r3
  unsigned int v6; // r12
  _DWORD *v7; // r12
  char *v8; // r2
  _DWORD **v9; // lr
  _DWORD *v10; // t1

  sub_2755DC(a1);
  v2 = ((int (__fastcall *)(int))loc_16CE10)(a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  result = sub_93028(((*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 12)) & 0xFFFFFFFC) + 4);
  v5 = *(_DWORD ***)(v3 + 12);
  v6 = *(_DWORD *)(v3 + 16) - (_DWORD)v5;
  if ( v6 >> 2 )
  {
    v8 = (char *)(result - 1);
    v9 = *(_DWORD ***)(v3 + 16);
    do
    {
      v10 = *v5++;
      *((_DWORD *)v8 + 1) = *v10;
      v8 += 4;
    }
    while ( v5 != v9 );
    v7 = (_DWORD *)((char *)result + v6);
  }
  else
  {
    v7 = result;
  }
  *v7 = 0;
  return result;
}
