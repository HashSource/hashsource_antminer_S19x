int __fastcall sub_A3B18(int *a1, size_t *a2, int *a3)
{
  int v3; // r5
  size_t v8; // r3

  v3 = *a1;
  *a3 = 0;
  a1[343] = 0;
  if ( v3 > 768 && sub_A3748((int)a1) && (v8 = a2[154], *(_DWORD *)(v8 + 152)) )
    return sub_A376C(a1, *(char **)(v8 + 144), *(_DWORD *)(v8 + 148), a2 + 11, a2[10], a3);
  else
    return 2;
}
