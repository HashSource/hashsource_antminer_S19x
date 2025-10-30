int __fastcall sub_979D4(int a1, int *a2)
{
  unsigned int v2; // r3
  int v5; // r1
  size_t v7; // r5
  size_t v8; // r3
  char *v9; // r1

  v2 = a2[1];
  if ( v2 <= 1
    || (v5 = *a2, a2[1] = v2 - 2, *a2 = v5 + 2, v2 == 2)
    || (v7 = *(unsigned __int8 *)(v5 + 2), v8 = v2 - 3, v9 = (char *)(v5 + 3), v7 > v8) )
  {
    sub_95494((_DWORD *)a1, 50, 386, 159, (int)"ssl/statem/statem_clnt.c", 1304);
    return 0;
  }
  else
  {
    *a2 = (int)&v9[v7];
    a2[1] = v8 - v7;
    memcpy(*(void **)(a1 + 128), v9, v7);
    *(_DWORD *)(*(_DWORD *)(a1 + 128) + 256) = v7;
    return 1;
  }
}
