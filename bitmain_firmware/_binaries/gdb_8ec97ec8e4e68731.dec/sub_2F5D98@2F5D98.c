int __fastcall sub_2F5D98(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // r12
  int result; // r0
  _DWORD *v11; // r3

  v5 = *(_DWORD *)(a1 + 4);
  result = *(_DWORD *)(a1 + 24);
  if ( v5 != 5 * (v5 / 5) )
    goto LABEL_2;
  result = (int)sub_2AB3FC((void *)result, 16 * (v5 + 5));
  if ( result )
  {
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 24) = result;
LABEL_2:
    v11 = (_DWORD *)(result + 16 * v5);
    *v11 = a2;
    v11[1] = a3;
    v11[2] = a4;
    v11[3] = a5;
    *(_DWORD *)(a1 + 4) = v5 + 1;
    return 1;
  }
  return result;
}
