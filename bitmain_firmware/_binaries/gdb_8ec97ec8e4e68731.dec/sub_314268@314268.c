int __fastcall sub_314268(_DWORD *a1, int a2)
{
  _BYTE *v2; // r3
  int i; // r6
  _DWORD *v6; // r0
  int v7; // r0

  v2 = (_BYTE *)a1[3];
  for ( i = a1[10]; *v2 == 66; a2 = v7 )
  {
    a1[3] = v2 + 1;
    v6 = sub_314170((int)a1);
    v7 = sub_313728(a1, 75, __SPAIR64__((unsigned int)v6, a2));
    v2 = (_BYTE *)a1[3];
  }
  a1[10] = i;
  return a2;
}
