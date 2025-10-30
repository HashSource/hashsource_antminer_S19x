int __fastcall sub_1FA30C(int a1, int a2)
{
  int v3; // r6
  char *v4; // r0
  int v5; // r3
  char *v7; // r5
  size_t v8; // r0

  v3 = a1 + 8;
  v4 = sub_C25A8(a2);
  v5 = (unsigned __int8)*v4;
  if ( *v4 )
  {
    v7 = v4;
    v8 = sub_100308(v4);
    *(_DWORD *)a1 = v3;
    sub_1F955C((_DWORD *)a1, v7, (int)&v7[v8]);
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = v5;
    *(_BYTE *)(a1 + 8) = v5;
    return a1;
  }
}
